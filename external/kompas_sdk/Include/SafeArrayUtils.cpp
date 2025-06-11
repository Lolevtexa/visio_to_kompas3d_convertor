////////////////////////////////////////////////////////////////////////////////
//
// Вспомогательные функциия для работы с SafeArray
//
// CopySArrayToVariantTempl      - Переложить значения из SArray<type> в SafeArray   
// CopyVariantToSArrayTempl      - Переложить значения из SafeArray в SArray<type>
// CopySArrayToVariant           - Создать массив типа double из SArray<double>
// CopySArrayToVariant           - Создать массив типа VARIANT_BOOL из SArray<VARIANT_BOOL>
// CopyVariantToSArray           - Наполнить SArray<VARIANT_BOOL> по VARIANT типа VT_ARRAY | VT_BOOL
// CopyVariantToSArray           - Наполнить SArray<double> по VARIANT типа VT_ARRAY | VT_R8
// CopyVariantToSArray           - Переложить массив байт из SafeArray в SArray
// CopyVariantToSArray           - Переложить значения из SafeArray в SArray<long>
// FillBSTRSafeArray             - Переложить элементы из strArray в safeArray
// FillStrArray                  - Переложить элементы из safeArray b strArray 
// TransformMbCartPointToVariant - Переложить значение точки в Variant - тип будет VT_ARRAY | VT_R8
// CopyVariantToSArray           - Переложить значения из SafeArray VT_DISPATCH в SArray<HFONT> 
// IsInt                         - Проверить является ли тип целочисленым или массивом целочиленных
// CopySArrayToVariant           - Создать массив типа VARIANT_BOOL из SArray<long>
// CopySArrayToVariant           - Создать массив типа VARIANT из RPArray<_variant_t>
// CopyVariantToSArray           - Переложить значения из SafeArray в PArray<_variant_t>
//
////////////////////////////////////////////////////////////////////////////////
#include "stdafx.h"

#include "SafeArrayUtils.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//-----------------------------------------------------------------------------
// _A_ Переложить значения из SArray<type> в SafeArray
//---
template < class Type >
BOOL CopySArrayToVariantTempl( const SArray<Type> & arr, VARIANT & v, VARENUM type ) 
{
  long arrCount = static_cast<long>(arr.Count());
  BOOL res = FALSE;
  
  if ( arrCount ) 
  {
    SAFEARRAY * psa = ::SafeArrayCreateVector( type, 0, arrCount );
    
    if (psa != NULL )
    {
      ::VariantInit(&v);
      V_VT(&v) = VT_ARRAY | type;
      V_ARRAY(&v) = psa;    
      
      // Наполнение массива  
      for ( long i = 0; i < arrCount; i++ ) 
        ::SafeArrayPutElement( psa, &i, &arr[i] );
      
      res = TRUE;
    }
  }
  return res;
}


//-----------------------------------------------------------------------------
//
//---
template < class Type >
BOOL CopySArrayToVariantTempl( const PArray<Type> & arr, VARIANT & v, VARENUM type ) 
{
  long arrCount = static_cast<long>(arr.Count());
  BOOL res = FALSE;
  
  if ( arrCount ) 
  {
    SAFEARRAY FAR * psa = ::SafeArrayCreateVector( type, 0, arrCount );
    
    if ( psa != NULL )
    {
      ::VariantInit(&v);
      V_VT(&v) = VT_ARRAY | type;
      V_ARRAY(&v) = psa;    
      
      // Наполнение массива  
      for ( long i = 0; i < arrCount; i++ ) 
        ::SafeArrayPutElement( psa, &i, arr[i] );
         
      res = TRUE;
    }
  }
  return res;
}


//-----------------------------------------------------------------------------
/// _15_ Создать массив типа VARIANT из RPArray<_variant_t>
// ---
BOOL CopySArrayToVariant( const PArray<_variant_t> & arr, VARIANT & v )
{
  return CopySArrayToVariantTempl( arr, v, VT_VARIANT );
}

//-----------------------------------------------------------------------------
/// _1_ Создать массив типа double из SArray<double>
// ---
BOOL CopySArrayToVariant( const SArray<double> & arr, VARIANT & v ) 
{
  return CopySArrayToVariantTempl( arr, v, VT_R8 );
}


//-----------------------------------------------------------------------------
///_2_ Создать массив типа VARIANT_BOOL из SArray<VARIANT_BOOL>
// ---
BOOL CopySArrayToVariant( const SArray<VARIANT_BOOL> & arr, VARIANT & v ) 
{
  return CopySArrayToVariantTempl( arr, v, VT_BOOL );
}


