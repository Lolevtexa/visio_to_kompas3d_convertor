////////////////////////////////////////////////////////////////////////////////
//
// Вспомогательные функциия для работы с SafeArray
//
// CopySArrayToVariant           - Создать массив типа double из SArray<double>
// CopySArrayToVariant           - Создать массив типа VARIANT_BOOL из SArray<VARIANT_BOOL>
// CopyVariantToSArray           - Наполнить SArray<VARIANT_BOOL> по VARIANT типа VT_ARRAY | VT_BOOL
// CopyVariantToSArray           - Наполнить SArray<double> по VARIANT типа VT_ARRAY | VT_R8
// CopyVariantToSArray           - Переложить массив байт из SafeArray в SArray
// CopyVariantToSArray           - Переложить значения из SafeArray в SArray<long>
// FillBSTRSafeArray             - Переложить элементы из strArray в safeArray
// FillStrArray                  - Переложить элементы из safeArray b strArray 
// CopyVariantToSArray           - Переложить значения из SafeArray VT_DISPATCH в SArray<HFONT> 
// IsInt                         - Проверить является ли тип целочисленым или массивом целочиленных
// CopySArrayToVariant           - Создать массив типа VARIANT_BOOL из SArray<long>
// CopySArrayToVariant           - Создать массив типа VARIANT из RPArray<_variant_t>
// CopyVariantToSArray           - Переложить значения из SafeArray в PArray<_variant_t>
// GetMacroParamToSAFEARRAY      - Выдать параметры в виде безопасного массива байтов. Изменяет размер массива
// SetMacroParamBySAFEARRAY      - Записать новые параметры. Возвращает размер занятой памяти в байтах.
// CreateDispSafeArray           - Переложить массив указателей на интерфейсы объектов в массив VT_ARRAY | VT_DISPATCH
// FillObjects                   - Переложить массив указателей на интерфейсы объектов в массив например PArray<IDispatchPtr>
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __SAFEARRAYUTILS_H
#define __SAFEARRAYUTILS_H

#include <SArray.h>
#include <Parray.h>
#include <comdef.h>


// Создать массив типа double из SArray<double>
BOOL CopySArrayToVariant( const SArray<double> & arr, VARIANT & v );

// Создать массив типа VARIANT_BOOL из SArray<VARIANT_BOOL>
BOOL CopySArrayToVariant( const SArray<VARIANT_BOOL> & arr, VARIANT & v ) ;

// Создать массив типа VARIANT_BOOL из SArray<long>
BOOL CopySArrayToVariant( const SArray<long> & arr, VARIANT & v ) ;

// Создать массив типа VARIANT из RPArray<_variant_t>
BOOL CopySArrayToVariant( const PArray<_variant_t> & arr, VARIANT & v ) ;

// Наполнить SArray<VARIANT_BOOL> по VARIANT типа VT_ARRAY | VT_BOOL
BOOL CopyVariantToSArray( const VARIANT & v, SArray<VARIANT_BOOL> & arr );

// Наполнить SArray<double> по VARIANT типа VT_ARRAY | VT_R8
BOOL CopyVariantToSArray( const VARIANT & v, SArray<double> & arr );

// Наполнить SArray<double> по VARIANT типа VT_ARRAY | VT_R4
BOOL CopyVariantToSArray( const VARIANT & v, SArray<float> & arr );

// Переложить массив байт из SafeArray в SArray
BOOL CopyVariantToSArray( const VARIANT & var, SArray<unsigned char> &arr );

// Переложить значения из SafeArray в SArray<long>
BOOL CopyVariantToSArray( const VARIANT & v, SArray<long> & arr ); 

// Переложить значения из SafeArray в PArray<_variant_t>
BOOL CopyVariantToSArray( const VARIANT & v, PArray<_variant_t> & arr ); 

// Переложить элементы из strArray в safeArray
BOOL FillBSTRSafeArray( VARIANT & safeArray, const PArray<_bstr_t> & strArray ); 

// Переложить элементы из safeArray b strArray 
BOOL FillStrArray     ( const VARIANT & safeArray, PArray<_bstr_t> & strArray );

// Выдать параметры в виде безопасного массива байтов. Изменяет размер массива
bool GetMacroParamToSAFEARRAY(void * pVoid, long parsSize, _variant_t & arr);
// Записать новые параметры. Возвращает размер занятой памяти в байтах.
long SetMacroParamBySAFEARRAY(void * pVoid, const VARIANT & arr);

// Переложить значения из SafeArray VT_DISPATCH в SArray<HFONT> 
BOOL CopyVariantToSArray( const VARIANT & v, SArray<HFONT> & arr );

// Проверить является ли тип целочисленым или массивом целочиленных
BOOL IsInt( VARTYPE vt, bool & isArray );

//-----------------------------------------------------------------------------
// Переложить массив указателей на интерфейсы объектов в массив VT_ARRAY | VT_DISPATCH
// ---
template < class T >
_variant_t CreateDispSafeArray(PArray<T> & objects)
{
  _variant_t res;

  int count = objects.Count();
  if (count)
  {

    SAFEARRAYBOUND sabNewArray;
    sabNewArray.cElements = count;
    sabNewArray.lLbound = 0;

    // Выделяем память под массив
    SAFEARRAY __RPC_FAR * psa = SafeArrayCreate(VT_DISPATCH, 1, &sabNewArray);
    res.vt = VT_ARRAY | VT_DISPATCH;
    res.parray = psa;

    for (long i = 0; i < count; i++)        // Пройдём по всем объектам
    {
    // Положим его в массив
    ::SafeArrayPutElement(psa, &i, (void *)(LPDISPATCH)*objects[i]);
    }
  }
  return res;
}

//-----------------------------------------------------------------------------
// Переложить массив указателей на интерфейсы объектов в массив например PArray<IDispatchPtr>
// ---
template < class T >
void FillObjects(_variant_t &varArr, PArray<T> & objects)
{
  if (varArr.vt == (VT_ARRAY | VT_DISPATCH) && varArr.parray)
  {
    LPDISPATCH obj = NULL;
    int count = varArr.parray->rgsabound[0].cElements;
    for (long i = 0; i < count; i++)        // Пройдём по всем объектам
    {
      SafeArrayGetElement(varArr.parray, &i, &obj);
      if (obj)
      {
        objects.Add(new T(obj));
        obj->Release();
        obj = NULL;
      }
    }
  }
  else if (varArr.vt == VT_DISPATCH)
  {
    objects.Add(new T(varArr.pdispVal));
  }
}


#endif  // __SAFEARRAYUTILS_H
