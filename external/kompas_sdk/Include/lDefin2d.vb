Option Strict Off
Option Explicit On
Module ksConst
  '   Ошибки!!!
  '   result >-1  успешное завершение или не фатальные ошибки
  '   result <0   фатальные ошибки - работа прекращается


  Public Const MAXERROR As Short = 216


  ' типы документов
    Public Const lt_DocUnknown                = 0 ' нет активного документа
    Public Const lt_DocSheetStandart As Short = 1 ' тип документа 1- чертеж стандартный
  Public Const lt_DocSheetUser As Short = 2 '               2- чертеж нестандартный
  Public Const lt_DocFragment As Short = 3 '               3- фрагмент
  Public Const lt_DocSpc As Short = 4 '               4- спецификация
  Public Const lt_DocPart3D As Short = 5 '               5- 3d-документ модель
  Public Const lt_DocAssemble3D As Short = 6 '               6- 3d-документ сборка
  Public Const lt_DocTxtStandart As Short = 7 '               7- текстовый документ стандартный
  Public Const lt_DocTxtUser As Short = 8 '               8- текстовый документ нестандартный
  Public Const lt_DocSpcUser As Short = 9 '               9- спецификация нестандартный формат
  Public Const lt_DocTechnologyAssemble3D As Short = 10 '  10 - 3d-документ технологическая сборка

  ' типы точек привязки текста
  Public Const txta_Left As Short = 0 ' точка привязки слева
  Public Const txta_Center As Short = 1 ' точка привязки вцентре
  Public Const txta_Right As Short = 2 ' точка привязки справа

  ' система квалитета
  Public Const lt_qsShaft As Short = 1 ' 1 - вала
  Public Const lt_qsHole As Short = 2 ' 2 - отверстия

  ' квалитеты
  Public Const lt_qdPreferable As Short = 1 ' 1 - предпочтительные
  Public Const lt_qdBasic As Short = 2 ' 2 - основные
  Public Const lt_qdAdditional As Short = 3 ' 3 - дополнительные

  ' типы данных для LtVariant
  Public Const ltv_Char As Short = 1 ' 1 - символ
  Public Const ltv_UChar As Short = 2 ' 2 - байт
  Public Const ltv_Int As Short = 3 ' 3 - целое
  Public Const ltv_UInt As Short = 4 ' 4 - беззнаковое целое
  Public Const ltv_Long As Short = 5 ' 5 - длинное целое
  Public Const ltv_Float As Short = 6 ' 6 - вешественное
  Public Const ltv_Double As Short = 7 ' 7 - двойное вешественное
  Public Const ltv_Str As Short = 8 ' 8 - строка 255 символов
  Public Const ltv_NoUsed As Short = 9 ' 9 - пока не используется
  Public Const ltv_Short As Short = 10 ' 10 - короткое целое
  Public Const ltv_WStr As Short = 11 ' 11 - строка 255 символов Unicode


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

  Public Const stACTIVE As Short = 0 ' состояние для вида, слоя, документа
  Public Const stREADONLY As Short = 1 ' состояние для вида, слоя
  Public Const stINVISIBLE As Short = 2 ' состояние для вида, слоя
  Public Const stCURRENT As Short = 3 ' состояние для вида, слоя
  Public Const stPASSIVE As Short = 1 ' состояние для документа


  ' Определения для функции ksSytemPath
  Public Const sptSYSTEM_FILES As Short = 0 ' Выдать путь на каталог системных файлов
  Public Const sptLIBS_FILES As Short = 1 ' Выдать путь на каталог файлов библиотек
  Public Const sptAPPS_FILES As Short = 1  ' Выдать путь на каталог файлов приложений
  Public Const sptTEMP_FILES As Short = 2 ' Выдать путь на каталог сохранения временных файлов
  Public Const sptCONFIG_FILES As Short = 3 ' Выдать путь на каталог сохранения конфигурации системы
  Public Const sptINI_FILE As Short = 4 ' Выдать полное имя INI-файла системы
  Public Const sptBIN_FILE As Short = 5 ' Выдать путь на каталог исполняемых файлов системы
  Public Const sptPROJECT_FILES As Short = 6 ' Выдать путь на каталог сохранения kompas.prj
  Public Const sptDESKTOP_FILES As Short = 7 ' Выдать путь на каталог сохранения kompas.dsk
  Public Const sptTEMPLATES_FILES As Short = 8 ' Выдать путь на каталог шаблонов Компас-документов
  Public Const sptPROFILES_FILES As Short = 9 ' Выдать путь на каталог сохранения профилей пользователя
  Public Const sptWORK_FILES As Short = 10 ' Выдать путь на каталог "Мои документы"
  Public Const sptSHEETMETAL_FILES As Short = 11 ' Выдать путь на каталог таблиц сгибов
  Public Const sptPARTLIB_FILES As Short = 12 ' Выдать путь на каталог PartLib
  Public Const sptMULTILINE_FILES As Short = 13 ' Выдать путь к каталогу шаблонов мультилинии
  Public Const sptPRINTDEVICE_FILES As Short = 14 ' Выдать путь к каталогу конфигураций плоттеров/принтеров
  Public Const sptCURR_WORK_FILES As Short = 15 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptCURR_LIBS_FILES As Short = 16 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptCURR_APPS_FILES As Short = 16 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptCURR_SYSTEM_FILES As Short = 17 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptCURR_PROFILES_FILES As Short = 18 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptCURR_SHEETMETAL_FILES As Short = 19 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptMULTY_APPS_FILES As Short = 20 ' Выдать список каталогов файлов приложений
  Public Const sptDOC_LIBS_FILES As Short = 21 ' Выдать путь на каталог файлов библиотек документов
  Public Const sptMULTY_DOC_LIBS_FILES As Short = 22 ' Выдать список каталогов файлов библиотек документов
  Public Const sptCUR_DOC_LIBS_FILES As Short = 23 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptUTILS_FILES = 24 ' Выдать путь на каталог утилит
  Public Const sptMULTY_UTILS_FILES = 25 ' Выдать список каталогов утилит
  Public Const sptCURR_UTILS_FILES = 26 ' запоминание последних директориев, с которых выполнилось открытие/сохранение файла в диалоге Open|Save
  Public Const sptPROGRAMDATA_FILES = 27 ' Выдать путь на каталог данных приложения ( C:\ProgramData\ASCON\KOMPAS-3D\18 )


  ' Определения для результата функции SystemControlStart
  Public Const scsSTOPPED_FOR_MENU_COMMAND As Short = 1 ' Выполнена команда меню "Остановить работу библиотеки"
  Public Const scsSTOPPED_FOR_SYSTEM_STOP As Short = 0 ' Идет закрытие задачи
  Public Const scsSTOPPED_FOR_ITSELF As Short = -1 ' Вызов функции SystemControlStop из-под библиотеки
  Public Const scsSTOPPED_FOR_START_THIS_LIB As Short = -2 ' Принудительный останов при запуске той же библиотеки
  Public Const scsSTOPPED_FOR_START_ANOTHER_LIB As Short = -3 ' Принудительный останов при запуске другой библиотеки

  '  Определения для функций GetObjParam и SetObjParam
  '  '+'  отмечены объекты, для которых реализованы  GetObjParam и SetObjParam
  '  '+-'  отмечены объекты, для которых реализован только GetObjParam
  Public Const ALLPARAM As Short = -1 ' все параметры объекта в системе координат владельца
  Public Const SHEET_ALLPARAM As Short = -2 ' тоже что и  ALLPARAM  но параметры объекта в СК листа
  Public Const NURBS_CLAMPED_PARAM As Short = -5 ' параметры нурбса, преобразовать узловой вектор в зажатый
  Public Const NURBS_CLAMPED_SHEETPARAM As Short = -6 ' параметры нурбса в СК листа, преобразовать узловой вектор в зажатый
  Public Const VIEW_ALLPARAM As Short = -7 ' все параметры объекта в СК вида

  Public Const ANGLE_ARC_PARAM As Short = 0 ' параметры дуги по углам ( для дуги и эллиптической дуги ) в СК объекта владельца
  Public Const POINT_ARC_PARAM As Short = 1 ' параметры дуги по точкам ( для дуги и эллиптической дуги ) в СК объекта владельца
  Public Const ANGLE_ARC_SHEET_PARAM As Short = 2 ' параметры дуги по углам ( для дуги и эллиптической дуги ) в СК листа
  Public Const POINT_ARC_SHEET_PARAM As Short = 3 ' параметры дуги по точкам ( для дуги и эллиптической дуги ) в СК листа
  Public Const ANGLE_ARC_VIEW_PARAM As Short = 4 ' параметры дуги по углам ( для дуги и эллиптической дуги ) в СК вида
  Public Const POINT_ARC_VIEW_PARAM As Short = 5 ' параметры дуги по точкам ( для дуги и эллиптической дуги ) в СК вида

  Public Const VIEW_LAYER_STATE As Short = 1 ' состояние слоя ,вида
  Public Const DOCUMENT_STATE As Short = 1 ' состояние документа
  Public Const DOCUMENT_SIZE As Short = 0 ' размер листа
  Public Const DIM_TEXT_PARAM As Short = 0 ' параметры текста для размеров
  Public Const DIM_SOURSE_PARAM As Short = 1 ' параметры привязки размера
  Public Const DIM_DRAW_PARAM As Short = 2 ' параметры отрисовки размера
  Public Const DIM_VALUE As Short = 3 ' значение размера - double
  Public Const DIM_PARTS As Short = 4 ' составляющие части для размеров struct DimensionPartsParam
  Public Const SHEET_DIM_PARTS As Short = 5 ' составляющие части для размеров struct DimensionPartsParam в СК листа
  Public Const TECHNICAL_DEMAND_PAR As Short = -1 ' параметры технических требований -
  Public Const TT_FIRST_STR As Short = 1000 ' начало отсчета для получения или замены текста ТТ по строкам
  Public Const CONIC_PARAM As Short = 2 ' параметры для построения конического сечения ( для эллипса и эллтптической дуги )
  Public Const SPC_TUNING_PARAM As Short = 0 ' параметры настроек для стиля СП
  Public Const HATCH_PARAM_EX As Short = 0 ' параметры штриховки расширенные
  Public Const ASSOCIATION_VIEW_PARAM As Short = 0 ' параметры ассоциативного вида
  Public Const DIM_SOURSE_VIEWPARAM As Short = 7 ' параметры привязки размера в ситеме координат вида
  Public Const DIM_DRAW_VIEWPARAM As Short = 8 ' параметры отрисовки размера в ситеме координат вида
  Public Const DIM_SOURSE_SHEETPARAM As Short = 9 ' параметры привязки размера в ситеме координат листа
  Public Const DIM_DRAW_SHEETPARAM As Short = 10 ' параметры отрисовки размера в ситеме координат листа


  Public Const ALL_OBJ As Short = 0 ' все объекты,кроме вспомогательных, которые могут входить в вид                    -
  Public Const LINESEG_OBJ As Short = 1 ' отрезок                        +
  Public Const CIRCLE_OBJ As Short = 2 ' окружность                     +
  Public Const ARC_OBJ As Short = 3 ' дуга                           +
  Public Const TEXT_OBJ As Short = 4 ' текст                          +
  Public Const POINT_OBJ As Short = 5 ' точка                          +
  Public Const HATCH_OBJ As Short = 7 ' штриховка                      +
  Public Const BEZIER_OBJ As Short = 8 ' bezier сплайн                  +
  Public Const LDIMENSION_OBJ As Short = 9 ' линейный размер                +
  Public Const ADIMENSION_OBJ As Short = 10 ' угловой размер                 +
  Public Const DDIMENSION_OBJ As Short = 13 ' диаметральный размер           +
  Public Const RDIMENSION_OBJ As Short = 14 ' радиальный размер              +
  Public Const RBREAKDIMENSION_OBJ As Short = 15 ' радиальный размер с изломом    +
  Public Const ROUGH_OBJ As Short = 16 ' шероховатость                  +
  Public Const BASE_OBJ As Short = 17 ' база                           +
  Public Const WPOINTER_OBJ As Short = 18 ' стрелка вида                   +
  Public Const CUT_OBJ As Short = 19 ' линия разреза                  +
  Public Const LEADER_OBJ As Short = 20 ' простая линия выноски                      +
  Public Const POSLEADER_OBJ As Short = 21 ' линия выноски для обозначения позиции      +
  Public Const BRANDLEADER_OBJ As Short = 22 ' линия выноски для обозначения клеймения    +
  Public Const MARKERLEADER_OBJ As Short = 23 ' линия выноски для обозначения маркирования +
  Public Const TOLERANCE_OBJ As Short = 24 ' допуск формы                   +
  Public Const TABLE_OBJ As Short = 25 ' таблица                        +     //тексты
  Public Const CONTOUR_OBJ As Short = 26 ' контур                         +     //стиль
  Public Const MACRO_OBJ As Short = 27 ' нетипизированный макроэлемент  -
  Public Const LINE_OBJ As Short = 28 ' линия                          +
  Public Const LAYER_OBJ As Short = 29 ' слой                           +
  Public Const FRAGMENT_OBJ As Short = 30 ' вставной фрагмент              +
  Public Const POLYLINE_OBJ As Short = 31 ' полилиния                      +
  Public Const ELLIPSE_OBJ As Short = 32 ' эллипс                         +
  Public Const NURBS_OBJ As Short = 33 ' nurbs сплайн                   +
  Public Const ELLIPSE_ARC_OBJ As Short = 34 ' дуга эллипса                   +
  Public Const RECTANGLE_OBJ As Short = 35 ' прямоугольник                  +
  Public Const REGULARPOLYGON_OBJ As Short = 36 ' многоугольник                  +
  Public Const EQUID_OBJ As Short = 37 ' эквидистанта                   +
  Public Const LBREAKDIMENSION_OBJ As Short = 38 ' линейный размер с обрывом      +
  Public Const ABREAKDIMENSION_OBJ As Short = 39 ' угловой размер с обрывом       +
  Public Const ORDINATEDIMENSION_OBJ As Short = 40 ' размер высоты
  Public Const COLORFILL_OBJ As Short = 41 ' фоновая заливка цветом         +
  Public Const CENTREMARKER_OBJ As Short = 42 ' обозначение центра             +
  Public Const ARCDIMENSION_OBJ As Short = 43 ' размер длины дуги
  Public Const SPC_OBJ As Short = 44 ' объект спецификации            +
  Public Const RASTER_OBJ As Short = 45 ' растровый объект               +
  Public Const CHANGE_LEADER_OBJ As Short = 46 ' Обозначение изменения          +
  Public Const REMOTE_ELEMENT_OBJ As Short = 47 ' выносной элемент               -
  Public Const AXISLINE_OBJ As Short = 48 ' Осевая линия                   +
  Public Const OLEOBJECT_OBJ As Short = 49 ' Вставка ole объекта            -
  Public Const KNOTNUMBER_OBJ As Short = 50 ' объект номер узла              -
  Public Const BRACE_OBJ As Short = 51 ' объект фигурная скобка         -
  Public Const POSNUM_OBJ As Short = 52 ' марка/позиционное обозначение с линией-выноской -
  Public Const MARKONLDR_OBJ As Short = 53 ' марка/позиционное обозначение на линии          -
  Public Const MARKWOLDR_OBJ As Short = 54 ' марка/позиционное обозначение без линии-выноски -
  Public Const WAVELINE_OBJ As Short = 55 ' волнистая линия                -
  Public Const DIRAXIS_OBJ As Short = 56 ' прямая ось                     -
  Public Const BROKENLINE_OBJ As Short = 57 ' линия обрыва с изломами        -
  Public Const CIRCLEAXIS_OBJ As Short = 58 ' круговая ось                   -
  Public Const ARCAXIS_OBJ As Short = 59 ' дуговая ось                    -
  Public Const CUTUNITMARKING As Short = 60 ' Обозначение узла в сечении     -
  Public Const UNITMARKING As Short = 61 ' Обозначение узла      -
  Public Const MULTITEXTLEADER As Short = 62 ' Выносная надпись к многослойным конструкциям.      -
  Public Const EXTERNALVIEW_OBJ As Short = 63 ' Вставка внешнего вида                          -
  Public Const ANNLINESEG_OBJ As Short = 64 ' Аннотационный отрезок                 +- Для GetObjParam используется структура LineSegParam
  Public Const ANNCIRCLE_OBJ As Short = 65 ' Аннотационная окружность              +- Для GetObjParam используется структура CircleParam
  Public Const ANNELLIPSE_OBJ As Short = 66 ' Аннотационный эллипс                  +- Для GetObjParam используется структура EllipseParam
  Public Const ANNARC_OBJ As Short = 67 ' Аннотационная дуга                    +- Для GetObjParam используется структура ArcParam
  Public Const ANNELLIPSE_ARC_OBJ As Short = 68 ' Аннотационная дуга эллипса            +- Для GetObjParam используется структура EllipseArcParam
  Public Const ANNPOLYLINE_OBJ As Short = 69 ' Аннотационная полилиния               +- Для GetObjParam используется структура PolylineParam
  Public Const ANNPOINT_OBJ As Short = 70 ' Аннотационная точка                   +- Для GetObjParam используется структура PointParam
  Public Const ANNTEXT_OBJ As Short = 71 ' Текст с аннотационной точкой привязки +- Для GetObjParam используется структура TextParam
  Public Const MULTILINE_OBJ As Short = 72 ' Мультилиния                    -
  Public Const BUILDINGCUTLINE_OBJ As Short = 73 ' Линия разреза/сечения для СПДС + используется структура CutLineParam
  Public Const ATTACHED_LEADER_OBJ As Short = 74 ' Присоединенная линия выноски ( не имеет текстов )  +
  Public Const CONDITIONCROSSING_OBJ As Short = 75 ' Условное пересечение           -
  Public Const REPORTTABLE_OBJ As Short = 76 ' ассоциативная таблица отчета
  Public Const EMBODIMENTSTABLE_OBJ As Short = 77 ' таблица исполнений
  Public Const SPECIALCURVE_OBJ As Short = 78 ' Кривая общего вида
  Public Const ARRAYPARAMTABLE_OBJ As Short = 79 ' Таблица параметров массива
  Public Const NURBS_BY_POINTS_OBJ As Short = 80 ' NURBS - кривая по точкам                        +- Для GetObjParam используется структура NurbsParam
  Public Const CONIC_CURVE_OBJ As Short = 81 ' Коническая кривая                             +- Для GetObjParam используется структура NurbsParam
  Public Const CONIC_CURVE_4POINT_OBJ As Short = 82 ' Коническая кривая  по 4 точками и направлению +- Для GetObjParam используется структура NurbsParam
  Public Const CONIC_CURVE_5POINT_OBJ As Short = 83 ' Коническая кривая  по 5 точками               +- Для GetObjParam используется структура NurbsParam
  Public Const CIRCULAR_CENTRES_OBJ = 84 ' Круговая сетка центров
  Public Const LINEAR_CENTRES_OBJ = 85 ' Линейная сетка центров
  Public Const ELLIPSE_ARC_AXIS_OBJ = 86 ' Дуговая осевая линия

  Public Const MAX_VIEWTIP_SEARCH As Short = 87 ' Верхняя граница типов поиска для объектов вида  -

  Public Const SPECIFICATION_OBJ As Short = 121 ' спецификация на листе
  Public Const SPECROUGH_OBJ As Short = 122 ' неуказанная шероховатость      +
  Public Const VIEW_OBJ As Short = 123 ' вид                            +
  Public Const DOCUMENT_OBJ As Short = 124 ' документ  графический          +   (лист или фрагмент)
  Public Const TECHNICALDEMAND_OBJ As Short = 125 ' технические требования         +
  Public Const STAMP_OBJ As Short = 126 ' штамп                          +  //тексты
  Public Const SELECT_GROUP_OBJ As Short = 127 ' группа селектирования          -
  Public Const NAME_GROUP_OBJ As Short = 128 ' именная группа                 -
  Public Const WORK_GROUP_OBJ As Short = 129 ' рабочая группа                 -
  Public Const SPC_DOCUMENT_OBJ As Short = 130 ' документ  спецификация         +
  Public Const D3_DOCUMENT_OBJ As Short = 131 ' 3d документ  модели или сборки +
  Public Const CHANGE_LIST_OBJ As Short = 132 ' таблица изменений              -
  Public Const TXT_DOCUMENT_OBJ As Short = 133 ' текстовый документ
  Public Const ALL_DOCUMENTS As Short = 134 ' документы всех типов

  Public Const MAX_TIP_SEARCH As Short = 134 ' верхняя граница типов поиска   -
  Public Const ALL_OBJ_SHOW_ORDER As Short = -1000 ' все объекты которые могут входить в вид в порядке отрисовки



  ' Поле тип линии имеет значения( системные стили ) :
  ' 1  - основная,
  ' 2  - тонкая,
  ' 3  - осевая,
  ' 4  - штриховая,
  ' 5  - волнистая линия
  ' 6  - вспомогательная,
  ' 7  - утолщенная,
  ' 8  - штрих-пунктир с 2 точками,
  ' 9  - штриховая толстая
  ' 10 -осевая толстая
  ' 11 -тонкая, включаемая в штриховку
  ' 12 - ISO штриховая линия
  ' 13 - ISO штриховая линия (дл. пробел)
  ' 14 - ISO штрихпунктирная линия (дл. штрих)
  ' 15 - ISO штрихпунктирная линия (дл. штрих 2 пунктира)
  ' 16 - ISO штрихпунктирная линия (дл. штрих 3 пунктира)
  ' 17 - ISO пунктирная линия
  ' 18 - ISO штрихпунктирная линия (дл. и кор. штрихи)
  ' 19 - ISO штрихпунктирная линия (дл. и 2 кор. штриха)
  ' 20 - ISO штрихпунктирная линия
  ' 21 - ISO штрихпунктирная линия (2 штриха)
  ' 22 - ISO штрихпунктирная линия (2 пунктира)
  ' 23 - ISO штрихпунктирная линия (3пунктира)
  ' 24 - ISO штрихпунктирная линия (2 штриха 2 пунктира)
  ' 25 - ISO штрихпунктирная линия (2 штриха 3 пунктира)


  ' Поле тип точки для точки( системные стили ) :
  ' 0 - точка
  ' 1 - крестик
  ' 2 - х-точка
  ' 3 - квадрат
  ' 4 - треугольник
  ' 5 - окружность
  ' 6 - звезда
  ' 7 - перечеркнутый квадрат
  ' 8 - утолщенный плюс

  ' Поле тип штриховки для штриховки( системные стили ) :
  ' 0  - металл
  ' 1  - неметалл
  ' 2  - дерево
  ' 3  - камень естественный
  ' 4  - керамика
  ' 5  - бетон
  ' 6  - стекло
  ' 7  - жидкость
  ' 8  - естественный грунт
  ' 9  - насыпной грунт
  ' 10 - камень искусственный
  ' 11 - железобетон
  ' 12 - напряженный железобетон
  ' 13 - дерево в продольном сечении
  ' 14 - песок

  ' Определения флагов для текста
  Public Const INVARIABLE As Short = 0 ' не менять флаги текста

  Public Const NUMERATOR As Short = &H1S ' числитель
  Public Const DENOMINATOR As Short = &H2S ' знаменатель
  Public Const END_FRACTION As Short = &H3S ' конец дроби
  Public Const UPPER_DEVIAT As Short = &H4S ' верхнее отклонение
  Public Const LOWER_DEVIAT As Short = &H5S ' нижнее отклонение
  Public Const END_DEVIAT As Short = &H6S ' конец  отклонений
  Public Const S_BASE As Short = &H7S ' основание выражения типа суммы
  Public Const S_UPPER_INDEX As Short = &H8S ' верхний индекс выражения типа суммы
  Public Const S_LOWER_INDEX As Short = &H9S ' нижний индекс выражения типа суммы
  Public Const S_END As Short = &H10S ' конец выражения типа суммы
  Public Const SPECIAL_SYMBOL As Short = &H11S ' спецзнак
  Public Const SPECIAL_SYMBOL_END As Short = &H12S ' для спецзнаков с текстом
  Public Const RETURN_BEGIN As Short = &H13S ' начало для ввода следующих строк в спецзнаке с текстом, дробях, отклонениях
  Public Const RETURN_DOWN As Short = &H14S ' для ввода следующих строк в спецзнаке с текстом, дробях, отклонениях
  Public Const RETURN_RIGHT As Short = &H15S ' для ввода строк справа в спецзнаке с текстом, дробях, отклонениях
  Public Const TAB_ As Short = &H16S ' табуляция по текущему стилю
  Public Const FONT_SYMBOL As Short = &H17S ' символ фонта
  Public Const MARK_SEPARATOR As Short = &H18S ' разделитель в обозначении
  Public Const FONT_SYMBOL_W As Short = &O2017S ' символ фонта Unicode
  Public Const HYPER_TEXT As Short = &O2000S ' ссылка на текст или положение объекта

  Public Const ITALIC_ON As Short = &H40S ' включить наклон
  Public Const ITALIC_OFF As Short = &H80S ' выключть наклон
  Public Const BOLD_ON As Short = &H100S ' включить толщину
  Public Const BOLD_OFF As Short = &H200S ' выключть толщину
  Public Const UNDERLINE_ON As Short = &H400S ' включить подчеркивание
  Public Const UNDERLINE_OFF As Short = &H800S ' выключть подчеркивание
  Public Const NEW_LINE As Short = &H1000S ' новая строка в параграфе

  Public Const FONT_NAME As Short = 1 '  имя фонта
  'UPGRADE_NOTE: NARROWING was upgraded to NARROWING_ Click for more: 'ms-help://MS.VSCC.v80/dv_commoner/local/redirect.htm?keyword="A9E4979A-37FA-4718-9994-97DD76ED70A7"'
  Public Const NARROWING_ As Short = 2 '  коэффициент сужения фонта
  Public Const HEIGHT As Short = 3 '  высота фонта
  Public Const COLOR As Short = 4 '  цвет текста
  Public Const SPECIAL As Short = 5 '  спецзнак
  Public Const FRACTION_TYPE As Short = 6 '  высота дроби по отношению к тексту 1-полная высота 2-в 1.5 раза меньше 3-в 2 раза меньше
  Public Const SUM_TYPE As Short = 7 '  высота выражения типа суммы по отношению к тексту 1-полная высота 2-в 1.5 раза больше

  ' Поле style для текста( системные стили ) :
  ' 0 -умолчательный стиль для данного типа объекта
  ' 1  текст на чертеже
  ' 2  текст для технических требований
  ' 3  текст размерных надписей
  ' 4  текст шероховатости
  ' 5  текст для линии выноски  ( позиционной )
  ' 6  текст для линии выноски  ( над\под полкой )
  ' 7  текст для линии выноски  ( сбоку )
  ' 8  текст для допуска формы
  ' 9  текст для таблицы ( заголовок )
  ' 10 текст для таблицы ( ячейка )
  ' 11 текст для линии разреза
  ' 12 текст для стрелки вида
  ' 13 текст для для неуказанной шероховатости
  ' 14 текст для обозначения изменения
  ' 15 текст для фигурной скобки
  ' 16 текст для номера узла
  ' 17 текст для выносной надписи
  ' 18 текст для обозначения узла
  ' 19 текст для марки координационной оси
  ' 20 текст для МПО(марка/позиционное обозначение с линией-выноской)
  ' 21 текст для МПО(марка/позиционное обозначение) на линии
  ' 22 текст для МПО(марка/позиционное обозначение) без линии выноски
  ' 23 текст для заголовков спецификации
  ' 24 текст для линия разреза для СПДС
  ' 25 Текст для таблицы отчета ( заголовок ).
  ' 26 Текст для таблицы отчета ( ячейка ).


  ' ***************************************************************/
  ' * Структуры для работы с табличными атрибутами  */
  ' ***************************************************************/
  Public Const CHAR_ATTR_TYPE As Short = 1
  Public Const UCHAR_ATTR_TYPE As Short = 2
  Public Const INT_ATTR_TYPE As Short = 3
  Public Const UINT_ATTR_TYPE As Short = 4
  Public Const LINT_ATTR_TYPE As Short = 5
  Public Const FLOAT_ATTR_TYPE As Short = 6
  Public Const DOUBLE_ATTR_TYPE As Short = 7
  Public Const STRING_ATTR_TYPE As Short = 8 ' строка фиксированной длины MAX_TEXT_LENGTH
  Public Const RECORD_ATTR_TYPE As Short = 9

  ' Определения для линейного размера
  Public Const AUTONOMINAL As Short = &H1S ' >0 простановка размера автоматическая
  Public Const RECTTEXT As Short = &H2S ' >0 текст в рамочке
  Public Const PREFIX As Short = &H4S ' >0 есть текст до номинала
  Public Const NOMINALOFF As Short = &H8S ' >0 нет  номинала
  Public Const TOLERANCE As Short = &H10S ' >0 квалитет проставлять
  Public Const DEVIATION As Short = &H20S ' >0 отклонения проставлять
  Public Const UNIT As Short = &H40S ' >0 единица измерения
  Public Const SUFFIX As Short = &H80S ' >0 есть текст после номинала
  Public Const DEVIATION_INFORM As Short = &H100S ' >0 при включенном _DEVIATION, отклонения есть в массиве текстов( даже если не ручное проставление отклонений).
  '    Появляется после  функции GetObjParam, чтобы пользователь мог получить отклонения.
  Public Const UNDER_LINE As Short = &H200S ' >0 размер с подчеркиванием
  Public Const BRACKETS As Short = &H400S ' >0 размер в скобках
  Public Const SQUARE_BRACKETS As Short = &H800S ' >0 размер в квадратных скобках, используется вместе с _BRACKETS
  '  BRACKETS                    - размер в круглых скобках
  '  BRACKETS | _SQUARE_BRACKETS - размер в квадратных скобках

  Public Const INDICATIN_TEXT_LINE_ARR As Short = &HFFFFS ' для шероховаиости, позиционной линии выноски, маркировки и клеймения
  ' признак, что для текста используется динамический массив TEXT_LINE_ARR

  ' типы стилей
  Public Const CURVE_STYLE As Short = 1 ' стиль криивых
  Public Const HATCH_STYLE As Short = 2 ' стиль штриховок
  Public Const TEXT_STYLE As Short = 3 ' стиль текста
  Public Const STAMP_STYLE As Short = 4 ' стиль штампа
  Public Const CURVE_STYLE_EX As Short = 5 ' стиль криивых расширенный

  ' curveType
  Public Const LIKE_BASIC_LINE As Short = &H10S ' параметры пера как у  основной линии
  Public Const LIKE_THIN_LINE As Short = &H20S ' параметры пера как у  тонкой линии
  Public Const LIKE_HEAVY_LINE As Short = &H30S ' параметры пера как у  утолщенной линии

  ' Определения для функций GetSysOptions и  SetSysOptions
  Public Const DIMENTION_OPTIONS As Short = 1 ' настройки размера
  Public Const SNAP_OPTIONS As Short = 1 ' настройки привязок
  Public Const ARROWFILLING_OPTIONS As Short = 2 ' Зачернять стрелки ?
  Public Const SHEET_OPTIONS As Short = 3 ' Параметры листа
  Public Const SHEET_OPTIONS_EX As Short = 4 ' Параметры листа документа
  Public Const LENGTHUNITS_OPTIONS As Short = 5 ' Настройки единиц измерений
  Public Const SNAP_OPTIONS_EX As Short = 6 ' Настройки привязок документа
  Public Const VIEWCOLOR_OPTIONS As Short = 7 ' Настройки цвета фона рабочего поля 2d - документов
  Public Const TEXTEDIT_VIEWCOLOR_OPTIONS As Short = 8 ' Настройки цвета фона редактирования текста
  Public Const MODEL_VIEWCOLOR_OPTIONS As Short = 9 ' Настройки цвета фона для моделей
  Public Const OVERLAP_OBJECT_OPTIONS As Short = 10 ' Настройки перекрывающихся объектов
  Public Const DIMENTION_OPTIONS_EX As Short = 11 ' Настройки размера

  ' типы колонок для спецификации
  Public Const SPC_CLM_FORMAT As Short = 1 '  формат
  Public Const SPC_CLM_ZONE As Short = 2 '  зона
  Public Const SPC_CLM_POS As Short = 3 '  позиция
  Public Const SPC_CLM_MARK As Short = 4 '  обозначение
  Public Const SPC_CLM_NAME As Short = 5 '  наименование
  Public Const SPC_CLM_COUNT As Short = 6 '  количество
  Public Const SPC_CLM_NOTE As Short = 7 '  примечание
  Public Const SPC_CLM_MASSA As Short = 8 '  масса
  Public Const SPC_CLM_MATERIAL As Short = 9 '  материал
  Public Const SPC_CLM_USER As Short = 10 '  пользовательская
  Public Const SPC_CLM_KOD As Short = 11 '  код
  Public Const SPC_CLM_FACTORY As Short = 12 '  завод изготовитель

  ' типы значений для колонки спецификации
  Public Const SPC_INT As Short = 1 ' целый
  Public Const SPC_DOUBLE As Short = 2 ' вещественный
  Public Const SPC_STRING As Short = 3 ' строка
  Public Const SPC_RECORD As Short = 4 ' запись

  ' типы блиотек стилей
  Public Const CURVE_STYLE_LIBRARY As Short = 1 ' библиотека стилей кривых (*.lcs)
  Public Const HATCH_STYLE_LIBRARY As Short = 2 ' библиотека стилей штриховок (*.lhs)
  Public Const TEXT_STYLE_LIBRARY As Short = 3 ' библиотека стилей текстов   (*.lts)
  Public Const STAMP_LAYOUT_STYLE_LIBRARY As Short = 4 ' библиотека стилей описаний штампов (*.lyt)
  Public Const GRAPHIC_LAYOUT_STYLE_LIBRARY As Short = 5 ' библиотека стилей оформлений графических документов (*.lyt)
  Public Const TEXT_LAYOUT_STYLE_LIBRARY As Short = 6 ' библиотека стилей оформлений текстовых документов (*.lyt)
  Public Const SPC_LAYOUT_STYLE_LIBRARY As Short = 7 ' библиотека стилей оформлений спецификаций (*.lyt)

  ' размерности и типы детали для рассчета массо-ценровочных характеристик
  Public Const ST_MIX_MM As Short = &H1S ' миллиметры
  Public Const ST_MIX_SM As Short = 0 ' сантиметры
  Public Const ST_MIX_DM As Short = &H2S ' дециметры
  Public Const ST_MIX_M As Short = &H3S ' метры
  Public Const ST_MIX_GR As Short = 0 ' граммы
  Public Const ST_MIX_KG As Short = &H10S ' килограммы
  Public Const ST_MIX_EXT As Short = 0 ' выдавливание
  Public Const ST_MIX_RV As Short = &H20S ' вращение

  ' тип локальной привязки
  Public Const SN_NEAREST_POINT As Short = 1 ' Ближайшая точка
  Public Const SN_NEAREST_MIDDLE As Short = 2 ' Середина
  Public Const SN_CENTRE As Short = 3 ' Центр
  Public Const SN_INTERSECT As Short = 4 ' Пересечение
  Public Const SN_GRID As Short = 5 ' По сетке
  Public Const SN_XY_ALIGN As Short = 6 ' Выравнивание
  Public Const SN_ANGLE As Short = 7 ' Угловая привязка
  Public Const SN_POINT_CURVE As Short = 8 ' Точка на кривой

  ' типы общих настроек для привязок
  Public Const SN_DYNAMICALLY As Short = &H1S ' привязки отслеживать динамически
  Public Const SN_ASSISTANT As Short = &H2S ' писать текст
  Public Const SN_BACKGROUND_LAYER As Short = &H4S ' учитывать фоновые слои и виды
  Public Const SN_SUSPENDED As Short = &H8S ' подавить привязки


  ' Типы параметрических ограничений
  Public Const CONSTRAINT_FIXED_POINT As Short = 1 ' фиксировать точку
  Public Const CONSTRAINT_POINT_ON_CURVE As Short = 2 ' точка на кривой
  Public Const CONSTRAINT_HORIZONTAL As Short = 3 ' горизонталь
  Public Const CONSTRAINT_VERTICAL As Short = 4 ' вертикаль
  Public Const CONSTRAINT_PARALLEL As Short = 5 ' параллельность двух прямых или отрезков
  Public Const CONSTRAINT_PERPENDICULAR As Short = 6 ' перпендикулярность двух прямых или отрезков
  Public Const CONSTRAINT_EQUAL_LENGTH As Short = 7 ' равенство длин двух отрезков
  Public Const CONSTRAINT_EQUAL_RADIUS As Short = 8 ' равенство радиусов двух дуг/окружностей
  Public Const CONSTRAINT_HOR_ALIGN_POINTS As Short = 9 ' выравнивать две точки по горизонтали
  Public Const CONSTRAINT_VER_ALIGN_POINTS As Short = 10 ' выравнивать две точки по вертикали
  Public Const CONSTRAINT_MERGE_POINTS As Short = 11 ' совпадение двух точек
  Public Const CONSTRAINT_TANGENT_TWO_CURVES As Short = 15 ' касание двух кривых
  Public Const CONSTRAINT_SYMMETRY_TWO_POINTS As Short = 16 ' симетрия двух точек
  Public Const CONSTRAINT_COLLINEAR As Short = 17 ' колиниарность отрезков
  Public Const CONSTRAINT_FIXED_ANGLE As Short = 18 ' фиксированный угол
  Public Const CONSTRAINT_FIXED_LENGHT As Short = 19 ' фиксированная длина
  Public Const CONSTRAINT_POINT_ON_CURVE_MIDDLE As Short = 20 ' точка на серидине кривой
  Public Const CONSTRAINT_BISECTOR As Short = 21 ' биссектриса
  Public Const CONSTRAINT_CONCENTRICITY = 22 ' совпадение центров окружностей, дуг, эллипсов и точек

  ' типы объектов спецификации
  Public Const SPC_BASE_OBJECT As Short = 1 ' базовый объект (редактируется пользователем)
  Public Const SPC_COMMENT As Short = 2 ' комментарий    (редактируется пользователем)
  Public Const SPC_SECTION_NAME As Short = 3 ' наименование раздела ( создается по стилю СП автоматически )
  Public Const SPC_BLOCK_NAME As Short = 4 ' наименование блока исполнений ( создается по стилю СП автоматически )
  Public Const SPC_RESERVE_STR As Short = 5 ' резервная строка ( создается по стилю СП автоматически )
  Public Const SPC_EMPTY_STR As Short = 6 ' пустая строка ( создается по стилю СП автоматически )

  ' типы сортировки
  Public Const SPC_SORT_OFF As Short = 0 ' нет сортировки
  Public Const SPC_SORT_COMPOS As Short = 1 ' составная сортировка
  Public Const SPC_SORT_ALPHABET As Short = 2 ' сортировка по алфавиту
  Public Const SPC_SORT_UP As Short = 3 ' сортировка по возрастанию колонок
  Public Const SPC_SORT_DOCUMENT As Short = 4 ' сортировка раздела документация
  Public Const SPC_SORT_DOWN As Short = 5 ' сортировка по убыванию колонок
  Public Const SPC_SORT_COMPOSDOWN As Short = 6 ' составная сортировка по убыванию

  ' //////////////////////////////////////////////////////////////////////////////
  '
  '  типы специальных символов ( аннотационный объект )
  '
  ' //////////////////////////////////////////////////////////////////////////////
  Public Const ARROW_INSIDE_SYMBOL As Short = 1 ' стрелка изнутри
  Public Const ARROW_OUT_SIDE_SYMBOL As Short = 2 ' стрелка снаружи
  Public Const TICK_TAIL_SYMBOL As Short = 3 ' засечка с продолжением кривой (с хвостиком)
  Public Const UP_HALF_ARROW_SYMBOL As Short = 4 ' верхняя половина стрелки изнутри
  Public Const DOWN_HALF_ARROW_SYMBOL As Short = 5 ' нижняя половина стрелки изнутри
  Public Const BIG_ARROW_INSIDE_SYMBOL As Short = 6 ' большая стрелка изнутри (7мм)
  Public Const ARROW_ORDINATE_DIM_SYMBOL As Short = 7 ' стрелка для размера высоты(штрихи длиной 4 мм под углом 45 гр)
  Public Const TRIANGLE_SYMBOL As Short = 8 ' треугольник по напр-нию кривой
  Public Const CIRCLE_RAD2_SYMBOL As Short = 9 ' окружность радиусом 2 мм тонкой линией - для шер-сти и линии-выноски
  Public Const CENTRE_MARKER_SYMBOL As Short = 10 ' обозначение фиктивного центра в виде большого креста
  Public Const GLUE_SIGN_SYMBOL As Short = 11 ' знак склеивания
  Public Const SOLDER_SIGN_SYMBOL As Short = 12 ' знак пайки
  Public Const SEWING_SIGN_SYMBOL As Short = 13 ' знак сшивания
  Public Const CRAMP_SIGN_SYMBOL As Short = 14 ' знак соединения внахлестку металл.скобами
  Public Const CORNER_CRAMP_SIGN_SYMBOL As Short = 15 ' знак углового соединения металл.скобами
  Public Const MONTAGE_JOINT_SYMBOL As Short = 16 ' знак монтажного шва
  Public Const TICK_SYMBOL As Short = 17 ' засечка без продолжения кривой (без хвостика)
  Public Const TRIANGLE_CURR_CS As Short = 18 ' треугольник по текущей СК - для базы
  Public Const ARROW_CLOSED_INSIDE As Short = 19 ' закрытая стрелка изнутри
  Public Const ARROW_CLOSED_OUTSIDE As Short = 20 ' закрытая стрелка снаружи
  Public Const ARROW_OPEN_INSIDE As Short = 21 ' открытая стрелка изнутри
  Public Const ARROW_OPEN_OUTSIDE As Short = 22 ' открытая стрелка снаружи
  Public Const ARROW_RIGHTANGLE_INSIDE As Short = 23 ' стрелка 90 град изнутри
  Public Const ARROW_RIGHTANGLE_OUTSIDE As Short = 24 ' стрелка 90 град снаружи
  Public Const SYMBOL_DOT As Short = 25 ' точка (диаметр равен длины стрелки размера)
  Public Const SYMBOL_SMALLDOT As Short = 26 ' точка маленькая (диаметр равен 0.6 длины стрелки размера)
  Public Const AUXILIARY_POINT As Short = 27 ' вспомогательная точка
  Public Const LEFT_TICK_SYMBOL As Short = 28 ' засечка с наклоном влево

  ' типы предопределенных динамических массивов
  Public Const CHAR_STR_ARR As Short = 1 ' динамический массив указателей на строки символов
  Public Const POINT_ARR As Short = 2 ' динамический массив указателей на математические точки -структура MathPointParam
  Public Const CURVE_PATTERN_ARR As Short = 2 ' динамический массив указателей на участки штриховой линии -структура CurvePattern
  Public Const TEXT_LINE_ARR As Short = 3 ' динамический массив строк текста - структура TextLineParam
  Public Const TEXT_ITEM_ARR As Short = 4 ' динамический массив компонент строк текста структура TextItemParam
  Public Const ATTR_COLUMN_ARR As Short = 5 ' динамический массив колонок аттрибутов- структура  ColumnInfo
  Public Const USER_ARR As Short = 6 ' динамический пользовательский массив
  Public Const POLYLINE_ARR As Short = 7 ' динамический массив полилиний-(указателей массивов POINT_ARR)
  Public Const RECT_ARR As Short = 8 ' динамический массив габаритных прямоугольников-(структура RectParam)
  Public Const LIBRARY_STYLE_ARR As Short = 9 ' динамический массив структур параметров для стиля в библиотеке стилей( LibraryStyleParam )
  Public Const VARIABLE_ARR As Short = 10 ' динамический массив структур параметров параметрических переменных( VariableParam )
  Public Const CURVE_PATTERN_ARR_EX As Short = 11 ' динамический массив указателей на участки штриховой линии -структура CurvePatternEx
  Public Const LIBRARY_ATTR_TYPE_ARR As Short = 12 ' динамический массив структур параметров для типа атрибута в библиотеке типов атрибутов( LibraryAttrTypeParam )
  Public Const NURBS_POINT_ARR As Short = 13 ' динамический массив структур NurbsPointParam
  Public Const DOUBLE_ARR As Short = 14 ' динамический массив duuble
  Public Const CONSTRAIN_ARR As Short = 15 ' динамический массив параметрических ограничений - структура ConstrainParam
  Public Const CORNER_ARR As Short = 16 ' динамический массив структур параметров углов CornerParam для прямоугольников и многоугольников
  Public Const DOC_SPCOBJ_ARR As Short = 17 ' динамический массив структур параметров прикрепленных документов к объекту спецификации
  Public Const SPCSUBSECTION_ARR As Short = 18 ' динамический массив структур параметров подраздела спецификации SpcSubSectionParam
  Public Const SPCTUNINGSEC_ARR As Short = 19 ' динамический массив структур параметров настройки раздела спецификации SpcTuningSectionParam
  Public Const SPCSTYLECOLUMN_ARR As Short = 20 ' динамический массив структур параметров стиля колонки таблицы спецификации SpcStyleColumnParam
  Public Const SPCSTYLESEC_ARR As Short = 21 ' динамический массив структур параметров стиля разделa спецификации SpcStyleSectionParam
  Public Const QUALITYITEM_ARR As Short = 22 ' динамический массив структур QualityItemParam - запись об одном интервале для какого-то квалитета
  Public Const LTVARIANT_ARR As Short = 23 ' динамический массив структур LtVariant
  Public Const TOLERANCEBRANCH_ARR As Short = 24 ' динамический массив структур ToleranceBranch
  Public Const HATCHLINE_ARR As Short = 25 ' динамический массив структур HatchLineParam
  Public Const TREENODEPARAM_ARR As Short = 26 ' динамический массив структур узла дерева TreeNodeParam

  '-----------------------------------------------------------------------------
  ' определения для конвертации в растровый формат
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
  ' определения для настройки цвета растрового формата
  ' ---
  Public Const BLACKWHITE As Short = 0 ' цвет черный
  Public Const COLORVIEW As Short = 1 ' цвет установленный для вида
  Public Const COLORLAYER As Short = 2 ' цвет установленный для слоя
  Public Const COLOROBJECT As Short = 3 ' цвет установленный для объекта

  '-----------------------------------------------------------------------------
  ' орределения бит на пиксел для конвертации в растровый формат
  ' ---
  Public Const BPP_COLOR_01 As Short = 1 ' "Черный"
  Public Const BPP_COLOR_02 As Short = 2 ' "4 цвета"
  Public Const BPP_COLOR_04 As Short = 4 ' "16 цветов"
  Public Const BPP_COLOR_08 As Short = 8 ' "256 цветов"
  Public Const BPP_COLOR_16 As Short = 16 ' "16 разрядов"
  Public Const BPP_COLOR_24 As Short = 24 ' "24 разряда"
  Public Const BPP_COLOR_32 As Short = 32 ' "32 разряда"

  '-----------------------------------------------------------------------------
  ' перечисление возможных типов узла дерева библиотеки документов  LtNodeType
  ' ---
  Public Const tn_root As Short = 0 ' корень дерева
  Public Const tn_dir As Short = 1 ' папка (директория)
  Public Const tn_file As Short = 2 ' документ (файл)

  '------------------------------------------------------------------------------
  ' Типы стандартных видов
  ' ---
  Public Const VIEW_FRONT As Short = &H1S ' Спереди
  Public Const VIEW_REAR As Short = &H2S ' Сзади
  Public Const VIEW_UP As Short = &H4S ' Сверху
  Public Const VIEW_DOWN As Short = &H8S ' Снизу
  Public Const VIEW_LEFT As Short = &H10S ' Слева
  Public Const VIEW_RIGHT As Short = &H20S ' Справа
  Public Const VIEW_ISO As Short = &H40S ' Изометрия

  '------------------------------------------------------------------------------
  ' типы значка объекта "Выносной элемент" LtRemoteElmSignType
  ' ---
  Public Const re_Circle As Short = 0 ' окружность
  Public Const re_Rectangle As Short = 1 ' прямоугольник
  Public Const re_Ballon As Short = 2 ' скругленный прямоугольник

  '------------------------------------------------------------------------------
  ' Тип изменения порядка объектов ChangeOrderType
  ' ---
  Public Const co_Top As Short = 1 ' Выше всех
  Public Const co_Bottom As Short = 2 ' Ниже всех
  Public Const co_BeforeObject As Short = 3 ' Перед объектом
  Public Const co_AfterObject As Short = 4 ' За объектом
  Public Const co_UpLevel As Short = 5 ' На уровень вперед
  Public Const co_DownLevel As Short = 6 ' На уровень назад
  Public Const co_BeforeObjectByGroupOrder As Short = 7 ' Перед объектом (расположить объекты группы в порядке их добавления в группу)
  Public Const co_AfterObjectByGroupOrder As Short = 8 ' За объектом (расположить объекты группы в порядке их добавления в группу)

  '------------------------------------------------------------------------------
  ' Стандартые курсоры Компас
  ' ---
  Public Const OCR_SELECT As Short = &HFFFES ' Курсор ввиде SELECT
  Public Const OCR_SNAP As Short = &HFFFDS ' Курсор ввиде SNAP
  Public Const OCR_CATCH As Short = &HFFFCS ' Курсор ввиде CATCH
  Public Const OCR_DEFAULT As Short = 0 ' Курсор в виде креста

  Public Const OCR_DEDAULT As Short = 0 ' Курсор в виде креста

  '-----------------------------------------------------------------------------
  ' Неопределенный цвет для TextItemFont.color
  ' В стиле может быть выставлен по умолчанию цвет отличный он 0
  ' В этом случае если TextItemFont.color будет значение 0 то создастся
  ' модификатор на цвет и он не будет отображаться как цвет по умолчанию
  ' для того чтобы модификатор цвета не создался нужно
  ' или прислать цвет из настроек или константу FREE_COLOR
  ' ---
  Public Const FREE_COLOR As Integer = &HFF000000 '  Неопределенный цвет
End Module