//-----------------------------------------------------------------------------
// _14_ Создать массив типа VARIANT_BOOL из SArray<long>
// ---
BOOL CopySArrayToVariant( const SArray<long> & arr, VARIANT & v ) 
{
  return CopySArrayToVariantTempl( arr, v, VT_I4 );
}


//-----------------------------------------------------------------------------
/// _B_ Переложить значения из SafeArray в SArray<type>
// ---
template <class Type>
BOOL CopyVariantToSArrayTempl( const VARIANT & v, SArray<Type> & arr, VARENUM type ) 
{
  BOOL res = FALSE;
  if ( v.vt == (VT_ARRAY | type) && v.parray ) {
    //массив должен быть одномерный
    int count = v.parray->rgsabound[0].cElements - v.parray->rgsabound[0].lLbound;
    
    if ( v.parray->cDims == 1 && count ) 
    {
      HRESULT hr;
      Type HUGEP *pvar;
      hr = ::SafeArrayAccessData(v.parray, (void HUGEP* FAR*)&pvar);
      if ( !FAILED(hr) && pvar ) 
      {
        arr.SetCArray( pvar, count );
        
        hr = ::SafeArrayUnaccessData(v.parray);
        if ( !FAILED(hr) )
          res = TRUE;
      }
    }
  }
  else
  {
    if ( v.vt == type )
      arr.Add( (Type)_variant_t(v) );
  }  

  return res;
}


//-----------------------------------------------------------------------------
// Наполнить SArray<VARIANT_BOOL> по VARIANT типа VT_ARRAY | VT_BOOL
//---
BOOL CopyVariantToSArray( const VARIANT & v, SArray<VARIANT_BOOL> & arr ) 
{
  return CopyVariantToSArrayTempl( v, arr, VT_BOOL );
}

//-----------------------------------------------------------------------------
// Наполнить SArray<double> по VARIANT типа VT_ARRAY | VT_R8
//---
BOOL CopyVariantToSArray( const VARIANT & v, SArray<double> & arr ) 
{
  return CopyVariantToSArrayTempl( v, arr, VT_R8 );
}


//-----------------------------------------------------------------------------
// Наполнить SArray<double> по VARIANT типа VT_ARRAY | VT_R4
//---
BOOL CopyVariantToSArray( const VARIANT & v, SArray<float> & arr ) 
{
  return CopyVariantToSArrayTempl( v, arr, VT_R4 );
}


//-----------------------------------------------------------------------------
// Переложить массив байт из SafeArray в SArray
// ---
BOOL CopyVariantToSArray( const VARIANT & var, SArray<unsigned char> &arr )
{
  return CopyVariantToSArrayTempl( var, arr, var.vt == (VT_ARRAY | VT_UI1) ? VT_UI1 : VT_I1 );
}


//-----------------------------------------------------------------------------
// Переложить значения из SafeArray в SArray<long>
//---
BOOL CopyVariantToSArray( const VARIANT & v, SArray<long> & arr ) 
{
  BOOL res = FALSE;
  bool isArray = false;
  
  if ( IsInt( v.vt, isArray ) )
    res =  CopyVariantToSArrayTempl( v, arr, (VARENUM)v.vt );

  return res;
}

//-------------------------------------------------------------------------------
// _6_ Переложить элементы из strArray в safeArray
// ---
BOOL FillBSTRSafeArray( VARIANT & safeArray, const PArray<_bstr_t> & strArray )
{
  safeArray.parray = NULL;  // XCH K9 08/09/06 инициализация указателя
  // для случая пустого массива строк
  long commentCount = static_cast<long>(strArray.Count());
  BOOL error = FALSE;
  
  if ( commentCount )
  {
    SAFEARRAYBOUND sabNewArray;
    
    sabNewArray.cElements = commentCount;
    sabNewArray.lLbound = 0;
    
    SAFEARRAY * saComment = SafeArrayCreate( VT_BSTR, 1, &sabNewArray );
    
    if( !saComment )
      error = TRUE;
    else {
      for ( long i = 0; i < commentCount; i++ ) {
        HRESULT hr = SafeArrayPutElement( saComment, &i, (void *)(BSTR)(*strArray[i]) );
        if ( FAILED(hr) ) {
          error = TRUE;
          break;
        }
        
      }
      
      if ( !error )
      {
        V_VT(&safeArray) = VT_ARRAY | VT_BSTR;
        V_ARRAY(&safeArray) = saComment;
      }
      else
      {
        if ( saComment ) 
          SafeArrayDestroy( saComment );
      }
    }
  }
  
  return !error;
} 


