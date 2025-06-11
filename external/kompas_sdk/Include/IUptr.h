////////////////////////////////////////////////////////////////////////////////
//
// IUptr.h  шаблон указателя на интерфейс
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __IUPTR_H
#define __IUPTR_H

#ifndef __MOBILE_VERSION__
#ifndef __unknwn_h__
#include <Unknwn.h>
#endif


////////////////////////////////////////////////////////////////////////////////
//
// IUPtr - Smart Interface Pointer - это СИММЕТРИЧНАЯ оболочка
//   Use:  IUPtr<IX, &IID_IX> spIX;
//   Do not use with IUnknown; IUPtr<IUnknown, &IID_IUnknown>
//     will not compile.  Instead, use IUnknownPtr.
//
////////////////////////////////////////////////////////////////////////////////
template <class T, const IID* piid>
class IUPtr {
private:
  // Pointer variable
  T* m_pI;

public:
  // Constructors
  IUPtr()                         : m_pI(0)     {}
  IUPtr( T* pI )                  : m_pI(pI)    { if ( m_pI != 0 ) m_pI->AddRef(); }
  IUPtr( IUnknown* pI )           : m_pI(0)     { if ( pI   != 0 ) pI->QueryInterface( *piid, (void **)&m_pI ); }
  IUPtr( const IUPtr<T,piid> & o ) : m_pI(o.m_pI){ if ( m_pI != 0 ) m_pI->AddRef(); }

  // Destructor
  ~IUPtr();

  // GUID
  const IID*  GetIid()          const { return piid; }

                // Conversion
  operator      T*()              const { return m_pI; }

                // сравнение на принадлежность одному сомпоненту
  bool          IsSame ( T* pI )  const;

                // Pointer operations
  T&            operator *()            { return *m_pI; }
  T**           operator &()            { return &m_pI; }
  T*            operator->()            { return m_pI;  }

                // Assignment from the same interface
  T*            operator= ( T* pI );

  IUPtr<T,piid> & operator= ( const IUPtr<T,piid> & o ) { operator=(o.m_pI); return *this; }

                // Assignment from another interface
  T*            operator= ( IUnknown* pI );

    operator bool() const  { return !!m_pI; }

    bool operator == ( T* p ) const { return IsSame( p ); }

    T * Detach() { T* res = m_pI; m_pI = 0; return res; }
}; // class IUPtr


////////////////////////////////////////////////////////////////////////////////
//
// для упрощения написания
//
////////////////////////////////////////////////////////////////////////////////
#define IU_NULL              ( (IUnknown*)NULL )
#define IUPTR(Interface)      IUPtr< I ## Interface, &IID_I ## Interface >

#ifdef __BORLANDC__  
////////////////////////////////////////////////////////////////////////////////
//
// IUnknownPtr is a smart interface for IUnknown.
//
////////////////////////////////////////////////////////////////////////////////
class IUnknownPtr
{
private:
  // Pointer variable
  IUnknown* m_pI;

public:
  // Constructors
  IUnknownPtr() : m_pI(0) {}
  IUnknownPtr(IUnknown* pI) : m_pI (pI) { if ( m_pI != 0 ) m_pI->AddRef(); }
  IUnknownPtr(IUnknown* pI, bool addRef ) : m_pI (pI) { if ( m_pI != 0 && addRef ) m_pI->AddRef(); }
  IUnknownPtr(const IUnknownPtr & o ) : m_pI( o.m_pI) { if ( m_pI != 0 ) m_pI->AddRef(); }

  // Destructor
  ~IUnknownPtr();

  // Conversion
  operator IUnknown*() const { return (IUnknown*)m_pI;}

  // Pointer operations
  IUnknown&  operator *() { return *m_pI;}
  IUnknown** operator &() { operator=((IUnknown*)NULL); return &m_pI;}
  IUnknown*  operator->() { return m_pI;}

  // Assignment
  IUnknown* operator = ( IUnknown* pI );
  IUnknownPtr & operator = ( const IUnknownPtr & o ) { operator=(o.m_pI); return *this; }
}; // class IUnknownPtr
#endif

////////////////////////////////////////////////////////////////////////////////
//
// конверт для интерфейса - это НЕСИММЕТРИЧНАЯ оболочка
//
////////////////////////////////////////////////////////////////////////////////
template <class T>
class IUEnv {
public :
  T * m_pI;
  IUEnv( T * pI ) : m_pI(pI) {};
  ~IUEnv() { if (m_pI) m_pI->Release(); }

  T* operator ->  () { return m_pI; }
  operator bool() const  { return !!m_pI; }

