////////////////////////////////////////////////////////////////////////////////
//
// libhppar.h  
//
////////////////////////////////////////////////////////////////////////////////
#ifndef __LIBHPPAR_H
#define __LIBHPPAR_H

#ifndef __MOBILE_VERSION__

#ifdef __BORLANDC__  
#ifndef MIDL_INTERFACE
// MIDL_INTERFACE в Borland C++ не определен - используется в kAPI3D5COM.h
#define MIDL_INTERFACE(x) struct
#endif
#endif

// Изменять при добавлении новых методов в интерфейсы
// #define LB_VERSION 1 
#define LB_VERSION 2 // V19.0 Добавлено событие MouseEnterLeavePoint

//-------------------------------------------------------------------------------
// Типы внешних интерфейсов
// ---
enum LibObjInterfaceTypeEnum
{
  idd_ILibHPObject         = 1, // Интерфейс горячих точек                                            ILibHPObject, ILibHPObject1 
  idd_ILibExternalObject   = 2, // Интерфейс внеших воздействий                                       ILibExternalObject
  idd_ILibPropertyObject   = 3, // Интерфейс объекта со свойствами, отображаемыми в окне свойств      ILibPropertyObject
  idd_ILibPropertyObject3D = 4, // Интерфейс 3D объекта со свойствами, отображаемыми в окне свойств   ILibPropertyObject
};


//-------------------------------------------------------------------------------
// Типы горячих точек
// ---
enum ksHotPointEnum
{
  ksHPDefault             = -1, // 
  ksHPNormal              =  0, // обычный
  ksHPSmall               =  1, // маленький
  ksHPRing                =  2, // изменение угла поворота
  ksHPBiDirArrow          =  3, // изменение длины
  ksHPMiddlepoint         =  4, // средняя точка
  ksHPTriangleDisplaced   =  5, // смещенный треугольник
  ksHPVisibilityOn        =  6, // глаз - видимый объект 
  ksHPVisibilityOff       =  7, // перечеркнутый глаз - скрытый объект

  ksHPTilt                = 12, // наклон
};


#pragma pack( push, 1)
//-------------------------------------------------------------------------------
// Структура параметров для горячих точек
// ---
struct HotPointDescription {
  // положение точки в системе координат объекта
  double    x;
  double    y;
  // текстовая строка (однострочная), расположенная около hot point'а
  // Внимание!!! Копия не снимается.
  //             Текст должен быть статическим хотя бы на время
  //             работы с библиотечным элементом
  char    * text;
  int       cursorId;   // описание мышиного курсора при прохождении над точкой
  HINSTANCE cursorInst;
  int       enableJoin; // 0 - отключить объединение горячих точек с другими хотточками, 1 - разрешить объединение горячих точек с горячими точами других объектов
};


//-------------------------------------------------------------------------------
// Структура параметров для горячих точек для дополнительного интерфейса
// ---
struct HotPointDescription1 {
  // текстовая строка (однострочная), расположенная около hot point'а
  LPOLESTR text;                   // текст для UNICODE вместо HotPointDescription::text
  
  int       bitmapId;              // идентификатор или тип битмапа горячей точки
  int       bitmapIdMove;          // идентификатор битмапа горячей точки при прохождении над точкой
  int       bitmapIdSelect;        // идентификатор битмапа горячей точки при ее селектировании

