Option Strict Off
Option Explicit On
Module ksConst
  '   ������!!!
  '   result >-1  �������� ���������� ��� �� ��������� ������
  '   result <0   ��������� ������ - ������ ������������


  Public Const MAXERROR As Short = 216


  ' ���� ����������
    Public Const lt_DocUnknown                = 0 ' ��� ��������� ���������
    Public Const lt_DocSheetStandart As Short = 1 ' ��� ��������� 1- ������ �����������
  Public Const lt_DocSheetUser As Short = 2 '               2- ������ �������������
  Public Const lt_DocFragment As Short = 3 '               3- ��������
  Public Const lt_DocSpc As Short = 4 '               4- ������������
  Public Const lt_DocPart3D As Short = 5 '               5- 3d-�������� ������
  Public Const lt_DocAssemble3D As Short = 6 '               6- 3d-�������� ������
  Public Const lt_DocTxtStandart As Short = 7 '               7- ��������� �������� �����������
  Public Const lt_DocTxtUser As Short = 8 '               8- ��������� �������� �������������
  Public Const lt_DocSpcUser As Short = 9 '               9- ������������ ������������� ������
  Public Const lt_DocTechnologyAssemble3D As Short = 10 '  10 - 3d-�������� ��������������� ������

  ' ���� ����� �������� ������
  Public Const txta_Left As Short = 0 ' ����� �������� �����
  Public Const txta_Center As Short = 1 ' ����� �������� �������
  Public Const txta_Right As Short = 2 ' ����� �������� ������

  ' ������� ���������
  Public Const lt_qsShaft As Short = 1 ' 1 - ����
  Public Const lt_qsHole As Short = 2 ' 2 - ���������

  ' ���������
  Public Const lt_qdPreferable As Short = 1 ' 1 - ����������������
  Public Const lt_qdBasic As Short = 2 ' 2 - ��������
  Public Const lt_qdAdditional As Short = 3 ' 3 - ��������������

  ' ���� ������ ��� LtVariant
  Public Const ltv_Char As Short = 1 ' 1 - ������
  Public Const ltv_UChar As Short = 2 ' 2 - ����
  Public Const ltv_Int As Short = 3 ' 3 - �����
  Public Const ltv_UInt As Short = 4 ' 4 - ����������� �����
  Public Const ltv_Long As Short = 5 ' 5 - ������� �����
  Public Const ltv_Float As Short = 6 ' 6 - ������������
  Public Const ltv_Double As Short = 7 ' 7 - ������� ������������
  Public Const ltv_Str As Short = 8 ' 8 - ������ 255 ��������
  Public Const ltv_NoUsed As Short = 9 ' 9 - ���� �� ������������
  Public Const ltv_Short As Short = 10 ' 10 - �������� �����
  Public Const ltv_WStr As Short = 11 ' 11 - ������ 255 �������� Unicode


  Public Const TEXT_LENGTH As Short = 128
  Public Const MAX_TEXT_LENGTH As Short = 255

  Public Const ODBC_DB As Short = 0
  Public Const TXT_DB As Short = 1

  Public Const TXT_CHAR As Short = 1
  Public Const TXT_USHORT As Short = 2
  Public Const TXT_SSHORT As Short = 3
  Public Const TXT_SLONG As Short = 4
  Public Const TXT_ULONG As Short = 5
  Public Const TXT_LONG As Short = 6
  Public Const TXT_FLOAT As Short = 7
  Public Const TXT_DOUBLE As Short = 8
  Public Const TXT_INT As Short = 9
  Public Const TXT_ALL As Short = 0
  Public Const TXT_INDEX As String = "Index1000"

  Public Const stACTIVE As Short = 0 ' ��������� ��� ����, ����, ���������
  Public Const stREADONLY As Short = 1 ' ��������� ��� ����, ����
  Public Const stINVISIBLE As Short = 2 ' ��������� ��� ����, ����
  Public Const stCURRENT As Short = 3 ' ��������� ��� ����, ����
  Public Const stPASSIVE As Short = 1 ' ��������� ��� ���������


  ' ����������� ��� ������� ksSytemPath
  Public Const sptSYSTEM_FILES As Short = 0 ' ������ ���� �� ������� ��������� ������
  Public Const sptLIBS_FILES As Short = 1 ' ������ ���� �� ������� ������ ���������
  Public Const sptAPPS_FILES As Short = 1  ' ������ ���� �� ������� ������ ����������
  Public Const sptTEMP_FILES As Short = 2 ' ������ ���� �� ������� ���������� ��������� ������
  Public Const sptCONFIG_FILES As Short = 3 ' ������ ���� �� ������� ���������� ������������ �������
  Public Const sptINI_FILE As Short = 4 ' ������ ������ ��� INI-����� �������
  Public Const sptBIN_FILE As Short = 5 ' ������ ���� �� ������� ����������� ������ �������
  Public Const sptPROJECT_FILES As Short = 6 ' ������ ���� �� ������� ���������� kompas.prj
  Public Const sptDESKTOP_FILES As Short = 7 ' ������ ���� �� ������� ���������� kompas.dsk
  Public Const sptTEMPLATES_FILES As Short = 8 ' ������ ���� �� ������� �������� ������-����������
  Public Const sptPROFILES_FILES As Short = 9 ' ������ ���� �� ������� ���������� �������� ������������
  Public Const sptWORK_FILES As Short = 10 ' ������ ���� �� ������� "��� ���������"
  Public Const sptSHEETMETAL_FILES As Short = 11 ' ������ ���� �� ������� ������ ������
  Public Const sptPARTLIB_FILES As Short = 12 ' ������ ���� �� ������� PartLib
  Public Const sptMULTILINE_FILES As Short = 13 ' ������ ���� � �������� �������� �����������
  Public Const sptPRINTDEVICE_FILES As Short = 14 ' ������ ���� � �������� ������������ ���������/���������
  Public Const sptCURR_WORK_FILES As Short = 15 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptCURR_LIBS_FILES As Short = 16 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptCURR_APPS_FILES As Short = 16 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptCURR_SYSTEM_FILES As Short = 17 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptCURR_PROFILES_FILES As Short = 18 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptCURR_SHEETMETAL_FILES As Short = 19 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptMULTY_APPS_FILES As Short = 20 ' ������ ������ ��������� ������ ����������
  Public Const sptDOC_LIBS_FILES As Short = 21 ' ������ ���� �� ������� ������ ��������� ����������
  Public Const sptMULTY_DOC_LIBS_FILES As Short = 22 ' ������ ������ ��������� ������ ��������� ����������
  Public Const sptCUR_DOC_LIBS_FILES As Short = 23 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptUTILS_FILES = 24 ' ������ ���� �� ������� ������
  Public Const sptMULTY_UTILS_FILES = 25 ' ������ ������ ��������� ������
  Public Const sptCURR_UTILS_FILES = 26 ' ����������� ��������� �����������, � ������� ����������� ��������/���������� ����� � ������� Open|Save
  Public Const sptPROGRAMDATA_FILES = 27 ' ������ ���� �� ������� ������ ���������� ( C:\ProgramData\ASCON\KOMPAS-3D\18 )


  ' ����������� ��� ���������� ������� SystemControlStart
  Public Const scsSTOPPED_FOR_MENU_COMMAND As Short = 1 ' ��������� ������� ���� "���������� ������ ����������"
  Public Const scsSTOPPED_FOR_SYSTEM_STOP As Short = 0 ' ���� �������� ������
  Public Const scsSTOPPED_FOR_ITSELF As Short = -1 ' ����� ������� SystemControlStop ��-��� ����������
  Public Const scsSTOPPED_FOR_START_THIS_LIB As Short = -2 ' �������������� ������� ��� ������� ��� �� ����������
  Public Const scsSTOPPED_FOR_START_ANOTHER_LIB As Short = -3 ' �������������� ������� ��� ������� ������ ����������

  '  ����������� ��� ������� GetObjParam � SetObjParam
  '  '+'  �������� �������, ��� ������� �����������  GetObjParam � SetObjParam
  '  '+-'  �������� �������, ��� ������� ���������� ������ GetObjParam
  Public Const ALLPARAM As Short = -1 ' ��� ��������� ������� � ������� ��������� ���������
  Public Const SHEET_ALLPARAM As Short = -2 ' ���� ��� �  ALLPARAM  �� ��������� ������� � �� �����
  Public Const NURBS_CLAMPED_PARAM As Short = -5 ' ��������� ������, ������������� ������� ������ � �������
  Public Const NURBS_CLAMPED_SHEETPARAM As Short = -6 ' ��������� ������ � �� �����, ������������� ������� ������ � �������
  Public Const VIEW_ALLPARAM As Short = -7 ' ��� ��������� ������� � �� ����

  Public Const ANGLE_ARC_PARAM As Short = 0 ' ��������� ���� �� ����� ( ��� ���� � ������������� ���� ) � �� ������� ���������
  Public Const POINT_ARC_PARAM As Short = 1 ' ��������� ���� �� ������ ( ��� ���� � ������������� ���� ) � �� ������� ���������
  Public Const ANGLE_ARC_SHEET_PARAM As Short = 2 ' ��������� ���� �� ����� ( ��� ���� � ������������� ���� ) � �� �����
  Public Const POINT_ARC_SHEET_PARAM As Short = 3 ' ��������� ���� �� ������ ( ��� ���� � ������������� ���� ) � �� �����
  Public Const ANGLE_ARC_VIEW_PARAM As Short = 4 ' ��������� ���� �� ����� ( ��� ���� � ������������� ���� ) � �� ����
  Public Const POINT_ARC_VIEW_PARAM As Short = 5 ' ��������� ���� �� ������ ( ��� ���� � ������������� ���� ) � �� ����

  Public Const VIEW_LAYER_STATE As Short = 1 ' ��������� ���� ,����
  Public Const DOCUMENT_STATE As Short = 1 ' ��������� ���������
  Public Const DOCUMENT_SIZE As Short = 0 ' ������ �����
  Public Const DIM_TEXT_PARAM As Short = 0 ' ��������� ������ ��� ��������
  Public Const DIM_SOURSE_PARAM As Short = 1 ' ��������� �������� �������
  Public Const DIM_DRAW_PARAM As Short = 2 ' ��������� ��������� �������
  Public Const DIM_VALUE As Short = 3 ' �������� ������� - double
  Public Const DIM_PARTS As Short = 4 ' ������������ ����� ��� �������� struct DimensionPartsParam
  Public Const SHEET_DIM_PARTS As Short = 5 ' ������������ ����� ��� �������� struct DimensionPartsParam � �� �����
  Public Const TECHNICAL_DEMAND_PAR As Short = -1 ' ��������� ����������� ���������� -
  Public Const TT_FIRST_STR As Short = 1000 ' ������ ������� ��� ��������� ��� ������ ������ �� �� �������
  Public Const CONIC_PARAM As Short = 2 ' ��������� ��� ���������� ����������� ������� ( ��� ������� � ������������� ���� )
  Public Const SPC_TUNING_PARAM As Short = 0 ' ��������� �������� ��� ����� ��
  Public Const HATCH_PARAM_EX As Short = 0 ' ��������� ��������� �����������
  Public Const ASSOCIATION_VIEW_PARAM As Short = 0 ' ��������� �������������� ����
  Public Const DIM_SOURSE_VIEWPARAM As Short = 7 ' ��������� �������� ������� � ������ ��������� ����
  Public Const DIM_DRAW_VIEWPARAM As Short = 8 ' ��������� ��������� ������� � ������ ��������� ����
  Public Const DIM_SOURSE_SHEETPARAM As Short = 9 ' ��������� �������� ������� � ������ ��������� �����
  Public Const DIM_DRAW_SHEETPARAM As Short = 10 ' ��������� ��������� ������� � ������ ��������� �����


  Public Const ALL_OBJ As Short = 0 ' ��� �������,����� ���������������, ������� ����� ������� � ���                    -
  Public Const LINESEG_OBJ As Short = 1 ' �������                        +
  Public Const CIRCLE_OBJ As Short = 2 ' ����������                     +
  Public Const ARC_OBJ As Short = 3 ' ����                           +
  Public Const TEXT_OBJ As Short = 4 ' �����                          +
  Public Const POINT_OBJ As Short = 5 ' �����                          +
  Public Const HATCH_OBJ As Short = 7 ' ���������                      +
  Public Const BEZIER_OBJ As Short = 8 ' bezier ������                  +
  Public Const LDIMENSION_OBJ As Short = 9 ' �������� ������                +
  Public Const ADIMENSION_OBJ As Short = 10 ' ������� ������                 +
  Public Const DDIMENSION_OBJ As Short = 13 ' ������������� ������           +
  Public Const RDIMENSION_OBJ As Short = 14 ' ���������� ������              +
  Public Const RBREAKDIMENSION_OBJ As Short = 15 ' ���������� ������ � �������    +
  Public Const ROUGH_OBJ As Short = 16 ' �������������                  +
  Public Const BASE_OBJ As Short = 17 ' ����                           +
  Public Const WPOINTER_OBJ As Short = 18 ' ������� ����                   +
  Public Const CUT_OBJ As Short = 19 ' ����� �������                  +
  Public Const LEADER_OBJ As Short = 20 ' ������� ����� �������                      +
  Public Const POSLEADER_OBJ As Short = 21 ' ����� ������� ��� ����������� �������      +
  Public Const BRANDLEADER_OBJ As Short = 22 ' ����� ������� ��� ����������� ���������    +
  Public Const MARKERLEADER_OBJ As Short = 23 ' ����� ������� ��� ����������� ������������ +
  Public Const TOLERANCE_OBJ As Short = 24 ' ������ �����                   +
  Public Const TABLE_OBJ As Short = 25 ' �������                        +     //������
  Public Const CONTOUR_OBJ As Short = 26 ' ������                         +     //�����
  Public Const MACRO_OBJ As Short = 27 ' ���������������� ������������  -
  Public Const LINE_OBJ As Short = 28 ' �����                          +
  Public Const LAYER_OBJ As Short = 29 ' ����                           +
  Public Const FRAGMENT_OBJ As Short = 30 ' �������� ��������              +
  Public Const POLYLINE_OBJ As Short = 31 ' ���������                      +
  Public Const ELLIPSE_OBJ As Short = 32 ' ������                         +
  Public Const NURBS_OBJ As Short = 33 ' nurbs ������                   +
  Public Const ELLIPSE_ARC_OBJ As Short = 34 ' ���� �������                   +
  Public Const RECTANGLE_OBJ As Short = 35 ' �������������                  +
  Public Const REGULARPOLYGON_OBJ As Short = 36 ' �������������                  +
  Public Const EQUID_OBJ As Short = 37 ' ������������                   +
  Public Const LBREAKDIMENSION_OBJ As Short = 38 ' �������� ������ � �������      +
  Public Const ABREAKDIMENSION_OBJ As Short = 39 ' ������� ������ � �������       +
  Public Const ORDINATEDIMENSION_OBJ As Short = 40 ' ������ ������
  Public Const COLORFILL_OBJ As Short = 41 ' ������� ������� ������         +
  Public Const CENTREMARKER_OBJ As Short = 42 ' ����������� ������             +
  Public Const ARCDIMENSION_OBJ As Short = 43 ' ������ ����� ����
  Public Const SPC_OBJ As Short = 44 ' ������ ������������            +
  Public Const RASTER_OBJ As Short = 45 ' ��������� ������               +
  Public Const CHANGE_LEADER_OBJ As Short = 46 ' ����������� ���������          +
  Public Const REMOTE_ELEMENT_OBJ As Short = 47 ' �������� �������               -
  Public Const AXISLINE_OBJ As Short = 48 ' ������ �����                   +
  Public Const OLEOBJECT_OBJ As Short = 49 ' ������� ole �������            -
  Public Const KNOTNUMBER_OBJ As Short = 50 ' ������ ����� ����              -
  Public Const BRACE_OBJ As Short = 51 ' ������ �������� ������         -
  Public Const POSNUM_OBJ As Short = 52 ' �����/����������� ����������� � ������-�������� -
  Public Const MARKONLDR_OBJ As Short = 53 ' �����/����������� ����������� �� �����          -
  Public Const MARKWOLDR_OBJ As Short = 54 ' �����/����������� ����������� ��� �����-������� -
  Public Const WAVELINE_OBJ As Short = 55 ' ��������� �����                -
  Public Const DIRAXIS_OBJ As Short = 56 ' ������ ���                     -
  Public Const BROKENLINE_OBJ As Short = 57 ' ����� ������ � ��������        -
  Public Const CIRCLEAXIS_OBJ As Short = 58 ' �������� ���                   -
  Public Const ARCAXIS_OBJ As Short = 59 ' ������� ���                    -
  Public Const CUTUNITMARKING As Short = 60 ' ����������� ���� � �������     -
  Public Const UNITMARKING As Short = 61 ' ����������� ����      -
  Public Const MULTITEXTLEADER As Short = 62 ' �������� ������� � ������������ ������������.      -
  Public Const EXTERNALVIEW_OBJ As Short = 63 ' ������� �������� ����                          -
  Public Const ANNLINESEG_OBJ As Short = 64 ' ������������� �������                 +- ��� GetObjParam ������������ ��������� LineSegParam
  Public Const ANNCIRCLE_OBJ As Short = 65 ' ������������� ����������              +- ��� GetObjParam ������������ ��������� CircleParam
  Public Const ANNELLIPSE_OBJ As Short = 66 ' ������������� ������                  +- ��� GetObjParam ������������ ��������� EllipseParam
  Public Const ANNARC_OBJ As Short = 67 ' ������������� ����                    +- ��� GetObjParam ������������ ��������� ArcParam
  Public Const ANNELLIPSE_ARC_OBJ As Short = 68 ' ������������� ���� �������            +- ��� GetObjParam ������������ ��������� EllipseArcParam
  Public Const ANNPOLYLINE_OBJ As Short = 69 ' ������������� ���������               +- ��� GetObjParam ������������ ��������� PolylineParam
  Public Const ANNPOINT_OBJ As Short = 70 ' ������������� �����                   +- ��� GetObjParam ������������ ��������� PointParam
  Public Const ANNTEXT_OBJ As Short = 71 ' ����� � ������������� ������ �������� +- ��� GetObjParam ������������ ��������� TextParam
  Public Const MULTILINE_OBJ As Short = 72 ' �����������                    -
  Public Const BUILDINGCUTLINE_OBJ As Short = 73 ' ����� �������/������� ��� ���� + ������������ ��������� CutLineParam
  Public Const ATTACHED_LEADER_OBJ As Short = 74 ' �������������� ����� ������� ( �� ����� ������� )  +
  Public Const CONDITIONCROSSING_OBJ As Short = 75 ' �������� �����������           -
  Public Const REPORTTABLE_OBJ As Short = 76 ' ������������� ������� ������
  Public Const EMBODIMENTSTABLE_OBJ As Short = 77 ' ������� ����������
  Public Const SPECIALCURVE_OBJ As Short = 78 ' ������ ������ ����
  Public Const ARRAYPARAMTABLE_OBJ As Short = 79 ' ������� ���������� �������
  Public Const NURBS_BY_POINTS_OBJ As Short = 80 ' NURBS - ������ �� ������                        +- ��� GetObjParam ������������ ��������� NurbsParam
  Public Const CONIC_CURVE_OBJ As Short = 81 ' ���������� ������                             +- ��� GetObjParam ������������ ��������� NurbsParam
  Public Const CONIC_CURVE_4POINT_OBJ As Short = 82 ' ���������� ������  �� 4 ������� � ����������� +- ��� GetObjParam ������������ ��������� NurbsParam
  Public Const CONIC_CURVE_5POINT_OBJ As Short = 83 ' ���������� ������  �� 5 �������               +- ��� GetObjParam ������������ ��������� NurbsParam
  Public Const CIRCULAR_CENTRES_OBJ = 84 ' �������� ����� �������
  Public Const LINEAR_CENTRES_OBJ = 85 ' �������� ����� �������
  Public Const ELLIPSE_ARC_AXIS_OBJ = 86 ' ������� ������ �����

  Public Const MAX_VIEWTIP_SEARCH As Short = 87 ' ������� ������� ����� ������ ��� �������� ����  -

  Public Const SPECIFICATION_OBJ As Short = 121 ' ������������ �� �����
  Public Const SPECROUGH_OBJ As Short = 122 ' ����������� �������������      +
  Public Const VIEW_OBJ As Short = 123 ' ���                            +
  Public Const DOCUMENT_OBJ As Short = 124 ' ��������  �����������          +   (���� ��� ��������)
  Public Const TECHNICALDEMAND_OBJ As Short = 125 ' ����������� ����������         +
  Public Const STAMP_OBJ As Short = 126 ' �����                          +  //������
  Public Const SELECT_GROUP_OBJ As Short = 127 ' ������ ��������������          -
  Public Const NAME_GROUP_OBJ As Short = 128 ' ������� ������                 -
  Public Const WORK_GROUP_OBJ As Short = 129 ' ������� ������                 -
  Public Const SPC_DOCUMENT_OBJ As Short = 130 ' ��������  ������������         +
  Public Const D3_DOCUMENT_OBJ As Short = 131 ' 3d ��������  ������ ��� ������ +
  Public Const CHANGE_LIST_OBJ As Short = 132 ' ������� ���������              -
  Public Const TXT_DOCUMENT_OBJ As Short = 133 ' ��������� ��������
  Public Const ALL_DOCUMENTS As Short = 134 ' ��������� ���� �����

  Public Const MAX_TIP_SEARCH As Short = 134 ' ������� ������� ����� ������   -
  Public Const ALL_OBJ_SHOW_ORDER As Short = -1000 ' ��� ������� ������� ����� ������� � ��� � ������� ���������



  ' ���� ��� ����� ����� ��������( ��������� ����� ) :
  ' 1  - ��������,
  ' 2  - ������,
  ' 3  - ������,
  ' 4  - ���������,
  ' 5  - ��������� �����
  ' 6  - ���������������,
  ' 7  - ����������,
  ' 8  - �����-������� � 2 �������,
  ' 9  - ��������� �������
  ' 10 -������ �������
  ' 11 -������, ���������� � ���������
  ' 12 - ISO ��������� �����
  ' 13 - ISO ��������� ����� (��. ������)
  ' 14 - ISO ��������������� ����� (��. �����)
  ' 15 - ISO ��������������� ����� (��. ����� 2 ��������)
  ' 16 - ISO ��������������� ����� (��. ����� 3 ��������)
  ' 17 - ISO ���������� �����
  ' 18 - ISO ��������������� ����� (��. � ���. ������)
  ' 19 - ISO ��������������� ����� (��. � 2 ���. ������)
  ' 20 - ISO ��������������� �����
  ' 21 - ISO ��������������� ����� (2 ������)
  ' 22 - ISO ��������������� ����� (2 ��������)
  ' 23 - ISO ��������������� ����� (3��������)
  ' 24 - ISO ��������������� ����� (2 ������ 2 ��������)
  ' 25 - ISO ��������������� ����� (2 ������ 3 ��������)


  ' ���� ��� ����� ��� �����( ��������� ����� ) :
  ' 0 - �����
  ' 1 - �������
  ' 2 - �-�����
  ' 3 - �������
  ' 4 - �����������
  ' 5 - ����������
  ' 6 - ������
  ' 7 - ������������� �������
  ' 8 - ���������� ����

  ' ���� ��� ��������� ��� ���������( ��������� ����� ) :
  ' 0  - ������
  ' 1  - ��������
  ' 2  - ������
  ' 3  - ������ ������������
  ' 4  - ��������
  ' 5  - �����
  ' 6  - ������
  ' 7  - ��������
  ' 8  - ������������ �����
  ' 9  - �������� �����
  ' 10 - ������ �������������
  ' 11 - �����������
  ' 12 - ����������� �����������
  ' 13 - ������ � ���������� �������
  ' 14 - �����

  ' ����������� ������ ��� ������
  Public Const INVARIABLE As Short = 0 ' �� ������ ����� ������

  Public Const NUMERATOR As Short = &H1S ' ���������
  Public Const DENOMINATOR As Short = &H2S ' �����������
  Public Const END_FRACTION As Short = &H3S ' ����� �����
  Public Const UPPER_DEVIAT As Short = &H4S ' ������� ����������
  Public Const LOWER_DEVIAT As Short = &H5S ' ������ ����������
  Public Const END_DEVIAT As Short = &H6S ' �����  ����������
  Public Const S_BASE As Short = &H7S ' ��������� ��������� ���� �����
  Public Const S_UPPER_INDEX As Short = &H8S ' ������� ������ ��������� ���� �����
  Public Const S_LOWER_INDEX As Short = &H9S ' ������ ������ ��������� ���� �����
  Public Const S_END As Short = &H10S ' ����� ��������� ���� �����
  Public Const SPECIAL_SYMBOL As Short = &H11S ' ��������
  Public Const SPECIAL_SYMBOL_END As Short = &H12S ' ��� ���������� � �������
  Public Const RETURN_BEGIN As Short = &H13S ' ������ ��� ����� ��������� ����� � ��������� � �������, ������, �����������
  Public Const RETURN_DOWN As Short = &H14S ' ��� ����� ��������� ����� � ��������� � �������, ������, �����������
  Public Const RETURN_RIGHT As Short = &H15S ' ��� ����� ����� ������ � ��������� � �������, ������, �����������
  Public Const TAB_ As Short = &H16S ' ��������� �� �������� �����
  Public Const FONT_SYMBOL As Short = &H17S ' ������ �����
  Public Const MARK_SEPARATOR As Short = &H18S ' ����������� � �����������
  Public Const FONT_SYMBOL_W As Short = &O2017S ' ������ ����� Unicode
  Public Const HYPER_TEXT As Short = &O2000S ' ������ �� ����� ��� ��������� �������

  Public Const ITALIC_ON As Short = &H40S ' �������� ������
  Public Const ITALIC_OFF As Short = &H80S ' �������� ������
  Public Const BOLD_ON As Short = &H100S ' �������� �������
  Public Const BOLD_OFF As Short = &H200S ' �������� �������
  Public Const UNDERLINE_ON As Short = &H400S ' �������� �������������
  Public Const UNDERLINE_OFF As Short = &H800S ' �������� �������������
  Public Const NEW_LINE As Short = &H1000S ' ����� ������ � ���������

  Public Const FONT_NAME As Short = 1 '  ��� �����
  'UPGRADE_NOTE: NARROWING was upgraded to NARROWING_ Click for more: 'ms-help://MS.VSCC.v80/dv_commoner/local/redirect.htm?keyword="A9E4979A-37FA-4718-9994-97DD76ED70A7"'
  Public Const NARROWING_ As Short = 2 '  ����������� ������� �����
  Public Const HEIGHT As Short = 3 '  ������ �����
  Public Const COLOR As Short = 4 '  ���� ������
  Public Const SPECIAL As Short = 5 '  ��������
  Public Const FRACTION_TYPE As Short = 6 '  ������ ����� �� ��������� � ������ 1-������ ������ 2-� 1.5 ���� ������ 3-� 2 ���� ������
  Public Const SUM_TYPE As Short = 7 '  ������ ��������� ���� ����� �� ��������� � ������ 1-������ ������ 2-� 1.5 ���� ������

  ' ���� style ��� ������( ��������� ����� ) :
  ' 0 -������������� ����� ��� ������� ���� �������
  ' 1  ����� �� �������
  ' 2  ����� ��� ����������� ����������
  ' 3  ����� ��������� ��������
  ' 4  ����� �������������
  ' 5  ����� ��� ����� �������  ( ����������� )
  ' 6  ����� ��� ����� �������  ( ���\��� ������ )
  ' 7  ����� ��� ����� �������  ( ����� )
  ' 8  ����� ��� ������� �����
  ' 9  ����� ��� ������� ( ��������� )
  ' 10 ����� ��� ������� ( ������ )
  ' 11 ����� ��� ����� �������
  ' 12 ����� ��� ������� ����
  ' 13 ����� ��� ��� ����������� �������������
  ' 14 ����� ��� ����������� ���������
  ' 15 ����� ��� �������� ������
  ' 16 ����� ��� ������ ����
  ' 17 ����� ��� �������� �������
  ' 18 ����� ��� ����������� ����
  ' 19 ����� ��� ����� ��������������� ���
  ' 20 ����� ��� ���(�����/����������� ����������� � ������-��������)
  ' 21 ����� ��� ���(�����/����������� �����������) �� �����
  ' 22 ����� ��� ���(�����/����������� �����������) ��� ����� �������
  ' 23 ����� ��� ���������� ������������
  ' 24 ����� ��� ����� ������� ��� ����
  ' 25 ����� ��� ������� ������ ( ��������� ).
  ' 26 ����� ��� ������� ������ ( ������ ).


  ' ***************************************************************/
  ' * ��������� ��� ������ � ���������� ����������  */
  ' ***************************************************************/
  Public Const CHAR_ATTR_TYPE As Short = 1
  Public Const UCHAR_ATTR_TYPE As Short = 2
  Public Const INT_ATTR_TYPE As Short = 3
  Public Const UINT_ATTR_TYPE As Short = 4
  Public Const LINT_ATTR_TYPE As Short = 5
  Public Const FLOAT_ATTR_TYPE As Short = 6
  Public Const DOUBLE_ATTR_TYPE As Short = 7
  Public Const STRING_ATTR_TYPE As Short = 8 ' ������ ������������� ����� MAX_TEXT_LENGTH
  Public Const RECORD_ATTR_TYPE As Short = 9

  ' ����������� ��� ��������� �������
  Public Const AUTONOMINAL As Short = &H1S ' >0 ����������� ������� ��������������
  Public Const RECTTEXT As Short = &H2S ' >0 ����� � �������
  Public Const PREFIX As Short = &H4S ' >0 ���� ����� �� ��������
  Public Const NOMINALOFF As Short = &H8S ' >0 ���  ��������
  Public Const TOLERANCE As Short = &H10S ' >0 �������� �����������
  Public Const DEVIATION As Short = &H20S ' >0 ���������� �����������
  Public Const UNIT As Short = &H40S ' >0 ������� ���������
  Public Const SUFFIX As Short = &H80S ' >0 ���� ����� ����� ��������
  Public Const DEVIATION_INFORM As Short = &H100S ' >0 ��� ���������� _DEVIATION, ���������� ���� � ������� �������( ���� ���� �� ������ ������������ ����������).
  '    ���������� �����  ������� GetObjParam, ����� ������������ ��� �������� ����������.
  Public Const UNDER_LINE As Short = &H200S ' >0 ������ � ��������������
  Public Const BRACKETS As Short = &H400S ' >0 ������ � �������
  Public Const SQUARE_BRACKETS As Short = &H800S ' >0 ������ � ���������� �������, ������������ ������ � _BRACKETS
  '  BRACKETS                    - ������ � ������� �������
  '  BRACKETS | _SQUARE_BRACKETS - ������ � ���������� �������

  Public Const INDICATIN_TEXT_LINE_ARR As Short = &HFFFFS ' ��� �������������, ����������� ����� �������, ���������� � ���������
  ' �������, ��� ��� ������ ������������ ������������ ������ TEXT_LINE_ARR

  ' ���� ������
  Public Const CURVE_STYLE As Short = 1 ' ����� �������
  Public Const HATCH_STYLE As Short = 2 ' ����� ���������
  Public Const TEXT_STYLE As Short = 3 ' ����� ������
  Public Const STAMP_STYLE As Short = 4 ' ����� ������
  Public Const CURVE_STYLE_EX As Short = 5 ' ����� ������� �����������

  ' curveType
  Public Const LIKE_BASIC_LINE As Short = &H10S ' ��������� ���� ��� �  �������� �����
  Public Const LIKE_THIN_LINE As Short = &H20S ' ��������� ���� ��� �  ������ �����
  Public Const LIKE_HEAVY_LINE As Short = &H30S ' ��������� ���� ��� �  ���������� �����

  ' ����������� ��� ������� GetSysOptions �  SetSysOptions
  Public Const DIMENTION_OPTIONS As Short = 1 ' ��������� �������
  Public Const SNAP_OPTIONS As Short = 1 ' ��������� ��������
  Public Const ARROWFILLING_OPTIONS As Short = 2 ' ��������� ������� ?
  Public Const SHEET_OPTIONS As Short = 3 ' ��������� �����
  Public Const SHEET_OPTIONS_EX As Short = 4 ' ��������� ����� ���������
  Public Const LENGTHUNITS_OPTIONS As Short = 5 ' ��������� ������ ���������
  Public Const SNAP_OPTIONS_EX As Short = 6 ' ��������� �������� ���������
  Public Const VIEWCOLOR_OPTIONS As Short = 7 ' ��������� ����� ���� �������� ���� 2d - ����������
  Public Const TEXTEDIT_VIEWCOLOR_OPTIONS As Short = 8 ' ��������� ����� ���� �������������� ������
  Public Const MODEL_VIEWCOLOR_OPTIONS As Short = 9 ' ��������� ����� ���� ��� �������
  Public Const OVERLAP_OBJECT_OPTIONS As Short = 10 ' ��������� ��������������� ��������
  Public Const DIMENTION_OPTIONS_EX As Short = 11 ' ��������� �������

  ' ���� ������� ��� ������������
  Public Const SPC_CLM_FORMAT As Short = 1 '  ������
  Public Const SPC_CLM_ZONE As Short = 2 '  ����
  Public Const SPC_CLM_POS As Short = 3 '  �������
  Public Const SPC_CLM_MARK As Short = 4 '  �����������
  Public Const SPC_CLM_NAME As Short = 5 '  ������������
  Public Const SPC_CLM_COUNT As Short = 6 '  ����������
  Public Const SPC_CLM_NOTE As Short = 7 '  ����������
  Public Const SPC_CLM_MASSA As Short = 8 '  �����
  Public Const SPC_CLM_MATERIAL As Short = 9 '  ��������
  Public Const SPC_CLM_USER As Short = 10 '  ����������������
  Public Const SPC_CLM_KOD As Short = 11 '  ���
  Public Const SPC_CLM_FACTORY As Short = 12 '  ����� ������������

  ' ���� �������� ��� ������� ������������
  Public Const SPC_INT As Short = 1 ' �����
  Public Const SPC_DOUBLE As Short = 2 ' ������������
  Public Const SPC_STRING As Short = 3 ' ������
  Public Const SPC_RECORD As Short = 4 ' ������

  ' ���� ������� ������
  Public Const CURVE_STYLE_LIBRARY As Short = 1 ' ���������� ������ ������ (*.lcs)
  Public Const HATCH_STYLE_LIBRARY As Short = 2 ' ���������� ������ ��������� (*.lhs)
  Public Const TEXT_STYLE_LIBRARY As Short = 3 ' ���������� ������ �������   (*.lts)
  Public Const STAMP_LAYOUT_STYLE_LIBRARY As Short = 4 ' ���������� ������ �������� ������� (*.lyt)
  Public Const GRAPHIC_LAYOUT_STYLE_LIBRARY As Short = 5 ' ���������� ������ ���������� ����������� ���������� (*.lyt)
  Public Const TEXT_LAYOUT_STYLE_LIBRARY As Short = 6 ' ���������� ������ ���������� ��������� ���������� (*.lyt)
  Public Const SPC_LAYOUT_STYLE_LIBRARY As Short = 7 ' ���������� ������ ���������� ������������ (*.lyt)

  ' ����������� � ���� ������ ��� �������� �����-����������� �������������
  Public Const ST_MIX_MM As Short = &H1S ' ����������
  Public Const ST_MIX_SM As Short = 0 ' ����������
  Public Const ST_MIX_DM As Short = &H2S ' ���������
  Public Const ST_MIX_M As Short = &H3S ' �����
  Public Const ST_MIX_GR As Short = 0 ' ������
  Public Const ST_MIX_KG As Short = &H10S ' ����������
  Public Const ST_MIX_EXT As Short = 0 ' ������������
  Public Const ST_MIX_RV As Short = &H20S ' ��������

  ' ��� ��������� ��������
  Public Const SN_NEAREST_POINT As Short = 1 ' ��������� �����
  Public Const SN_NEAREST_MIDDLE As Short = 2 ' ��������
  Public Const SN_CENTRE As Short = 3 ' �����
  Public Const SN_INTERSECT As Short = 4 ' �����������
  Public Const SN_GRID As Short = 5 ' �� �����
  Public Const SN_XY_ALIGN As Short = 6 ' ������������
  Public Const SN_ANGLE As Short = 7 ' ������� ��������
  Public Const SN_POINT_CURVE As Short = 8 ' ����� �� ������

  ' ���� ����� �������� ��� ��������
  Public Const SN_DYNAMICALLY As Short = &H1S ' �������� ����������� �����������
  Public Const SN_ASSISTANT As Short = &H2S ' ������ �����
  Public Const SN_BACKGROUND_LAYER As Short = &H4S ' ��������� ������� ���� � ����
  Public Const SN_SUSPENDED As Short = &H8S ' �������� ��������


  ' ���� ��������������� �����������
  Public Const CONSTRAINT_FIXED_POINT As Short = 1 ' ����������� �����
  Public Const CONSTRAINT_POINT_ON_CURVE As Short = 2 ' ����� �� ������
  Public Const CONSTRAINT_HORIZONTAL As Short = 3 ' �����������
  Public Const CONSTRAINT_VERTICAL As Short = 4 ' ���������
  Public Const CONSTRAINT_PARALLEL As Short = 5 ' �������������� ���� ������ ��� ��������
  Public Const CONSTRAINT_PERPENDICULAR As Short = 6 ' ������������������ ���� ������ ��� ��������
  Public Const CONSTRAINT_EQUAL_LENGTH As Short = 7 ' ��������� ���� ���� ��������
  Public Const CONSTRAINT_EQUAL_RADIUS As Short = 8 ' ��������� �������� ���� ���/�����������
  Public Const CONSTRAINT_HOR_ALIGN_POINTS As Short = 9 ' ����������� ��� ����� �� �����������
  Public Const CONSTRAINT_VER_ALIGN_POINTS As Short = 10 ' ����������� ��� ����� �� ���������
  Public Const CONSTRAINT_MERGE_POINTS As Short = 11 ' ���������� ���� �����
  Public Const CONSTRAINT_TANGENT_TWO_CURVES As Short = 15 ' ������� ���� ������
  Public Const CONSTRAINT_SYMMETRY_TWO_POINTS As Short = 16 ' �������� ���� �����
  Public Const CONSTRAINT_COLLINEAR As Short = 17 ' ������������� ��������
  Public Const CONSTRAINT_FIXED_ANGLE As Short = 18 ' ������������� ����
  Public Const CONSTRAINT_FIXED_LENGHT As Short = 19 ' ������������� �����
  Public Const CONSTRAINT_POINT_ON_CURVE_MIDDLE As Short = 20 ' ����� �� �������� ������
  Public Const CONSTRAINT_BISECTOR As Short = 21 ' �����������
  Public Const CONSTRAINT_CONCENTRICITY = 22 ' ���������� ������� �����������, ���, �������� � �����

  ' ���� �������� ������������
  Public Const SPC_BASE_OBJECT As Short = 1 ' ������� ������ (������������� �������������)
  Public Const SPC_COMMENT As Short = 2 ' �����������    (������������� �������������)
  Public Const SPC_SECTION_NAME As Short = 3 ' ������������ ������� ( ��������� �� ����� �� ������������� )
  Public Const SPC_BLOCK_NAME As Short = 4 ' ������������ ����� ���������� ( ��������� �� ����� �� ������������� )
  Public Const SPC_RESERVE_STR As Short = 5 ' ��������� ������ ( ��������� �� ����� �� ������������� )
  Public Const SPC_EMPTY_STR As Short = 6 ' ������ ������ ( ��������� �� ����� �� ������������� )

  ' ���� ����������
  Public Const SPC_SORT_OFF As Short = 0 ' ��� ����������
  Public Const SPC_SORT_COMPOS As Short = 1 ' ��������� ����������
  Public Const SPC_SORT_ALPHABET As Short = 2 ' ���������� �� ��������
  Public Const SPC_SORT_UP As Short = 3 ' ���������� �� ����������� �������
  Public Const SPC_SORT_DOCUMENT As Short = 4 ' ���������� ������� ������������
  Public Const SPC_SORT_DOWN As Short = 5 ' ���������� �� �������� �������
  Public Const SPC_SORT_COMPOSDOWN As Short = 6 ' ��������� ���������� �� ��������

  ' //////////////////////////////////////////////////////////////////////////////
  '
  '  ���� ����������� �������� ( ������������� ������ )
  '
  ' //////////////////////////////////////////////////////////////////////////////
  Public Const ARROW_INSIDE_SYMBOL As Short = 1 ' ������� �������
  Public Const ARROW_OUT_SIDE_SYMBOL As Short = 2 ' ������� �������
  Public Const TICK_TAIL_SYMBOL As Short = 3 ' ������� � ������������ ������ (� ���������)
  Public Const UP_HALF_ARROW_SYMBOL As Short = 4 ' ������� �������� ������� �������
  Public Const DOWN_HALF_ARROW_SYMBOL As Short = 5 ' ������ �������� ������� �������
  Public Const BIG_ARROW_INSIDE_SYMBOL As Short = 6 ' ������� ������� ������� (7��)
  Public Const ARROW_ORDINATE_DIM_SYMBOL As Short = 7 ' ������� ��� ������� ������(������ ������ 4 �� ��� ����� 45 ��)
  Public Const TRIANGLE_SYMBOL As Short = 8 ' ����������� �� ����-��� ������
  Public Const CIRCLE_RAD2_SYMBOL As Short = 9 ' ���������� �������� 2 �� ������ ������ - ��� ���-��� � �����-�������
  Public Const CENTRE_MARKER_SYMBOL As Short = 10 ' ����������� ���������� ������ � ���� �������� ������
  Public Const GLUE_SIGN_SYMBOL As Short = 11 ' ���� ����������
  Public Const SOLDER_SIGN_SYMBOL As Short = 12 ' ���� �����
  Public Const SEWING_SIGN_SYMBOL As Short = 13 ' ���� ��������
  Public Const CRAMP_SIGN_SYMBOL As Short = 14 ' ���� ���������� ���������� ������.�������
  Public Const CORNER_CRAMP_SIGN_SYMBOL As Short = 15 ' ���� �������� ���������� ������.�������
  Public Const MONTAGE_JOINT_SYMBOL As Short = 16 ' ���� ���������� ���
  Public Const TICK_SYMBOL As Short = 17 ' ������� ��� ����������� ������ (��� ��������)
  Public Const TRIANGLE_CURR_CS As Short = 18 ' ����������� �� ������� �� - ��� ����
  Public Const ARROW_CLOSED_INSIDE As Short = 19 ' �������� ������� �������
  Public Const ARROW_CLOSED_OUTSIDE As Short = 20 ' �������� ������� �������
  Public Const ARROW_OPEN_INSIDE As Short = 21 ' �������� ������� �������
  Public Const ARROW_OPEN_OUTSIDE As Short = 22 ' �������� ������� �������
  Public Const ARROW_RIGHTANGLE_INSIDE As Short = 23 ' ������� 90 ���� �������
  Public Const ARROW_RIGHTANGLE_OUTSIDE As Short = 24 ' ������� 90 ���� �������
  Public Const SYMBOL_DOT As Short = 25 ' ����� (������� ����� ����� ������� �������)
  Public Const SYMBOL_SMALLDOT As Short = 26 ' ����� ��������� (������� ����� 0.6 ����� ������� �������)
  Public Const AUXILIARY_POINT As Short = 27 ' ��������������� �����
  Public Const LEFT_TICK_SYMBOL As Short = 28 ' ������� � �������� �����

  ' ���� ���������������� ������������ ��������
  Public Const CHAR_STR_ARR As Short = 1 ' ������������ ������ ���������� �� ������ ��������
  Public Const POINT_ARR As Short = 2 ' ������������ ������ ���������� �� �������������� ����� -��������� MathPointParam
  Public Const CURVE_PATTERN_ARR As Short = 2 ' ������������ ������ ���������� �� ������� ��������� ����� -��������� CurvePattern
  Public Const TEXT_LINE_ARR As Short = 3 ' ������������ ������ ����� ������ - ��������� TextLineParam
  Public Const TEXT_ITEM_ARR As Short = 4 ' ������������ ������ ��������� ����� ������ ��������� TextItemParam
  Public Const ATTR_COLUMN_ARR As Short = 5 ' ������������ ������ ������� ����������- ���������  ColumnInfo
  Public Const USER_ARR As Short = 6 ' ������������ ���������������� ������
  Public Const POLYLINE_ARR As Short = 7 ' ������������ ������ ���������-(���������� �������� POINT_ARR)
  Public Const RECT_ARR As Short = 8 ' ������������ ������ ���������� ���������������-(��������� RectParam)
  Public Const LIBRARY_STYLE_ARR As Short = 9 ' ������������ ������ �������� ���������� ��� ����� � ���������� ������( LibraryStyleParam )
  Public Const VARIABLE_ARR As Short = 10 ' ������������ ������ �������� ���������� ��������������� ����������( VariableParam )
  Public Const CURVE_PATTERN_ARR_EX As Short = 11 ' ������������ ������ ���������� �� ������� ��������� ����� -��������� CurvePatternEx
  Public Const LIBRARY_ATTR_TYPE_ARR As Short = 12 ' ������������ ������ �������� ���������� ��� ���� �������� � ���������� ����� ���������( LibraryAttrTypeParam )
  Public Const NURBS_POINT_ARR As Short = 13 ' ������������ ������ �������� NurbsPointParam
  Public Const DOUBLE_ARR As Short = 14 ' ������������ ������ duuble
  Public Const CONSTRAIN_ARR As Short = 15 ' ������������ ������ ��������������� ����������� - ��������� ConstrainParam
  Public Const CORNER_ARR As Short = 16 ' ������������ ������ �������� ���������� ����� CornerParam ��� ��������������� � ���������������
  Public Const DOC_SPCOBJ_ARR As Short = 17 ' ������������ ������ �������� ���������� ������������� ���������� � ������� ������������
  Public Const SPCSUBSECTION_ARR As Short = 18 ' ������������ ������ �������� ���������� ���������� ������������ SpcSubSectionParam
  Public Const SPCTUNINGSEC_ARR As Short = 19 ' ������������ ������ �������� ���������� ��������� ������� ������������ SpcTuningSectionParam
  Public Const SPCSTYLECOLUMN_ARR As Short = 20 ' ������������ ������ �������� ���������� ����� ������� ������� ������������ SpcStyleColumnParam
  Public Const SPCSTYLESEC_ARR As Short = 21 ' ������������ ������ �������� ���������� ����� ������a ������������ SpcStyleSectionParam
  Public Const QUALITYITEM_ARR As Short = 22 ' ������������ ������ �������� QualityItemParam - ������ �� ����� ��������� ��� ������-�� ���������
  Public Const LTVARIANT_ARR As Short = 23 ' ������������ ������ �������� LtVariant
  Public Const TOLERANCEBRANCH_ARR As Short = 24 ' ������������ ������ �������� ToleranceBranch
  Public Const HATCHLINE_ARR As Short = 25 ' ������������ ������ �������� HatchLineParam
  Public Const TREENODEPARAM_ARR As Short = 26 ' ������������ ������ �������� ���� ������ TreeNodeParam

  '-----------------------------------------------------------------------------
  ' ����������� ��� ����������� � ��������� ������
  ' ---
  Public Const FORMAT_BMP As Short = 0
  Public Const FORMAT_GIF As Short = 1
  Public Const FORMAT_JPG As Short = 2
  Public Const FORMAT_PNG As Short = 3
  Public Const FORMAT_TIF As Short = 4
  Public Const FORMAT_TGA As Short = 5
  Public Const FORMAT_PCX As Short = 6
  Public Const FORMAT_WMF As Short = 16
  Public Const FORMAT_EMF As Short = 17

  '-----------------------------------------------------------------------------
  ' ����������� ��� ��������� ����� ���������� �������
  ' ---
  Public Const BLACKWHITE As Short = 0 ' ���� ������
  Public Const COLORVIEW As Short = 1 ' ���� ������������� ��� ����
  Public Const COLORLAYER As Short = 2 ' ���� ������������� ��� ����
  Public Const COLOROBJECT As Short = 3 ' ���� ������������� ��� �������

  '-----------------------------------------------------------------------------
  ' ����������� ��� �� ������ ��� ����������� � ��������� ������
  ' ---
  Public Const BPP_COLOR_01 As Short = 1 ' "������"
  Public Const BPP_COLOR_02 As Short = 2 ' "4 �����"
  Public Const BPP_COLOR_04 As Short = 4 ' "16 ������"
  Public Const BPP_COLOR_08 As Short = 8 ' "256 ������"
  Public Const BPP_COLOR_16 As Short = 16 ' "16 ��������"
  Public Const BPP_COLOR_24 As Short = 24 ' "24 �������"
  Public Const BPP_COLOR_32 As Short = 32 ' "32 �������"

  '-----------------------------------------------------------------------------
  ' ������������ ��������� ����� ���� ������ ���������� ����������  LtNodeType
  ' ---
  Public Const tn_root As Short = 0 ' ������ ������
  Public Const tn_dir As Short = 1 ' ����� (����������)
  Public Const tn_file As Short = 2 ' �������� (����)

  '------------------------------------------------------------------------------
  ' ���� ����������� �����
  ' ---
  Public Const VIEW_FRONT As Short = &H1S ' �������
  Public Const VIEW_REAR As Short = &H2S ' �����
  Public Const VIEW_UP As Short = &H4S ' ������
  Public Const VIEW_DOWN As Short = &H8S ' �����
  Public Const VIEW_LEFT As Short = &H10S ' �����
  Public Const VIEW_RIGHT As Short = &H20S ' ������
  Public Const VIEW_ISO As Short = &H40S ' ���������

  '------------------------------------------------------------------------------
  ' ���� ������ ������� "�������� �������" LtRemoteElmSignType
  ' ---
  Public Const re_Circle As Short = 0 ' ����������
  Public Const re_Rectangle As Short = 1 ' �������������
  Public Const re_Ballon As Short = 2 ' ����������� �������������

  '------------------------------------------------------------------------------
  ' ��� ��������� ������� �������� ChangeOrderType
  ' ---
  Public Const co_Top As Short = 1 ' ���� ����
  Public Const co_Bottom As Short = 2 ' ���� ����
  Public Const co_BeforeObject As Short = 3 ' ����� ��������
  Public Const co_AfterObject As Short = 4 ' �� ��������
  Public Const co_UpLevel As Short = 5 ' �� ������� ������
  Public Const co_DownLevel As Short = 6 ' �� ������� �����
  Public Const co_BeforeObjectByGroupOrder As Short = 7 ' ����� �������� (����������� ������� ������ � ������� �� ���������� � ������)
  Public Const co_AfterObjectByGroupOrder As Short = 8 ' �� �������� (����������� ������� ������ � ������� �� ���������� � ������)

  '------------------------------------------------------------------------------
  ' ���������� ������� ������
  ' ---
  Public Const OCR_SELECT As Short = &HFFFES ' ������ ����� SELECT
  Public Const OCR_SNAP As Short = &HFFFDS ' ������ ����� SNAP
  Public Const OCR_CATCH As Short = &HFFFCS ' ������ ����� CATCH
  Public Const OCR_DEFAULT As Short = 0 ' ������ � ���� ������

  Public Const OCR_DEDAULT As Short = 0 ' ������ � ���� ������

  '-----------------------------------------------------------------------------
  ' �������������� ���� ��� TextItemFont.color
  ' � ����� ����� ���� ��������� �� ��������� ���� �������� �� 0
  ' � ���� ������ ���� TextItemFont.color ����� �������� 0 �� ���������
  ' ����������� �� ���� � �� �� ����� ������������ ��� ���� �� ���������
  ' ��� ���� ����� ����������� ����� �� �������� �����
  ' ��� �������� ���� �� �������� ��� ��������� FREE_COLOR
  ' ---
  Public Const FREE_COLOR As Integer = &HFF000000 '  �������������� ����
End Module