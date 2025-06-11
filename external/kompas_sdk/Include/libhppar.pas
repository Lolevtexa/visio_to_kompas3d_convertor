unit LibHpPar;

interface
uses
  Windows, SysUtils, OleCtrls;

const
  LB_VERSION = 1; // ������ ���������� ����������

//-------------------------------------------------------------------------------
// ���� ������� �����������
// ---
type
LibObjInterfaceTypeEnum = TOleEnum;
const
  idd_ILibHPObject         = 1; // ��������� ���-�����                                                ILibHPObject, ILibHPObject1
  idd_ILibExternalObject   = 2; // ��������� ������ �����������                                       ILibExternalObject
  idd_ILibPropertyObject   = 3; // ��������� ������� �� ���������� ������������� � ���� �������       ILibPropertyObject
  idd_ILibPropertyObject3D = 4; // ��������� 3D ������� �� ���������� ������������� � ���� �������    ILibPropertyObject


//-------------------------------------------------------------------------------
// ���� ������� �����
// ---
type
ksHotPointEnum = TOleEnum;
const
  ksHPDefault           = -1;
  ksHPNormal            =  0; // �������
  ksHPSmall             =  1; // ���������
  ksHPRing              =  2; // ��������� ���� ��������
  ksHPBiDirArrow        =  3; // ��������� �����
  ksHPMiddlepoint       =  4; // ������� �����
  ksHPTriangleDisplaced =  5; // ��������� �����������
  ksHPVisibilityOn      =  6; // ���� - ������� ������
  ksHPVisibilityOff     =  7; // ������������� ���� - ������� ������

  ksHPTilt              = 12; // ������


{$ALIGN OFF}
type
//-------------------------------------------------------------------------------
// ��������� ���������� ��� ������� �����
// ---
PHotPointDescription = ^HotPointDescription;
HotPointDescription  = record
  // ��������� ����� � ������� ��������� �������
  x : Double;
  y : Double;
  // ��������� ������ (������������), ������������� ����� hot point'�
  // ��������!!! ����� �� ���������.
  //             ����� ������ ���� ����������� ���� �� �� �����
  //             ������ � ������������ ���������
  text       : PAnsiChar;
  // �������� �������� ������� ��� ����������� ��� ������
  cursorId   : Integer;
  cursorInst : HINST;
  enableJoin : Integer; // 0 - ��������� ����������� ������� ����� � ������� ����������, 1 - ��������� ����������� ������� ����� � �������� ������ ������ ��������
end;

//-------------------------------------------------------------------------------
// ��������� ���������� ��� ������� ����� ��� ��������������� ����������
// ---
PHotPointDescription1 = ^HotPointDescription1;
HotPointDescription1  = record
  // ��������� ������ (������������), ������������� ����� hot point'�
  text                  : PWideChar;  // ����� ��� UNICODE ������ HotPointDescription::text (���������)
  bitmapId              : Integer;    // ������������� ������� ����������� �����
  bitmapIdMove          : Integer;    // ������������� ������� ����������� ����� ��� ����������� ��� ������
  bitmapIdSelect        : Integer;    // ������������� ������� ����������� ����� ��� �� ��������������
  bitmapInst            : HINST;
  bitmapCO              : Integer;    // ������� ���������, � ������� �������������� ������ 0 - �� �����, 1 - �� ����, 2 - �� ���������
  enableJoin            : Integer;    // 0 - ��������� ����������� ������� ����� � ������� ����������, 1 - ��������� ����������� ������� ����� � �������� ������ ������ ��������
  hotPointAngle         : Double;     // ���� �������� ��� ����������� ������� �����
  hotPointOffset        : Double;     // �������� �������� ������� �����
  enableRotate          : Integer;    // 0 - ��������� ������� ���-�����, 1 - ��������� ������� ���-�����,- -1 �� ��������� ( ������� �������� ������ ��� ksHPTriangleDisplaced )
  bitmapFont            : PWideChar;  // ����� ��� ��������� ���-�����
  fontSymbolColor       : COLORREF;   // ���� ��� ��������� ���-�����
  fontSymbolScale       : Double;     // ��������������� ��� ��������� ���-�����
  hotPointOffsetType    : Integer;    // 1 �������� �������� ������ � ���������� ��������, 0 � ��������
  fontSymbolMoveColor   : COLORREF;   // ���� ��� ��������� ���-����� ��� �����������
  fontSymbolSelectColor : COLORREF;   // ���� ��� ��������� ���-����� ��� ��������������
end;

//-------------------------------------------------------------------------------
// ��������� ���������� �������� ������������� � ���� �������
// ---
PPropertyParam = ^PropertyParam;
PropertyParam  = record
  propertyType        : Integer;     // ��� ��������
  propertyId          : Integer;     // ������������� ������� ( ������������ ��� �������� ����� ��������, ������ ��������, ������ )
  propertyInstance    : HINST;       // ������ �������� ��� �������� ���������� �������� ( ���, ������ �������� ...)
  displayPropertyName : PWideChar;   // ������������ ��� �������� ( �������������� )
  propertyValue       : OleVariant;  // ������� ��������
  propertyMinValue    : Double;      // ����������� ��������
  propertyMaxValue    : Double;      // ������������ ��������
  isDefCpyProp        : Integer;     // ����� �������� ��� �����������
  enable              : Integer;     // ������� ����������� ��� ���������
  emptyValue          : Integer;     // �������� �� ������
  additionData        : OleVariant;  // �������������� ������ ��� �������� ( � ����������� �� ���� �������� ������ �������� ��� ������ �������� )
  additionText        : PWideChar;   // �������������� �����
  summList            : Integer;     // TRUE - ���������� ������, FALSE - ���������� ������
  readOnly            : Integer;     // TRUE - �������� �������� ������ ��� ������
  visible             : Integer;     // FALSE - �������� ������ � �� ����� ������������ � ���� �������
  sameProxyType       : Integer;     // FALSE - �������� �� ����� ������������ � ���� ������� ��� ��������� ���������

end;

{$ALIGN ON}

//-------------------------------------------------------------------------------
// ��������� ������� �����
// ---
PPILibHPObject = ^PILibHPObject;
PILibHPObject  = ^ILibHPObject;
ILibHPObject   = interface
['{234EBFE0-477B-11D4-A840-00504E05BD01}']
//public
  // ������������� � �������������� (Mouse L Btn Down)
  function LibHotPnt_Prepare( index : Integer ): LongBool; stdcall; //virtual; abstract;

  // ��������� �������������� (Mouse L Btn Up  )
  // success = TRUE  - ���������� ���������� ������
  //         = FALSE - �� ����� ������ ������ [Esc]
  function LibHotPnt_Complete( index : Integer; success : LongBool ): LongBool; stdcall; //virtual; abstract;

  // �������� ������ hot point'��
  // ��������!!! ������ ��� �������� ��� �������� �� ������ �������.
  //             ���������� ��������� � ������� points �������������� ������������
  //             � ������� LibHotPnt_Count()
  function LibHotPnt_Get( point : PHotPointDescription;
                          index : Integer ) : LongBool; stdcall; //virtual; abstract;

  // ���������� ��������� hot point'�
  function LibHotPnt_Set( point : PHotPointDescription;
                                    index : Integer ) : LongBool; stdcall; //virtual; abstract;

  // �������� ����� ��� ����������� ��������
  // ��������!!! � ���������� ������ ��������� �����,
  //             ���� �������� ������ �� ���������.
  function LibHotPnt_GetCursorText( index : Integer;
                                    Var text  : PAnsiChar ) : LongBool; stdcall; //virtual; abstract;

  // �������� ���� �������������� � ������ ������������ ���������
  // ��������!!! ���������� ���� ����� ��������������� � �������.
  //             ���������� ���� ����� ���������� ������� ������� DestroyMenu()
  function LibHotPnt_GetMenu : Integer; stdcall; //virtual; abstract;

  // ��������� ������� �� ����, ����������� �� LibHotPnt_GetMenu()
  // return = TRUE  - ��� �� ���������� � ��������� ������� � UNDO � �������� Hot point'��
  //        = FALSE - ������� �� ����������
  function LibHotPnt_ExecuteCommand( id : Integer ) : LongBool; stdcall; //virtual; abstract;

end;