  HINSTANCE bitmapInst;            // Модуль ресурсов битмапов
  int       bitmapCO;              // система координат, в которой отрисовывается битмар 0 - СК листа, 1 - СК вида, 2 - СК владельца
  int       enableJoin;            // 0 - отключить объединение горячих точек с другими горячими точами, 1 - разрешить объединение горячих точек с горячими точами других объектов
  double    hotPointAngle;         // Угол смешения для отображения горячих точек
  double    hotPointOffset;        // Величина смещения горячих точек
  int       enableRotate;          // 0 - запретить поворот хот-точки, 1 - запретить поворот хот-точки,- -1 по умолчанию ( поворот разрешен только для ksHPTriangleDisplaced )
  LPOLESTR  bitmapFont;            // Шрифт для шрифтовых хот-точек
  COLORREF  fontSymbolColor;       // Цвет для шрифтовых хот-точек
  double    fontSymbolScale;       // масштабирование для шрифтовых хот-точек
  int       hotPointOffsetType;    // 1 величина смещения задана в абсолютных единицай, 0 в условных
  COLORREF  fontSymbolMoveColor;   // Цвет для шрифтовых хот-точек при перемещении
  COLORREF  fontSymbolSelectColor; // Цвет для шрифтовых хот-точек при селектировании
};


//-------------------------------------------------------------------------------
// Структура параметров свойства отображаемого в окне свойств
// --- 
struct PropertyParam
{
  int       propertyType;               // Тип свойства
  int       propertyId;                 // Идентификатор свойсва ( Используется для загрузки имени свойства, списка значений, иконок ) 
  HINSTANCE propertyInstance;           // Модуль ресурсов для загрузки параметров свойства ( имя, список значений ...) 
  LPOLESTR  displayPropertyName;        // Обображаемое имя свойства ( необязательное ) 
  VARIANT   propertyValue;              // Текущее значение
  double    propertyMinValue;           // Минимальное значение  
  double    propertyMaxValue;           // Максимальное значение
  int       isDefCpyProp;               // Будет отмечено для копирования
  int       enable;                     // Признак доступности для изменения
  int       emptyValue;                 // Значение не задано 
  VARIANT   additionData;               // Дополнительные данные для свойства ( в зависимости от типа контрола второе значение или список значений )      
  LPOLESTR  additionText;               // Дополнительный текст
  int       summList;                   // TRUE - объединять списки, FALSE - пересекать списки
  int       readOnly;                   // TRUE - свойство доступно только для чтения
  int       visible;                    // FALSE - свойство скрыто и не будет отображаться в окне свойств
  int       sameProxyType;              // FALSE - свойство не будет отображаться в окне свойств при групповом выделении
  int       needMouseEnterLeaveMessage; // Необходимость получать сообщения о наведении/уходе курсора мыши на поле редактирования
};
#pragma pack(pop)

#ifndef BEGIN_INTERFACE
#define BEGIN_INTERFACE
#endif


// {234EBFE0-477B-11D4-A840-00504E05BD01}
DEFINE_GUID(IID_ILibHPObject,          0x234EBFE0, 0x477B, 0x11D4, 0xA8, 0x40, 0x00, 0x50, 0x4E, 0x05, 0xBD, 0x01);
// {234EBFE0-477B-11D4-A841-00504E05BD01}
DEFINE_GUID(IID_ILibExternalObject,    0x234EBFE0, 0x477B, 0x11D4, 0xA8, 0x41, 0x00, 0x50, 0x4E, 0x05, 0xBD, 0x01);
// {C8632527-F69F-4e22-9414-5F6433C33D07}
DEFINE_GUID(IID_ILibHPObject1,         0xc8632527, 0xf69f, 0x4e22, 0x94, 0x14, 0x5f, 0x64, 0x33, 0xc3, 0x3d, 0x7);
// {D92C71C4-A818-42ae-BF7B-FF140E6CFA97}
DEFINE_GUID(IID_ILibraryObject,        0xd92c71c4, 0xa818, 0x42ae, 0xbf, 0x7b, 0xff, 0x14, 0xe, 0x6c, 0xfa, 0x97);
// {2DAA7C6C-3868-497b-BEC9-767E687687D8}
DEFINE_GUID(IID_ILibPropertyObject,    0x2daa7c6c, 0x3868, 0x497b, 0xbe, 0xc9, 0x76, 0x7e, 0x68, 0x76, 0x87, 0xd8);