//-------------------------------------------------------------------------------
// Переложить элементы из safeArray в strArray 
// ---
BOOL FillStrArray( const VARIANT FAR & safeArray, PArray<_bstr_t> & strArray )
{
  BOOL error = FALSE;

  if ( safeArray.vt == VT_EMPTY || safeArray.vt == VT_BSTR || safeArray.vt == (VT_ARRAY | VT_BSTR) )
  {
    strArray.Flush();
    if ( safeArray.vt == VT_BSTR )  // Прислали одну строку
    {
      strArray.Add( new _bstr_t(safeArray.bstrVal) );
    }
    else if ( safeArray.parray && safeArray.vt == (VT_ARRAY | VT_BSTR) )
    {
      // Прислали непустой массив строк
      uint count = safeArray.parray->rgsabound[0].cElements - safeArray.parray->rgsabound[0].lLbound;
      if ( safeArray.parray->cDims == 1 ) {
        HRESULT hr;
        BSTR HUGEP *pvar = NULL;
        hr = ::SafeArrayAccessData( safeArray.parray, (void HUGEP* FAR*)&pvar );
        if ( !FAILED(hr) && pvar ) {
          
          // Добавляем комментарии в коллекцию
          for ( uint i = 0; i < count; i++ ) 
          {
            strArray.Add( new _bstr_t(pvar[i]) );
          }
          
          hr = ::SafeArrayUnaccessData( safeArray.parray );
          if ( FAILED(hr) )
            error = TRUE;
        }
        else
          error = TRUE;
      }
    }
  }

  return !error;
}


//-----------------------------------------------------------------------------
// Переложить значения из SafeArray в PArray<_variant_t>
// ---
BOOL _CopyVariantToSArray( const VARIANT & v, PArray<_variant_t> & arr )
{
  BOOL error = FALSE;

  if ( v.vt == (VT_ARRAY | VT_VARIANT) )
  {
    arr.Flush();

    if ( v.parray )
    {
      // Прислали непустой массив строк
      uint count = v.parray->rgsabound[0].cElements - v.parray->rgsabound[0].lLbound;

      if ( v.parray->cDims == 1 ) 
      {
        HRESULT hr;
        VARIANT HUGEP *pvar = NULL;
        hr = ::SafeArrayAccessData( v.parray, (void HUGEP* FAR*)&pvar );
        
        if ( !FAILED(hr) && pvar ) 
        {
          // Добавляем объект в коллекцию
          for ( uint i = 0; i < count; i++ )
            arr.Add( new _variant_t(pvar[i]) );
          
          hr = ::SafeArrayUnaccessData( v.parray );
          if ( FAILED(hr) )
            error = TRUE;
        }
        else
          error = TRUE;
      }
    }
  }
  else
    arr.Add( new _variant_t(v) );
  
  return !error;
}


//-----------------------------------------------------------------------------
// Переложить значения из SafeArray в PArray<_variant_t>
// ---
BOOL CopyVariantToSArray( const VARIANT & val, PArray<_variant_t> & arr )
{
  BOOL error = FALSE;
  bool isArr = false;
  arr.Flush();
  
  if ( val.vt == (VT_ARRAY | VT_VARIANT) || !(val.vt & VT_ARRAY) )
    error = ::_CopyVariantToSArray( val, arr );
  else
  {
    if ( val.vt == (VT_ARRAY | VT_R8) )
    {
      SArray<double> vals;
      error = ::CopyVariantToSArray( val, vals );
      for ( uint i = 0, count = vals.Count(); i < count; i++ )
        arr.Add( new _variant_t(vals[i]) );
    }
    else if ( val.vt == (VT_ARRAY | VT_R4) )
    {
      SArray<float> vals;
      error = ::CopyVariantToSArray( val, vals );
      for ( uint i = 0, count = vals.Count(); i < count; i++ )
        arr.Add( new _variant_t(vals[i]) );
    }
    else if ( IsInt( val.vt, isArr ) )
    {
      SArray<long> vals;
      error = ::CopyVariantToSArray( val, vals );
      for ( uint i = 0, count = vals.Count(); i < count; i++ )
        arr.Add( new _variant_t(vals[i]) );
    }
    else if ( (VT_ARRAY | VT_BSTR) )
    {
      PArray<_bstr_t> vals;
      error = ::FillStrArray( val, vals );
      for ( uint i = 0, count = vals.Count(); i < count; i++ )
        arr.Add( new _variant_t(*vals[i]) );
    }
  }

  return !error;
}


//-----------------------------------------------------------------------------
// Добавить font в массив
// ---
static void AddFont( LPDISPATCH fontDisp, SArray<HFONT> & arr )
{
  IFont * font = NULL;
  
  if ( fontDisp && SUCCEEDED(fontDisp->QueryInterface(IID_IFont, (void**)&font)) )
  {
    HFONT hFont;
    font->get_hFont( &hFont );
    
    // снимаю копию со шрифта
    LOGFONT lFont;
    
    if ( ::GetObject(hFont, sizeof(LOGFONT), &lFont) )
    {
      hFont = ::CreateFontIndirect( &lFont );   
      arr.Add( hFont );
    }  
    
    font->Release();
  }
}