//-------------------------------------------------------------------------------
// �������������� ��������� ������� �����. ���������� ���������� ILibHPObject
// ---
PPILibHPObject1 = ^PILibHPObject1;
PILibHPObject1  = ^ILibHPObject1;
ILibHPObject1   = interface
['{c8632527-f69f-4e22-9414-5f6433c33d07}']
  // ������������� � �������������� (Mouse L Btn Down)
  // �������� ������� �������� hot point
  // ��������!!! 1. ������� ���������� � ����� ��� ������ ����� (���������� ��������
  //                index), ���� �� ����� false
  //             2. �������� ��������� ���������� ������������� � �����������
  //                ������� ��������� �������
  function LibHotPnt_GetEx( point : PHotPointDescription1; index : Integer ): LongBool; stdcall; //virtual; abstract;

  // �������� ����� ��� ����������� ��������  ����� ��� UNICODE ������ ILibHPObject::LibHotPnt_GetCursorText
  // ��������!!! � ���������� ������ ��������� �����,
  //             ���� �������� ������ �� ���������.
  function LibHotPnt_GetCursorTextEx( index : Integer ): PWideChar; stdcall; //virtual; abstract;
  // �������� popup-���� �������������� � ������ ������������ ���������, ���� index = -1 �
  //                     � �������������� � ������ hot-������, ���� index > -1
  // ��������!!! ���������� ���� ����� ��������������� � �������.
  //             ���������� ���� ����� ���������� ������� ������� DestroyMenu()
  // �� ����� ���� �-�� ������ ���������� HMENU
  function LibHotPnt_GetMenuEx( index : Integer ) : LongBool; stdcall;   //virtual; abstract;

  // ���������� ��������� ������ �� ����, ����������� �� LibHotPnt_GetMenu() ��� LibHotPnt_GetMenuEx
  // TRUE - ������� �� ���� ��������
  // FALSE - ������� �� ���� �� ��������
  function LibHotPnt_UpdateCommand( id : Integer ) : LongBool; stdcall;  //virtual; abstract;

  // ������������� hot point
  function LibHotPnt_Select( index : Integer ): LongBool; stdcall;       //virtual; abstract;

  // ���������������� hot point
  function LibHotPnt_Unselect( index : Integer ): LongBool; stdcall;     //virtual; abstract;

end;

//-------------------------------------------------------------------------------
// ��������� ������ �����������
// ---
PPILibExternalObject = ^PILibExternalObject;
PILibExternalObject  = ^IILibExternalObject;
IILibExternalObject   = interface
['{234EBFE0-477B-11D4-A841-00504E05BD01}']
  function Lib_Move():       LongBool; stdcall;
  function Lib_Rotate():     LongBool; stdcall;
  function Lib_Transform():  LongBool; stdcall;
  function Lib_Delete():     LongBool; stdcall;
  function Lib_Restore():    LongBool; stdcall;
  function Lib_Deform():     LongBool; stdcall;
  function Lib_AddToModel(): LongBool; stdcall;
end;

//-------------------------------------------------------------------------------
// ��������� �������� ������������� �������
// ---
PPILibraryObject = ^PILibraryObject;
PILibraryObject  = ^ILibraryObject;
ILibraryObject   = interface
['{D92C71C4-A818-42ae-BF7B-FF140E6CFA97}']
  function GetVersion() : Integer; stdcall; { return LB_VERSION; }
end;


//-------------------------------------------------------------------------------
// ��������� ������� �� ���������� ������������� � ���� �������
// ---
PPILibPropertyObject = ^PILibPropertyObject;
PILibPropertyObject  = ^ILibPropertyObject;
ILibPropertyObject   = interface(ILibraryObject)
['{2DAA7C6C-3868-497b-BEC9-767E687687D8}']
  // ��� ������ ��������, �� ��������� �������������
  function GetGroupName(): PWideChar; stdcall;
  // �������� �������� � ������ �������
  function GetProperty( index : Integer; param : PPropertyParam ): LongBool; stdcall;
  // �������� ��������� ��������
  function UpdateProperty( param : PPropertyParam ): LongBool; stdcall;
  // ���������� ����� �������� ��� ��������
  function ApplyProperty( param : PPropertyParam ): LongBool; stdcall;
  // ������� ������� �������� �������������� ��� ����������������� �������� /*ksOPControlExternalEdit*/
  function OnChoiceProperty( param : PPropertyParam ): LongBool; stdcall;
  // ���������� �������������� ������� �������
  function EndEditProperty(): LongBool; stdcall;
end;

implementation

end.