//-------------------------------------------------------------------------------
// Интерфейс горячих точек
// ---
#undef  INTERFACE
#define INTERFACE  ILibHPObject
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
BEGIN_INTERFACE
  /* IUnknown methods */
  STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;

  /* ILibHPObject methods */

  // подготовиться к редактированию методом таскания за hot point(Mouse L Btn Down)
  STDMETHOD_(BOOL, LibHotPnt_Prepare)(THIS_ int index ) PURE;

  // завершить редактирование методом таскания за hot point (Mouse L Btn Up  )
  // success = TRUE  - нормальное завершение сдвига
  //         = FALSE - во время сдвига нажали [Esc]
  STDMETHOD_(BOOL, LibHotPnt_Complete)(THIS_ int index, BOOL success ) PURE;

  // получить текущее описание hot point
  // Внимание!!! 1. Функция вызывается в цикле для каждой точки (увеличивая значение
  //                index), пока не вернёт false
  //             2. Значения координат необходимо устанавливать в собственной
  //                системе координат объекта
  STDMETHOD_(BOOL, LibHotPnt_Get)(THIS_ HotPointDescription* point, int index) PURE;

  // изменилось положение hot point'а
  // Внимание!!! 1. Актуальность имеют только координаты (x, y),
  //                остальные поля должны игнорироваться
  //             2. Значения координат приходит в собственной системе координат объекта
  STDMETHOD_(BOOL, LibHotPnt_Set)(THIS_ HotPointDescription* point, int index ) PURE;

  // получить текст для отображения курсором
  // Внимание!!! С присланной строки снимается копия,
  //             сама исходная строка не удаляется.
  STDMETHOD_(BOOL, LibHotPnt_GetCursorText)(THIS_ int index, char** text ) PURE;

  // Получить popup-меню ассоциированое с данным библиотечным элементом
  // Внимание!!! Присланное меню будет модифицированно в системе.
  //             Присланное меню будет уничтожено вызовом функции DestroyMenu()
  // На самом деле ф-ия должна возвращать HMENU
  STDMETHOD_(int, LibHotPnt_GetMenu)(THIS) PURE;

  // Выполнить команду из меню, присланного по LibHotPnt_GetMenu() или LibHotPnt_GetMenuEx
  // return = TRUE  - что то изменилось и требуется укладка в UNDO и пересчет Hot point'ов
  //        = FALSE - команда не обработана
  STDMETHOD_(BOOL, LibHotPnt_ExecuteCommand)(THIS_ int id )PURE;
};

typedef ILibHPObject FAR * LPLIBHPOBJECT;

//-------------------------------------------------------------------------------
// Дополнительный интерфейс горячих точек. Расширение интерфейса ILibHPObject
// ---
#undef  INTERFACE
#define INTERFACE  ILibHPObject1
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
BEGIN_INTERFACE
  /* IUnknown methods */
  STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;

  /* ILibHPObject1 methods */

  // получить текущее описание hot point
  // Внимание!!! 1. Функция вызывается в цикле для каждой точки (увеличивая значение
  //                index), пока не вернёт false
  STDMETHOD_(BOOL, LibHotPnt_GetEx)(THIS_ HotPointDescription1 * point, int index) PURE;

  // получить текст для отображения курсором  текст для UNICODE вместо ILibHPObject::LibHotPnt_GetCursorText
  STDMETHOD_(LPOLESTR, LibHotPnt_GetCursorTextEx)(THIS_ int index ) PURE;

  // Получить popup-меню ассоциированое с данным библиотечным элементом, если index = -1 и
  //                     и ассоциированое с данной hot-точкой, если index > -1 
  // Внимание!!! Присланное меню будет модифицированно в системе.
  //             Присланное меню будет уничтожено вызовом функции DestroyMenu()
  // На самом деле ф-ия должна возвращать HMENU
  STDMETHOD_(int, LibHotPnt_GetMenuEx)(THIS_  int index ) PURE;

  //Установить состояния команд из меню, присланного по LibHotPnt_GetMenu() или LibHotPnt_GetMenuEx
  //TRUE - команда из меню доступна
  //FALSE - команда из меню недоступна
  STDMETHOD_(BOOL, LibHotPnt_UpdateCommand)(THIS_ int id ) PURE;

  //"Селектировали hot point
  STDMETHOD_(BOOL, LibHotPnt_Select)( THIS_ int index ) PURE;

  //"Расселектировали hot point
  STDMETHOD_(BOOL, LibHotPnt_Unselect)( THIS_ int index ) PURE;

};

