////////////////////////////////////////////////////////////////////////////////
//
// LMathUtil3D.h  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LMATHUTIL3D_H
#define __LMATHUTIL3D_H

class MbRefItem;
class MbName;

#define LIB_FUNC WINAPI
extern "C"
{
// Ёкспортный номер - 20   kAPI3D5.dll
//-----------------------------------------------------------------------------
// ѕолучить указатель на математический объект из объекта API.
// ---
MbRefItem * LIB_FUNC ksGetMathFromAPI( LPUNKNOWN pObj, long iObj );


// Ёкспортный номер - 21   kAPI3D5.dll
//-----------------------------------------------------------------------------
/// _2_ KsSetMathToAPI - —в€зать объект API с новым математическим объектом.
// ---
BOOL LIB_FUNC ksSetMathToAPI( LPUNKNOWN pObj, MbRefItem * mathObj, long iObj );

// Ёкспортный номер - 24   kAPI3D5.dll
//-----------------------------------------------------------------------------
/// _3_ ksGetNameFromApi - ѕолучить MbName c объекта API
// ---
void LIB_FUNC ksGetNameFromApi( LPUNKNOWN pObj, MbName & name);

}
#endif // __LMATHUTIL3D_H