//-----------------------------------------------------------------------------
// CopyVariantToSArray - Переложить значения из SafeArray VT_DISPATCH в SArray<HFONT> 
/**
  на входе SafeArray VT_DISPATCH- интерфейсов IFontDisp
  на выходе SArray<HFONT> КОПИЙ шрифтов, которые затем нужно удалить.
*/
//---
BOOL CopyVariantToSArray( const VARIANT & v, SArray<HFONT> & arr ) 
{
  BOOL res = FALSE;

  // массив
  if ( v.vt == (VT_ARRAY | VT_DISPATCH) && v.parray )
  {
    uint count = v.parray->rgsabound[0].cElements - v.parray->rgsabound[0].lLbound;
    
    if ( v.parray->cDims == 1 && count )
    {
      IDispatch HUGEP* HUGEP* pvar = NULL;
      HRESULT hr = ::SafeArrayAccessData(v.parray, (void HUGEP* FAR*)&pvar);
      
      if ( !FAILED(hr) && pvar ) 
      {       
        for ( uint i = 0; i < count; i ++ )
          AddFont( pvar[i], arr );
        
        hr = ::SafeArrayUnaccessData(v.parray);
        
        if ( !FAILED(hr) )
          res = TRUE;
      }
    }
  }
  // один элемент
  else if ( v.vt == VT_DISPATCH )
  {
    AddFont( v.pdispVal, arr );
    res = TRUE;
  }

  return res;
}


//-----------------------------------------------------------------------------
// Проверить является ли тип целочисленым или массивом целочиленных
// ---
BOOL IsInt( VARTYPE vt, bool & isArray )
{
  isArray = !!(vt & VT_ARRAY);
  vt = vt & ~VT_ARRAY;
  return vt == VT_I4 || vt == VT_INT || vt == VT_UINT || vt == VT_UI4;
}

//-------------------------------------------------------------------------------
// Выдать параметры в виде безопасного массива байтов. Изменяет размер массива
// ---
bool GetMacroParamToSAFEARRAY(void * pVoid, long parsSize, _variant_t & arr)
{
  bool res = false;

  SAFEARRAY *pArrayVal = NULL;
  SAFEARRAYBOUND arrayBound;
  CHAR HUGEP *pArray = NULL;

  // Задать границы массива
  arrayBound.lLbound = 0;
  arrayBound.cElements = parsSize;

  // Создадим безопасный массив байтов
  pArrayVal = ::SafeArrayCreate(VT_UI1, 1, &arrayBound);

  if (!(pArrayVal == NULL)) {                        // Массив создан

    HRESULT hr = ::SafeArrayAccessData(pArrayVal, (void HUGEP * FAR *)&pArray);

    if (SUCCEEDED(hr)) {                             // Массив доступен для изменений
      ::memcpy(pArray, pVoid, arrayBound.cElements); // Копируем данные в массив
      ::SafeArrayUnaccessData(pArrayVal);            // Закроем доступ к массиву
      V_VT(&arr) = VT_ARRAY | VT_UI1;               // Установим тип возвращаемого параметра : массивв байтов
      V_ARRAY(&arr) = pArrayVal;                       // Свяжем созданный массив с возвращаемым параметром
      res = true;
    }
    else {                                             // Массив не доступен
      ::SafeArrayDestroy(pArrayVal);                 // Удалим его 
    }
  }
  return res;
}


//-------------------------------------------------------------------------------
// Записать новые параметры. Возвращает размер занятой памяти в байтах.
// ---
long SetMacroParamBySAFEARRAY(void * pVoid, const VARIANT & arr)
{
  long parsSize = 0;

  // Убедимся что нам прислали массив байтов
  if (pVoid && arr.vt == (VT_ARRAY | VT_UI1) && arr.parray)
  {
                                          // массив должен быть одномерный 
    int count = arr.parray->rgsabound[0].cElements - arr.parray->rgsabound[0].lLbound;
    if (arr.parray->cDims == 1 && count) {

      HRESULT hr;
      void HUGEP *pvar;
      hr = ::SafeArrayAccessData(arr.parray, (void HUGEP* FAR*)&pvar);
      if (!FAILED(hr) && pvar) {

        parsSize = count;                   // размер занимаемой памяти 

        ::memcpy(pVoid, pvar, parsSize); // заполняем буффер данными из массива

        hr = ::SafeArrayUnaccessData(arr.parray);
      }
    }
  }

  return parsSize;
}