typedef ILibHPObject1 FAR * LPLIBHPOBJECT1;



//-------------------------------------------------------------------------------
// Интерфейс внеших воздействий
// ---
#undef  INTERFACE
#define INTERFACE  ILibExternalObject
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
BEGIN_INTERFACE
  /* IUnknown methods */
  STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
  STDMETHOD_(unsigned long, AddRef)(THIS) PURE;
  STDMETHOD_(unsigned long, Release)(THIS) PURE;

  /* ILibExternalObject methods */
  //======== Group TRANSFORM ===================================================
  STDMETHOD_(BOOL, Lib_Move)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Rotate)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Transform)(THIS)PURE;

  STDMETHOD_(BOOL, Lib_Delete)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Restore)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_Deform)(THIS)PURE;
  STDMETHOD_(BOOL, Lib_AddToModel)(THIS)PURE;

};

typedef ILibExternalObject    FAR * LPLIBEXTERNALOBJECT;


//-------------------------------------------------------------------------------
// Интерфейс внешнего библиотечного объекта 
// ---
#undef  INTERFACE
#define INTERFACE  ILibraryObject
DECLARE_INTERFACE_(INTERFACE, IUnknown)
{
  BEGIN_INTERFACE
    /* IUnknown methods */
    STDMETHOD(                QueryInterface)(THIS_ REFIID riid, void FAR* FAR* ppvObj) PURE;
    STDMETHOD_(unsigned long, AddRef )(THIS) PURE;
    STDMETHOD_(unsigned long, Release)(THIS) PURE;

    STDMETHOD_(int, GetVersion)(THIS_) { return LB_VERSION; }
};
typedef ILibraryObject FAR * LPLIBRARYOBJECT;

//-------------------------------------------------------------------------------
// Интерфейс объекта со свойствами отображаемыми в окне свойств 
// --- 
#undef  INTERFACE
#define INTERFACE  ILibPropertyObject
DECLARE_INTERFACE_(INTERFACE, ILibraryObject)
{
    // Имя группы объектов, по умолчанию макроэлементы
    STDMETHOD_(LPOLESTR, GetGroupName        )( THIS_ ) PURE;

    // Добавить свойство в список свойств
    STDMETHOD_(BOOL, GetProperty             )( THIS_ int index, PropertyParam * param ) PURE;
    // Обновить параметры свойства
    STDMETHOD_(BOOL, UpdateProperty          )( THIS_ PropertyParam * param ) PURE;
    // Установить новое значение для свойства
    STDMETHOD_(int,  ApplyProperty           )( THIS_ PropertyParam * param ) PURE;
    // Событие запуска внешнего редактирования для пользовательского свойства /*ksOPControlExternalEdit*/  
    STDMETHOD_(BOOL, OnChoiceProperty        )( THIS_ PropertyParam * param ) PURE;
    // Завершение редактирования свойств объекта
    STDMETHOD_(BOOL, EndEditProperty         )( THIS_ )                       PURE;
    // Запрос параметров точек для визуального определения места применения параметра
    STDMETHOD_(BOOL, GetMouseEnterLeavePoint )( THIS_ int propertyId, long pointIndex, LPUNKNOWN parameters ) PURE;
};

typedef ILibPropertyObject  FAR * LPLIBPROPERTYOBJECT;

#endif // __MOBILE_VERSION__
#endif

