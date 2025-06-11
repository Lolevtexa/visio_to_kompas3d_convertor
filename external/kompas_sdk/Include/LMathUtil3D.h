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
// ���������� ����� - 20   kAPI3D5.dll
//-----------------------------------------------------------------------------
// �������� ��������� �� �������������� ������ �� ������� API.
// ---
MbRefItem * LIB_FUNC ksGetMathFromAPI( LPUNKNOWN pObj, long iObj );


// ���������� ����� - 21   kAPI3D5.dll
//-----------------------------------------------------------------------------
/// _2_ KsSetMathToAPI - ������� ������ API � ����� �������������� ��������.
// ---
BOOL LIB_FUNC ksSetMathToAPI( LPUNKNOWN pObj, MbRefItem * mathObj, long iObj );

// ���������� ����� - 24   kAPI3D5.dll
//-----------------------------------------------------------------------------
/// _3_ ksGetNameFromApi - �������� MbName c ������� API
// ---
void LIB_FUNC ksGetNameFromApi( LPUNKNOWN pObj, MbName & name);

}
#endif // __LMATHUTIL3D_H