  bool operator == ( const T* ) const;

  T*    GetI         () const  { return m_pI; }
  void  SetI         ( T* pI ); 



private:
  IUEnv( const IUEnv & );
  void operator = ( const IUEnv & );
};


////////////////////////////////////////////////////////////////////////////////
//
//  IUPtr : реализация inline
//
////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------------
// Destructor
// ---
template <class T, const IID* piid>
inline IUPtr<T, piid>::~IUPtr() {
  if ( m_pI )
    m_pI->Release();
}


//------------------------------------------------------------------------------
// Assignment from the same interface
// ---
template <class T, const IID* piid>
inline T* IUPtr<T, piid>::operator = ( T* pI ) {
  if ( m_pI != pI ) {

    IUnknown* pOld = m_pI;    // Save current value.
    m_pI = pI;                  // Assign new value.

    if ( m_pI != 0 )
      m_pI->AddRef();

    if ( pOld != 0 )
      pOld->Release();           // Release the old interface.

  }

  return m_pI;
} // T* operator = ( T* pI )


//------------------------------------------------------------------------------
// Assignment from another interface
// ---
template <class T, const IID* piid>
inline T* IUPtr<T, piid>::operator = ( IUnknown* pI ) {
  IUnknown* pOld = m_pI;       // Save current value.
  m_pI = 0;

  // Query for correct interface.
  if ( pI != 0 )
    pI->QueryInterface( *piid, (void **)&m_pI );

  if ( pOld != 0 )
    pOld->Release();         // Release old pointer.

  return m_pI;
} // T* operator = ( IUnknown* pI )


inline bool IsSame( LPUNKNOWN pI1, LPUNKNOWN pI2 )
{
  bool yes = false;

  if ( pI1 == pI2 )
    yes = true;
  else if ( pI1 && pI2 )
  {
    IUnknown * thisSmth = NULL;
    pI1->QueryInterface( IID_IUnknown, (void **)&thisSmth );
    IUnknown * otherSmth = NULL;
    pI2  ->QueryInterface( IID_IUnknown, (void **)&otherSmth );

    yes = ( thisSmth == otherSmth );

    if ( thisSmth )
      thisSmth->Release();

    if ( otherSmth )
      otherSmth->Release();
  }

  return yes;
}


//------------------------------------------------------------------------------
// оператор сравнения
// ---
template <class T, const IID* iid>
inline bool IUPtr<T, iid>::IsSame( T* pI ) const
{
  return ::IsSame( pI, m_pI );
}
 
#ifdef __BORLANDC__  
////////////////////////////////////////////////////////////////////////////////
//
//  IUnknownPtr : реализация inline
//
////////////////////////////////////////////////////////////////////////////////

//------------------------------------------------------------------------------
// Destructor
// ---
inline IUnknownPtr::~IUnknownPtr() {
  if ( m_pI ) {
    IUnknown* pOld = m_pI;
    m_pI = 0;
    pOld->Release();
  }
}

//------------------------------------------------------------------------------
// Assignment
// ---
inline IUnknown* IUnknownPtr::operator = ( IUnknown* pI ) {
  if ( m_pI != pI ) {
    IUnknown* pOld = m_pI;      // Save current value.
    m_pI = pI;                  // Assign new value.

    if ( m_pI != 0 )
      m_pI->AddRef();

    if ( pOld != 0 )            // Release the old interface.
      pOld->Release();
  }

  return m_pI;
}
#endif

//------------------------------------------------------------------------------
//
// ---
template <class T>
inline void  IUEnv<T>::SetI( T* pI ) {
  IUnknown* pOld = m_pI;       // Save current value.
  m_pI = pI;                   // Assign new value.

  if ( pOld )
    pOld->Release();           // Release the old interface.
}


//------------------------------------------------------------------------------
//
// ---
template <class T>
inline bool IUEnv<T>::operator == ( const T* pI ) const {
  bool yes = false;

  if ( pI == m_pI ) {
    yes = true;
  }
  else {
    if ( pI && m_pI ) {

      IUnknown * thisSmth = NULL;
      m_pI    ->QueryInterface( IID_IUnknown, (void **)&thisSmth );
      IUnknown * otherSmth = NULL;
      ((T*)pI)->QueryInterface( IID_IUnknown, (void **)&otherSmth );

      yes = ( thisSmth == otherSmth );

      if ( thisSmth )
        thisSmth->Release();

      if ( otherSmth )
        otherSmth->Release();
    }
  }

  return yes;
}


#endif // __MOBILE_VERSION__
#endif


