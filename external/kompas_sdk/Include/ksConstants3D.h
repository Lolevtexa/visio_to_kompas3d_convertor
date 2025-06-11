

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for D:/shared/workspace/KOMPAS/_RELEASES/releases-v21-x86/KOMPAS/Source/API/API5_3D/libConstants3D.odl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __ksConstants3D_h__
#define __ksConstants3D_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Kompas6Constants3D_LIBRARY_DEFINED__
#define __Kompas6Constants3D_LIBRARY_DEFINED__

/* library Kompas6Constants3D */
/* [version][uuid] */ 

//-------------------------------------------------------------------------------
// _1_ Константы
// ---
  // _2_  ksObj3dTypeEnum                            - Типы 3D объектов
  // _3_  ErrorType3d                                - Ошибки 3D
  // _4_  ksDirectionTypeEnum                        - Типы направлений
  // _5_  ksEndTypeEnum                              - Типы операций
  // _6_  Part_Type                                  - Тип компонента
  // _7_  MateConstraintType                         - Типы сопряжений
  // _8_  ViewMode                                   - Режим визуализации модели 
  // _9_  ProjectionType                             - Типы предопределенных проекций отображения
  // _10_ D3FormatConvType                           - Определения для конвертации в дополнительные форматы jgs, sat, xt, step, stl, VRML, JT
  // _11_ ksUseColorEnum                             - Типы используемого цвета
  // _12_ Positioner_Type                            - Тип перемещения
  // _13_ Intersection_Type                          - Типы пересечений
  // _14_ ksMateType                                 - Типы математических объектов учавствующих в сопряжении.
  // _15_ ksChooseBodiesType                         - Типы действий для оперций над телами
  // _17_ ksLineBuildingType                         - Способ построения сегмента ломоной.
  // _18_ ksPart7CollectionTypeEnum                  - Способ построения сегмента ломоной.
  // _19_ ksUnfoldTypeEnum                           - Способ определения длины развертки
  // _20_ ksBendDisposalEnum                         - Тип размещения сгиба на ребре
  // _21_ ksBendLengthTypeEnum                       - Тип определения длины
  // _22_ ksBendOffsetTypeEnum                       - Тип смещения
  // _23_ ksBendSideTypeEnum                         - Тип построения боковой стороны сгиба
  // _24_ ksBendReleaseTypeEnum                      - Тип освобождения cгиба
  // _25_ ksBendAngleReleaseTypeEnum                 - Способ освобождения угла сгиба
  // _26_ ksBendTypeEnum                             - Способ сгиба
  // _27_ ksHoleCutTypeEnum                          - Тип построения отверстия и выреза
  // _28_ ksChoosePartsType                          - Типы действий над компонентами сборки
  // _29_ ksChooseType                               - Область применения
  // _30_ ksPoint3DTypeEnum	                        - Способы построения пространственной точки.
  // _31_ ksPoint3DCurveParamTypeEnum                - Типы смещений при способе построения точки вдоль кривой.
  // _32_ ksPoint3DSurfaceParamTypeEnum              - Типы смещений при способе построения точки на поверхности.
  // _33_ ksMeasureResultEnum                        - Результат измерения расстояния и угла между поверхностями.
  // _34_ ksOrientationTypeEnum                      - Тип ориентирования ЛСК.
  // _35_ ksModelObjectParamTypeEnum                 - Тип параметров объекта.
  // _36_ ks3DLineStyle                              - Стили 3D линий для отрисовки с помощью OpenGL.
  // _37_ ksLoadTypeEnum                             - Тип загрузки компонента.
  // _38_ ksFacetCullingMode                         - Режим фильтрации отображаемых граней внешнего объекта.
  // _39_ ksEquidistant3DCutModeEnum                 - Обход углов эквидистанты 3D.
  // _40_ ksPatternBasePointTypeEnum                 - Способ задания базовой точки.
  // _41_ ksExtensionTypeEnum                        - Тип продления поверхности.
  // _42_ ksExtensionLimitTypeEnum                   - Способ ограничения.
  // _43_ ksVector3DParametersTypeEnum               - Типы параметров вектора.
  // _44_ ksBasisVectorTypeEnum                      - Типы базисного вектора.
  // _45_ ksConnectTypeEnum                          - Тип соединения кривых.
  // _46_ ksArc3DBuildingTypeEnum                    - Способ создания 3D дуги.
  // _47_ ksArc3DParameterEnum                       - Индекс параметра 3D дуги.
  // _48_ ksRotatedTypeEnum                          - Способ построения угла вращения.
  // _49_ ksLinearPatternBuildingTypeEnum            - Способ построения массива по сетке.
  // _50_ ksPartAccessTypeEnum                       - Тип доступа к компоненту.
  // _51_ ksMeshPointsSurfaceBuildingTypeEnum        - Тип поверхности по сети точек.
  // _52_ ksCloudSurfaceBuildingTypeEnum             - Тип поверхности по облаку точек.
  // _53_ ksCloudTypeEnum                            - Способ распознования сети точек.
  // _54_ ksObjectsFilter3DEnum                      - Способ фильтрации 3D объектов.
  // _55_ ksCoordLawEnum                             - Порядок законов.
  // _56_ ksLawTypeEnum                              - Типы законов.
  // _57_ ksCircularPatternBuildingTypeEnum          - Способ построения массива по концентрической сетке.
  // _58_ ksSplineTangentEnum                        - Тип направления касательной.
  // _59_ ksCurveProjectionTypeEnum                  - Тип проекции кривой.
  // _60_ ksContour3DTypeEnum                        - Тип контура.
  // _61_ ksLineSegment3DTypeEnum                    - Тип построения отрезка 3D.
  // _62_ ksConjunctivePointTypeEnum                 - Способ построение присоединительной точки.
  // _63_ ksContour3DBuildingTypeTypeEnum            - Способ построения Контура 3D.
  // _64_ ksRelationTypeEnum                         - Тип родственных отношений.
  // _65_ ksSpiral3DHeightTypeEnum                   - Способ задания высоты
  // _66_ ksSpiral3DBuildingTypeEnum                 - Способ построения спирали 3D
  // _67_ ksSpline3DDiameterTypeEnum                 - Способ задания диаметра спирали 3D
  // _68_ ksPointsArrOnCurveTypeEnum                 - Способ построения точек группы
  // _69_ ksPointsArrOnSurfaceTypeEnum               - Способ построения точек группы
  // _70_ ksMeshAroundPointTypeEnum                  - Тип сетки построенной вокруг точки
  // _71_ ksEditColorTypeEnum                        - Тип цвета редактирования
  // _72_ ksProjectionOptionEnum                     - Опции проецирования
  // _73_ ksVisibleStateEnum                         - Состояние видимости объекта.
  // _74_ ksEditableStateEnum                        - Способ редактирования.
  // _75_ ksToleranceRecalcsEnum                     - Способ пересчета размера
  // _76_ ksSpecRoughPlacementEnum                   - Размещение неуказанной шероховатости.
  // _77_ ksMathCurve3DTypeEnum                      - Тип математической кривой в трехмерном пространстве.
  // _78_ ksMathSurface3DTypeEnum                    - Тип математической поверхности в трехмерном пространстве.
  // _79_ ksLengthBuildingTypeEnum                   - Способ расчета длины продолжения сгиба листового тела
  // _80_ ksPatternOrientationTypeEnum               - Способ ориентации экземпляров массива.
  // _81_ ksModelDrawingElementsEnum                 - Возможные элементы отрисовки модели.
  // _82_ ksMateConstraintDirectionAlignmentEnum     - Варианты выравнивания направлений для сопряжений.
  // _83_ ksMateFixedTypeEnum                        - Фиксация компонентов при создании сопряжения.
  // _84_ ksMateTangentTypeEnum                      - Вид касания для сопряжения касание.
  // _85_ ksViewProjectionType                       - Тип проекции.
  // _86_ ksDepthTypeEnum                            - Способ определения глубины отверстия.
  // _87_ ksEndFaceTypeEnum                          - Форма торца отверстия.
  // _88_ ksHoleTypeEnum                             - Тип отверстия.
  // _89_ ksCountersinkTypeEnum                      - Способ определения параметров зенковки.
  // _90_ ksConicTypeEnum                            - Способ определения параметров конического отверстия.
  // _91_ ksViewProjectionScheme                     - схема ориентаций модели.
  // _92_ ksMateTangentTypeEnum                      - Вид касания для сопряжения касание.
  // _93_ ksD3ConverterOptionsEnum                   - Управляющие разрешением на чтение или запись объектов в дополнительные форматы jgs, sat, xt, step, stl, VRML, JT
  // _94_ ksStepTypeEnum                             - Способы вычисления приращения параметра по объекту
  // _95_ ksTextExportFormEnum                       - Пердставление текста при экспорте
  // _96_ ksFeatureStateEnum                         - Состояние объекта
  // _97_ ksChamferBuildingTypeEnum                  - Типы построения фаски
  // _98_ ksFilletBuildingTypeEnum                   - Типы построения скругления
  // _99_ ksFilletOffsetModeEnum                     - Способ расчета смещения для точек останова скругления
  // _100_ ksRibSideEnum                             - Положение ребра жесткости.
  // _101_ ksOperationResultEnum                     - Результат операции.
  // _102_ ksLoftBuildingType                        - Способы построения элемента по сечениям у крайних сечений.
  // _103_ ksEvolutionShiftSketchTypeEnum            - Тип движения сечения в кинематической операции.
  // _104_ ksSketchBendBuildingTypeEnum              - Способы построения сгиба по эскизу.
  // _105_ ksSketchBendBuildingTypeEnum              - Тип замыкания операции сгиб по эскизу листового тела.
  // _106_ ksClosingTypeEnum                         - Обработка угла при замыкании.
  // _107_ ksClosingCorneringEnum                    - Место отверстия при круговой обработке угла.
  // _108_ ksClosingHolePlacementEnum                - Способ замыкании углов листового тела.
  // _109_ ksClosingClosedTypeEnum                   - Способ задания размера.
  // _110_ ksUndercutDistanceTypeEnum                - Способ создания сечения.
  // _111_ ksCutBuildingTypeEnum                     - Тип. Способ обработки концов буртика.
  // _112_ ksShoulderTypeEnum                        - Форма сечения буртика.
  // _113_ ksShoulderCutingTypeEnum                  - Способ построения буртика.
  // _114_ ksShoulderBuildingTypeEnum                - Способ построения жалюзей.
  // _115_ ksJalousieFormEndEnum                     - Форма торца жалюзей.
  // _116_ ksJalousieHeightTypeEnum                  - Способ задания высоты жалюзей.
  // _117_ ksJalousieHeightTypeEnum                  - Способ задания высоты штамповки.
  // _118_ ksSplineTransitionTypeEnum                - Способ создания сопряжения в заданной вершине сплайна.
  // _119_ ksTransitionVectorIndexEnum               - Индекс вектора в точке сопряжения.
  // _120_ ksSHRibBuildingTypeEnum                   - Способ построения ребра усиления.
  // _121_ ksSHRibCutingTypeEnum                     - Форма сечения ребра усиления.
  // _122_ ksOffsetGapType                           - Типы смещений зазора
  // _123_ ksRuledBorderEnum                         - Типы кромки оснований
  // _124_ ksRuledJointEnum                          - Типы кромки стыка
  // _125_ ksSegmentationMethodEnum                  - Способ сегментации эскиза
  // _126_ ksZoneTypeEnum                            - Способ создания зоны
  // _127_ ksZoneDivisionTypeEnum                    - Способ разбиения зоны
  // _128_ ksGabaritBuildingTypeEnum                 - Способ задания габаритов.
  // _129_ ksDynamicCrossSectionStepBuildingTypeEnum - Способ создания шага сечения модели.
  // _130_ ksCrossSectionPlaneBuildingTypeEnum       - Способ построения секущей плоскости для шага динамического сечения.
  // _131_ ksArchMeasureEnum                         - Способ выражения глубины прогиба.
  // _132_ ksManipulatorTypeEnum                     - Способ разбиения зоны
  // _133_ ksManipulatorPrimitiveEnum                - Тип примитива манипулятора
  // _134_ ksManipulatorModeEnum                     - Режимы работы манипулятора
  // _135_ ksSelectionBandMode                       - Режим использования прямоугольной рамки для выделения.
  // _136_ ksProcessObjectsFilter3DEnum              - Режим использования прямоугольной рамки для выделения объектов.
  // _137_ ksCopyGeometryBuildingTypeEnum            - Способ построения операции копия геометрии.
  // _138_ ksMultiThicknessGroupTypeEnum             - Тип разнотолщинной группы.
  // _139_ ksTextureTypeEnum                         - Тип текстуры.
  // _140_ ksSheetMetalPunchBuildingTypeEnum         - Способ построения для штамповки телом. Инструмент.
  // _141_ ksSheetMetalPunchThicknessTypeEnum        - Способ задания толщины для штамповки телом.
  // _142_ ksScalingTypeEnum                         - Способ масштабирования.
  // _144_ ksTechnicalDemand3DPlacementEnum          - Размещение технических требований.
//
//
// _1_ Константы
  //------------------------------------------------------------------------------
  // _2_ типы 3D объектов
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B6D1C804-A4D7-4e09-BC89-17A14F478A5E") 
enum _Obj3dType
    {
        o3d_unknown	= 0,
        o3d_planeXOY	= 1,
        o3d_planeXOZ	= 2,
        o3d_planeYOZ	= 3,
        o3d_pointCS	= 4,
        o3d_sketch	= 5,
        o3d_face	= 6,
        o3d_edge	= 7,
        o3d_vertex	= 8,
        o3d_axis2Planes	= 9,
        o3d_axis2Points	= 10,
        o3d_axisConeFace	= 11,
        o3d_axisEdge	= 12,
        o3d_axisOperation	= 13,
        o3d_planeOffset	= 14,
        o3d_planeAngle	= 15,
        o3d_plane3Points	= 16,
        o3d_planeNormal	= 17,
        o3d_planeTangent	= 18,
        o3d_planeEdgePoint	= 19,
        o3d_planeParallel	= 20,
        o3d_planePerpendicular	= 21,
        o3d_planeLineToEdge	= 22,
        o3d_planeLineToPlane	= 23,
        o3d_baseExtrusion	= 24,
        o3d_bossExtrusion	= 25,
        o3d_cutExtrusion	= 26,
        o3d_baseRotated	= 27,
        o3d_bossRotated	= 28,
        o3d_cutRotated	= 29,
        o3d_baseLoft	= 30,
        o3d_bossLoft	= 31,
        o3d_cutLoft	= 32,
        o3d_chamfer	= 33,
        o3d_fillet	= 34,
        o3d_meshCopy	= 35,
        o3d_circularCopy	= 36,
        o3d_curveCopy	= 37,
        o3d_circPartArray	= 38,
        o3d_meshPartArray	= 39,
        o3d_curvePartArray	= 40,
        o3d_derivPartArray	= 41,
        o3d_incline	= 42,
        o3d_shellOperation	= 43,
        o3d_ribOperation	= 44,
        o3d_baseEvolution	= 45,
        o3d_bossEvolution	= 46,
        o3d_cutEvolution	= 47,
        o3d_mirrorOperation	= 48,
        o3d_mirrorAllOperation	= 49,
        o3d_cutByPlane	= 50,
        o3d_cutBySketch	= 51,
        o3d_holeOperation	= 52,
        o3d_polyline	= 53,
        o3d_conicSpiral	= 54,
        o3d_spline	= 55,
        o3d_cylindricSpiral	= 56,
        o3d_importedSurface	= 57,
        o3d_thread	= 58,
        o3d_EvolutionSurface	= 59,
        o3d_ExtrusionSurface	= 60,
        o3d_RotatedSurface	= 61,
        o3d_LoftSurface	= 62,
        o3d_MacroObject	= 63,
        o3d_UnionComponents	= 64,
        o3d_MoldCavity	= 65,
        o3d_planeMiddle	= 66,
        o3d_controlPoint	= 67,
        o3d_conjunctivePoint	= 68,
        o3d_aggregate	= 69,
        o3d_point3D	= 70,
        o3d_axisOX	= 71,
        o3d_axisOY	= 72,
        o3d_axisOZ	= 73,
        o3d_sheetMetalBody	= 74,
        o3d_sheetMetalBend	= 75,
        o3d_sheetMetalLineBend	= 76,
        o3d_sheetMetalHole	= 77,
        o3d_sheetMetalCut	= 78,
        o3d_UnHistoried	= 79,
        o3d_baselineDimension3D	= 80,
        o3d_lineDimension3D	= 81,
        o3d_radialDimension3D	= 82,
        o3d_diametralDimension3D	= 83,
        o3d_angleDimension3D	= 84,
        o3d_localCoordinateSystem	= 85,
        o3d_leader3D	= 86,
        o3d_markLeader3D	= 87,
        o3d_rough3D	= 88,
        o3d_positionLeader3D	= 89,
        o3d_brandLeader3D	= 90,
        o3d_base3D	= 91,
        o3d_tolerance3D	= 92,
        o3d_SplitLine	= 93,
        o3d_SurfacePatch	= 94,
        o3d_FaceRemover	= 95,
        o3d_SurfaceSewer	= 96,
        o3d_NurbsSurface	= 97,
        o3d_SurfacesIntersectionCurve	= 98,
        o3d_lastEntityElement	= 99,
        o3d_variable	= 100,
        o3d_placement	= 101,
        o3d_entityCollection	= 102,
        o3d_document	= 103,
        o3d_part	= 104,
        o3d_entity	= 105,
        o3d_mateConstraint	= 106,
        o3d_mateConstraintCollection	= 107,
        o3d_partCollection	= 108,
        o3d_constrElement	= 109,
        o3d_operationElement	= 110,
        o3d_curveElement	= 111,
        o3d_rasterFormat	= 112,
        o3d_additionFormat	= 113,
        o3d_bodyCollection	= 114,
        o3d_body	= 115,
        o3d_faceCollection	= 116,
        o3d_tessellation	= 117,
        o3d_facet	= 118,
        o3d_featureCollection	= 119,
        o3d_feature	= 120,
        o3d_edgeCollection	= 121,
        o3d_orientedEdge	= 122,
        o3d_orientedEdgeCollection	= 123,
        o3d_loop	= 124,
        o3d_loopCollection	= 125,
        o3d_curve3D	= 126,
        o3d_surface	= 127,
        o3d_massInertiaParam	= 128,
        o3d_lineseg3dParam	= 129,
        o3d_circle3dParam	= 130,
        o3d_ellipse3dParam	= 131,
        o3d_nurbsPoint3dParam	= 132,
        o3d_nurbsPoint3dCollection	= 133,
        o3d_nurbsPoint3dCollCollection	= 134,
        o3d_nurbsKnotCollection	= 135,
        o3d_nurbs3dParam	= 136,
        o3d_planeParam	= 137,
        o3d_coneParam	= 138,
        o3d_cylinderParam	= 139,
        o3d_sphereParam	= 140,
        o3d_torusParam	= 141,
        o3d_nurbsSurfaceParam	= 142,
        o3d_mateConstraintGroup	= 143,
        o3d_measurer	= 144,
        o3d_selectionMng	= 145,
        o3d_chooseMng	= 146,
        o3d_arc3dParam	= 147,
        o3d_deletedCopyCollection	= 148,
        o3d_viewProjection	= 149,
        o3d_viewProjectionCollection	= 150,
        o3d_attribute	= 151,
        o3d_attributeCollection	= 152,
        o3d_componentPositioner	= 153,
        o3d_modelLibrary	= 154,
        o3d_ObjectsFilter3D	= 155,
        o3d_coordinate3dCollection	= 156,
        o3d_intersectionResult	= 157,
        o3d_PolygonalLineVertexParam	= 158,
        o3d_variableCollection	= 159,
        o3d_sTrackingPointsMeasurer	= 160,
        o3d_surfaceElement	= 161,
        o3d_designationElement	= 162,
        o3d_copyleftObject	= 163,
        o3d_Embodiment	= 164,
        o3d_userMateConstraint	= 165,
        o3d_intervalVariable	= 166,
        o3d_userFunc	= 167,
        o3d_firstEntityElement2	= 500,
        o3d_Equidistant3D	= 501,
        o3d_TrimmedCurve	= 502,
        o3d_TrimmedCurveObject	= 503,
        o3d_AuxMeshCopy	= 504,
        o3d_AuxCircularCopy	= 505,
        o3d_AuxCurveCopy	= 506,
        o3d_PointDrivenPattern	= 507,
        o3d_PartsPointDrivenPattern	= 508,
        o3d_AuxMirrorOperation	= 509,
        o3d_ConnectCurve	= 510,
        o3d_ConnectCurveObject	= 511,
        o3d_FilletCurve	= 512,
        o3d_FilletCurveObject	= 513,
        o3d_EquidistantSurface	= 514,
        o3d_RuledSurface	= 515,
        o3d_TrimmedSurface	= 516,
        o3d_ExtensionSurface	= 517,
        o3d_SurfaceThickening	= 518,
        o3d_Arc3D	= 519,
        o3d_AuxPointDrivenPattern	= 520,
        o3d_BodiesPointDrivenPattern	= 521,
        o3d_TablePattern	= 522,
        o3d_PartsTablePattern	= 523,
        o3d_AuxTablePattern	= 524,
        o3d_BodiesTablePattern	= 525,
        o3d_MeshPointsSurface	= 526,
        o3d_CloudPointsSurface	= 527,
        o3d_BodiesMeshCopy	= 528,
        o3d_BodiesCircularCopy	= 529,
        o3d_BodiesCurveCopy	= 530,
        o3d_Scaling3D	= 531,
        o3d_MirrorPart	= 532,
        o3d_sheetMetalUndercut	= 533,
        o3d_sheetMetalPlate	= 534,
        o3d_sheetMetalCombinedBend	= 535,
        o3d_sheetMetalBendStraighten	= 536,
        o3d_sheetMetalBendBended	= 537,
        o3d_sheetMetalBendUnfold	= 538,
        o3d_sheetMetalClosedCorner	= 539,
        o3d_sheetMetalBendObject	= 540,
        o3d_sheetMetalDimpleCutout	= 541,
        o3d_sheetMetalDrawnCutout	= 542,
        o3d_sheetMetalBeat	= 543,
        o3d_sheetMetalLouver	= 544,
        o3d_sheetMetalCowling	= 545,
        o3d_PointsArrOnCurve	= 546,
        o3d_PointsArrFromFile	= 547,
        o3d_PointsArrOnSurface	= 548,
        o3d_ArrayExemplar	= 549,
        o3d_AuxGeomArrayExemplar	= 550,
        o3d_BodyArrayExemplar	= 551,
        o3d_NurbsSurfaceByCurvesMesh	= 552,
        o3d_PlaneByPointAndTangentToFace	= 553,
        o3d_PlaneByPlaneCurve	= 554,
        o3d_JointSurface	= 555,
        o3d_DistanceAngleMeasure	= 556,
        o3d_EdgeLengthMeasure	= 557,
        o3d_AreaMeasure	= 558,
        o3d_AxisFromPointByDirection	= 559,
        o3d_Curve3DWithoutHistory	= 560,
        o3d_CurveBy2Projections	= 561,
        o3d_CurveByLaw	= 562,
        o3d_IsoparametricCurve	= 563,
        o3d_CurveOutLine	= 564,
        o3d_SplineOnSurface	= 565,
        o3d_IsoparametricCurvesSet	= 566,
        o3d_ProjectionCurve	= 567,
        o3d_Contour3D	= 568,
        o3d_BodyReposition	= 569,
        o3d_LineSegment3D	= 570,
        o3d_Billet	= 571,
        o3d_PolyLine3DPoint	= 572,
        o3d_OperationLinearDimension	= 573,
        o3d_OperationAngularDimension	= 574,
        o3d_OperationRadialDimension	= 575,
        o3d_OperationDiametralDimension	= 576,
        o3d_SketchLinearDimension	= 577,
        o3d_SketchAngularDimension	= 578,
        o3d_SketchBreakAngularDimension	= 579,
        o3d_SketchRadialDimension	= 580,
        o3d_SketchBreakRadialDimension	= 581,
        o3d_SketchDiametralDimension	= 582,
        o3d_Hole3D	= 583,
        o3d_UserObjectOperation	= 584,
        o3d_Zone3D	= 585,
        o3d_Zone3DDivision	= 586,
        o3d_Zones3D	= 587,
        o3d_WireFrame3D	= 588,
        o3d_CopyGeometry	= 589,
        o3d_CollectionGeometry	= 590,
        o3d_MeshPatternAnyCopy	= 591,
        o3d_CircularPatternAnyCopy	= 592,
        o3d_CurvePatternAnyCopy	= 593,
        o3d_PointDrivenPatternAnyCopy	= 595,
        o3d_TablePatternAnyCopy	= 596,
        o3d_LinearUnhistoriedDimension	= 597,
        o3d_AngularUnhistoriedDimension	= 598,
        o3d_RadialUnhistoriedDimension	= 599,
        o3d_DiametralUnhistoriedDimension	= 600,
        o3d_FaceLift	= 601,
        o3d_UserWireFrame3D	= 602,
        o3d_UndefPartObject	= 603,
        o3d_SpecRough3D	= 604,
        o3d_SketchBreakLinearDimension	= 605,
        o3d_sheetMetalLinearCowling	= 606,
        o3d_UserDesignationObject3D	= 607,
        o3d_SplineFormOperation	= 608,
        o3d_UnhistoriedBase3D	= 609,
        o3d_UnhistoriedThread	= 610,
        o3d_UserDesignationCompObj	= 611,
        o3d_UserFolder	= 612,
        o3d_MeshObject3D	= 613,
        o3d_sheetMetalRib	= 614,
        o3d_axis3D	= 615,
        o3d_SubFoldLine	= 616,
        o3d_OperationLeaderDimension	= 617,
        o3d_FullFillet	= 618,
        o3d_DynamicCrossSection	= 619,
        o3d_RestoredSurface	= 620,
        o3d_CurvatureGraph	= 621,
        o3d_CollisionObject	= 622,
        o3d_CurvatureCheckObject	= 623,
        o3d_ContinuityCheck	= 624,
        o3d_SketchFace	= 625,
        o3d_SectionAnalysis	= 626,
        o3d_Text3D	= 627,
        o3d_SketchArcDimension	= 628,
        o3d_ArcDimension3D	= 629,
        o3d_sheetMetalPunch	= 630,
        o3d_sheetMetalFlanging	= 631,
        o3d_FaceMover	= 632,
        o3d_SplitSolid	= 633,
        o3d_sheetMetalConvertFromBody	= 634,
        o3d_ConicSectionSurface	= 635,
        o3d_TechnicalDemand3D	= 636,
        o3d_ModelText	= 637,
        o3d_ModelTable	= 638,
        o3d_lastEntityElement2	= 1500
    } 	Obj3dType;

  //------------------------------------------------------------------------------
  // _2_ типы 3D объектов
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("979068C4-B232-4a85-B59D-77F71FAE0835") Obj3dType ksObj3dTypeEnum;

  //------------------------------------------------------------------------------
  // _3_ ошибки 3D
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("AAC936A6-363A-4366-A00B-11E69DC9E011") 
enum _ErrorType3d
    {
        et3dNo3dDocument	= -7,
        et3dAbort	= -1,
        et3dError1	= 1,
        et3dError2	= 2,
        et3dError3	= 3,
        et3dError4	= 4,
        et3dError5	= 5,
        et3dError6	= 6,
        et3dError7	= 7,
        et3dError8	= 8,
        et3dError9	= 9,
        et3dError10	= 10,
        et3dError11	= 11,
        et3dError12	= 12,
        et3dError13	= 13,
        et3dError14	= 14,
        et3dError15	= 15,
        et3dError16	= 16,
        et3dError17	= 17,
        et3dError18	= 18,
        et3dError19	= 19,
        et3dError20	= 20,
        et3dError21	= 21,
        et3dError22	= 22,
        et3dError23	= 23,
        et3dError24	= 24,
        et3dError25	= 25,
        et3dError26	= 26,
        et3dError27	= 27,
        et3dError28	= 28,
        et3dError29	= 29,
        et3dError30	= 30,
        et3dError31	= 31,
        et3dError32	= 32,
        et3dError33	= 33,
        et3dError34	= 34,
        et3dError35	= 35,
        et3dError36	= 36,
        et3dError37	= 37,
        et3dError38	= 38,
        et3dError39	= 39,
        et3dError40	= 40,
        et3dError41	= 41,
        et3dError42	= 42,
        et3dError43	= 43,
        et3dError44	= 44,
        et3dError45	= 45,
        et3dError46	= 46,
        et3dError47	= 47,
        et3dError48	= 48,
        et3dError49	= 49,
        et3dError50	= 50,
        et3dError51	= 51,
        et3dError52	= 52,
        et3dError53	= 53,
        et3dError54	= 54,
        et3dError55	= 55,
        et3dError56	= 56,
        et3dError57	= 57,
        et3dError58	= 58,
        et3dError59	= 59,
        et3dError60	= 60,
        et3dError61	= 61,
        et3dError62	= 62,
        et3dError63	= 63,
        et3dError64	= 64,
        et3dError65	= 65,
        et3dError66	= 66,
        et3dError67	= 67,
        et3dError68	= 68,
        et3dError69	= 69,
        et3dError70	= 70,
        et3dError71	= 71,
        et3dError72	= 72,
        et3dError73	= 73,
        et3dError74	= 74,
        et3dError75	= 75,
        et3dError76	= 76,
        et3dError77	= 77,
        et3dError78	= 78,
        et3dError79	= 79,
        et3dError80	= 80,
        et3dError81	= 81,
        et3dError82	= 82,
        et3dError83	= 83,
        et3dError84	= 84,
        et3dError85	= 85,
        et3dError86	= 86,
        et3dError87	= 87,
        et3dError88	= 88,
        et3dError89	= 89,
        et3dError90	= 90,
        et3dError91	= 91,
        et3dError92	= 92,
        et3dError93	= 93,
        et3dError94	= 94,
        et3dError95	= 95,
        et3dError96	= 96,
        et3dError97	= 97,
        et3dError98	= 98,
        et3dError99	= 99,
        et3dError100	= 100,
        et3dError101	= 101,
        et3dError102	= 102,
        et3dError103	= 103,
        et3dError104	= 104,
        et3dError105	= 105,
        et3dError106	= 106,
        et3dError107	= 107,
        et3dError108	= 108,
        et3dError109	= 109,
        et3dError110	= 110,
        et3dError111	= 111,
        et3dError112	= 112,
        et3dError113	= 113,
        et3dError114	= 114,
        et3dError115	= 115,
        et3dError116	= 116,
        et3dError117	= 117,
        et3dError118	= 118,
        et3dError119	= 119,
        et3dError120	= 120,
        et3dError121	= 121,
        et3dError122	= 122,
        et3dError123	= 123,
        et3dError124	= 124,
        et3dError125	= 125,
        et3dError126	= 126,
        et3dError127	= 127,
        et3dError128	= 128,
        et3dError129	= 129,
        et3dError130	= 130,
        et3dError131	= 131,
        et3dError132	= 132,
        et3dError133	= 133,
        et3dError134	= 134,
        et3dError135	= 135,
        et3dError136	= 136,
        et3dError137	= 137,
        et3dError138	= 138,
        et3dError139	= 139,
        et3dError140	= 140,
        et3dError141	= 141,
        et3dError142	= 142,
        et3dError143	= 143,
        et3dError144	= 144,
        et3dError145	= 145,
        et3dError146	= 146,
        et3dError147	= 147,
        et3dError148	= 148,
        et3dError149	= 149,
        et3dError150	= 150,
        et3dError151	= 151,
        et3dError152	= 152,
        et3dError153	= 153,
        et3dError154	= 154,
        et3dError155	= 155,
        et3dError156	= 156,
        et3dError157	= 157,
        et3dError158	= 158,
        et3dError159	= 159,
        et3dError160	= 160,
        et3dError161	= 161,
        et3dError162	= 162,
        et3dError163	= 163,
        et3dError164	= 164,
        et3dError165	= 165,
        et3dError166	= 166,
        et3dError167	= 167,
        et3dError168	= 168,
        et3dError169	= 169,
        et3dError170	= 170,
        et3dError171	= 171,
        et3dError172	= 172,
        et3dError173	= 173,
        et3dError174	= 174,
        et3dError175	= 175,
        et3dError176	= 176,
        et3dError177	= 177,
        et3dError179	= 179,
        et3dError180	= 180,
        et3dError181	= 181,
        et3dError182	= 182,
        et3dError183	= 183,
        et3dError184	= 184,
        et3dError185	= 185,
        et3dError186	= 186,
        et3dError187	= 187,
        et3dError188	= 188,
        et3dError189	= 189,
        et3dError190	= 190,
        et3dError191	= 191,
        et3dError192	= 192,
        et3dError193	= 193,
        et3dError194	= 194,
        et3dError195	= 195,
        et3dError196	= 196,
        et3dError197	= 197,
        et3dError198	= 198,
        et3dError199	= 199,
        et3dError200	= 200,
        et3dError201	= 201,
        et3dError202	= 202,
        et3dError301	= 301,
        et3dError302	= 302,
        et3dError303	= 303,
        et3dError304	= 304,
        et3dError305	= 305,
        et3dError306	= 306,
        et3dError307	= 307,
        et3dError308	= 308,
        et3dError309	= 309,
        et3dError501	= 501,
        et3dError502	= 502,
        et3dError503	= 503,
        et3dError504	= 504,
        et3dError505	= 505,
        et3dError506	= 506,
        et3dError507	= 507,
        et3dError508	= 508,
        et3dError509	= 509,
        et3dError510	= 510,
        et3dError511	= 511,
        et3dError512	= 512,
        et3dError513	= 513,
        et3dError514	= 514,
        et3dError515	= 515,
        et3dError516	= 516,
        et3dError517	= 517,
        et3dError518	= 518,
        et3dError519	= 519,
        et3dError520	= 520,
        et3dError521	= 521,
        et3dError522	= 522,
        et3dError523	= 523,
        et3dError524	= 524,
        et3dError525	= 525,
        et3dError526	= 526,
        et3dError527	= 527,
        et3dError528	= 528,
        et3dError529	= 529,
        et3dError531	= 531,
        et3dError532	= 532,
        et3dError533	= 533,
        et3dError534	= 534,
        et3dError535	= 535,
        et3dError536	= 536,
        et3dError537	= 537,
        et3dError538	= 538,
        et3dError539	= 539,
        et3dError540	= 540,
        et3dError541	= 541,
        et3dError542	= 542,
        et3dError543	= 543,
        et3dError544	= 544,
        et3dError545	= 545,
        et3dError546	= 546,
        et3dError601	= 601,
        et3dError602	= 602,
        et3dError603	= 603,
        et3dError604	= 604,
        et3dError605	= 605,
        et3dError606	= 606,
        et3dError607	= 607,
        et3dError608	= 608,
        et3dError609	= 609,
        et3dError610	= 610,
        et3dError611	= 611,
        et3dError612	= 612,
        et3dError613	= 613,
        et3dError614	= 614,
        et3dError615	= 615,
        et3dError616	= 616,
        et3dError617	= 617,
        et3dError618	= 618,
        et3dError619	= 619,
        et3dError620	= 620,
        et3dError621	= 621,
        et3dError622	= 622,
        et3dError623	= 623,
        et3dError624	= 624,
        et3dError625	= 625,
        et3dError626	= 626,
        et3dError627	= 627
    } 	ErrorType3d;

#define	MAXERROR3d	( 197 )

  //------------------------------------------------------------------------------
  // _4_ типы направлений
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("A4E48013-AED8-4866-B202-F7C114FBCBC4") 
enum _Direction_Type
    {
        dtNormal	= 0,
        dtReverse	= 1,
        dtBoth	= 2,
        dtMiddlePlane	= 3
    } 	Direction_Type;

  //------------------------------------------------------------------------------
  // _4_ типы направлений
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4964F564-28E7-4d3e-829B-E91CB7A39137") Direction_Type ksDirectionTypeEnum;

  //------------------------------------------------------------------------------
  // _5_ типы операций
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("2D7B00CE-B16E-421b-AB0F-194E154480EB") 
enum _End_Type
    {
        etBlind	= 0,
        etThroughAll	= 1,
        etUpToVertexTo	= 2,
        etUpToVertexFrom	= 3,
        etUpToSurfaceTo	= 4,
        etUpToSurfaceFrom	= 5,
        etUpToNearSurface	= 6
    } 	End_Type;

  //------------------------------------------------------------------------------
  // _5_ типы операций
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("7AE7F181-806D-4e5f-8009-4243F805985F") End_Type ksEndTypeEnum;

  //------------------------------------------------------------------------------
  // _6_ Тип компонента
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("CAF37955-8DD4-4c8b-9353-086F3DBDD25F") 
enum _Part_Type
    {
        pInPlace_Part	= -4,
        pNew_Part	= -3,
        pEdit_Part	= -2,
        pTop_Part	= -1
    } 	Part_Type;

  //------------------------------------------------------------------------------
  // _7_ типы сопряжений
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D35C0B15-B4AD-4162-AA05-6BD05C805E7C") 
enum _MateConstraintType
    {
        mc_Unknown	= -1,
        mc_Coincidence	= 0,
        mc_Parallel	= 1,
        mc_Perpendicular	= 2,
        mc_Tangency	= 3,
        mc_Concentric	= 4,
        mc_Distance	= 5,
        mc_Angle	= 6,
        mc_InPlace	= 7,
        mc_Transmission	= 9,
        mc_CamGear	= 10,
        mc_Symmetric	= 11,
        mc_Dependent	= 14
    } 	MateConstraintType;

  //------------------------------------------------------------------------------
  // _8_ режим визуализации модели 
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("E6DF6A50-5E51-4036-A2E4-C391CACAC0BB") 
enum _ViewMode
    {
        vm_Wireframe	= 0,
        vm_HiddenRemoved	= 1,
        vm_HiddenThin	= 2,
        vm_Shaded	= 3
    } 	ViewMode;

  //------------------------------------------------------------------------------
  // _10_ определения для конвертации в дополнительные форматы jgs, sat, xt, step, stl, VRML, JT
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("812D86F5-E9FC-48f1-82AF-966785EE7426") 
enum _D3FormatConvType
    {
        load_format_SAT	= -1,
        load_format_XT	= -2,
        load_format_STEP	= -3,
        load_format_IGES	= -4,
        load_format_STL	= -6,
        load_format_C3D	= -7,
        load_format_JT	= -8,
        load_format_OBJ	= -9,
        format_Unknown	= 0,
        format_SAT	= 1,
        format_XT	= 2,
        format_STEP	= 3,
        format_IGES	= 4,
        format_VRML	= 5,
        format_STL	= 6,
        format_C3D	= 7,
        format_JT	= 8,
        load_format_NX	= -100,
        load_format_CREO	= -101,
        load_format_SW	= -102,
        load_format_INV	= -103,
        load_format_CATIA	= -104,
        load_format_SE	= -105,
        format_STEP_AP203	= 203,
        format_STEP_AP214	= 214,
        format_STEP_AP242	= 242
    } 	D3FormatConvType;

  //------------------------------------------------------------------------------
  // _11_ Типы используемого цвета
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("8967DE31-3B79-4d39-A37E-A5339DDB46B3") 
enum _UseColor
    {
        useColorUnknown	= -1,
        useColorOur	= 0,
        useColorOwner	= 1,
        useColorSource	= 2,
        useColorLayer	= 3
    } 	UseColor;

  //------------------------------------------------------------------------------
  // _11_ Типы используемого цвета
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("88C91E24-6CB2-408f-9418-FDDEC91BC73D") UseColor ksUseColorEnum;

  //------------------------------------------------------------------------------
  // _12_ Тип перемещения
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0BA91E24-1695-40ea-BD4C-FC1CAAFBADF3") 
enum _Positioner_Type
    {
        pnMove	= 0,
        pnRotate	= 1
    } 	Positioner_Type;

  //------------------------------------------------------------------------------
  // _13_ Типы пересечений.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B5A71CD2-1FF5-4ba2-B733-F7D563FA2104") 
enum _Intersection_Type
    {
        itTangentPoint	= 1,
        itTangentCurve	= 2,
        itTangentSurface	= 3,
        itBody	= 4
    } 	Intersection_Type;

  //------------------------------------------------------------------------------
  // _14_ Типы математических объектов учавствующих в сопряжении.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("FA6F3F1A-E10D-4022-A546-E4DD75895C90") 
enum _MateType
    {
        ksMateUnknown	= 0,
        ksMatePoint	= 1,
        ksMateLine	= 2,
        ksMatePlane	= 3,
        ksMateCylinder	= 4,
        ksMateCone	= 5,
        ksMateSphere	= 6,
        ksMateTorus	= 7,
        ksMateCircle	= 8
    } 	ksMateType;

  //------------------------------------------------------------------------------
  // _17_ Способ построения сегмента ломоной.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4DEC076F-B6BD-45a5-9EAF-98B8903F9679") 
enum _LineBuildingType
    {
        ksLBTByPoint	= 0,
        ksLBTXDirection	= 1,
        ksLBTYDirection	= 2,
        ksLBTZDirection	= 3,
        ksLBTParallel	= 4,
        ksLBTPerpendicular	= 5,
        ksLBTByPoint3DParams	= 6
    } 	ksLineBuildingType;

  //------------------------------------------------------------------------------
  // _18_ Способ построения сегмента ломоной.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("694C5399-C24F-4c55-AE20-1DB0B3FA20F5") 
enum _Part7CollectionTypeEnum
    {
        ksAllParts	= 0,
        ksUniqueParts	= 1
    } 	ksPart7CollectionTypeEnum;

  //-------------------------------------------------------------------------------
  // _19_ Способ определения длины развертки.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("C70EACA3-4800-499b-AECB-44455CFFB90A") 
enum _ksUnfoldTypeEnum
    {
        ksCoefficient	= 0,
        ksValueBend	= 1,
        ksDecreaseBend	= 2,
        ksTableBends	= 3
    } 	ksUnfoldTypeEnum;

  //-------------------------------------------------------------------------------
  // _20_ Тип размещения сгиба на ребре .
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("21039896-B184-4281-8E53-1250C6DEEDF9") 
enum _ksBendDisposalEnum
    {
        ksBendDisposalAllLength	= 0,
        ksBendDisposalCentre	= 1,
        ksBendDisposalLeft	= 2,
        ksBendDisposalRight	= 3,
        ksBendDisposalTwo	= 4,
        ksBendDisposalLeftAndWidth	= 5,
        ksBendDisposalRightAndWidth	= 6
    } 	ksBendDisposalEnum;

  //-------------------------------------------------------------------------------
  // _21_ Тип определения длины.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("CD78E854-7C68-428c-8F62-C06830B4FF1D") 
enum _ksBendLengthTypeEnum
    {
        ksBendLengthByContinue	= 0,
        ksBendLengthByContour	= 1,
        ksBendLengthByTouch	= 2,
        ksBendLengthByContourInternal	= 3,
        ksBendLengthByTangentInternal	= 4
    } 	ksBendLengthTypeEnum;

  //-------------------------------------------------------------------------------
  // _22_ Тип смещения.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D1C2FC96-4E75-4db6-B8F7-0123E6D16A9A") 
enum _ksBendOffsetTypeEnum
    {
        ksBendOffsetIn	= 0,
        ksBendOffsetOut	= 1,
        ksBendOffsetLineOutside	= 2,
        ksBendOffsetLineInside	= 3,
        ksBendOffsetByTouch	= 4,
        ksBendOffsetByCentre	= 5
    } 	ksBendOffsetTypeEnum;

  //-------------------------------------------------------------------------------
  // _23_ Тип построения боковой стороны сгиба.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D809F5D8-1D57-49b3-B202-C2BF2C113700") 
enum _ksBendSideTypeEnum
    {
        ksBendSideByAngle	= 0,
        ksBendSideByWidening	= 1
    } 	ksBendSideTypeEnum;

  //-------------------------------------------------------------------------------
  // _24_ Тип освобождения cгиба.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("54A9A1BA-D745-48fe-B902-578BF05FAB49") 
enum _ksBendReleaseTypeEnum
    {
        ksBendReleaseByRect	= 0,
        ksBendReleaseByCircle	= 1
    } 	ksBendReleaseTypeEnum;

  //-------------------------------------------------------------------------------
  // _25_ Способ освобождения угла сгиба.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("22C2B7D6-DBAE-49a1-9F73-14A03F44B0CD") 
enum _ksBendAngleReleaseTypeEnum
    {
        ksBendAngleBendOnly	= 0,
        ksBendAngleIn	= 1,
        ksBendAngleAllBends	= 2
    } 	ksBendAngleReleaseTypeEnum;

  //-------------------------------------------------------------------------------
  // _26_ Способ сгиба.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("188CFE49-BC6B-4e5f-86FA-2114FC706E30") 
enum _ksBendTypeEnum
    {
        ksLineBend	= 0,
        ksBendLineOutside	= 1,
        ksBendLineInside	= 2,
        ksBendByTouch	= 3,
        ksBendByCentre	= 4
    } 	ksBendTypeEnum;

  //-------------------------------------------------------------------------------
  // _27_ Тип построения отверстия и выреза .
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("9967A367-CB76-4960-8689-3B2305277708") 
enum _ksHoleCutTypeEnum
    {
        ksHoleCutByWidth	= 0,
        ksHoleCutByDepth	= 1,
        ksHoleCutUpToSurface	= 2
    } 	ksHoleCutTypeEnum;

  //------------------------------------------------------------------------------
  // _15_ Типы действий для оперций над телами
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("F5E8CD7E-785C-4a3f-BF94-42005021248A") 
enum _ChooseBodiesType
    {
        ksNewBody	= 0,
        ksAutomaticDefinition	= 1,
        ksManualEditing	= 2,
        ksAllBodies	= 3
    } 	ksChooseBodiesType;

  //------------------------------------------------------------------------------
  // _28_ Способ определения области применения для компонентов в сборочной операции
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D203DCD8-F3CC-4c5d-AA32-09F74F66FF98") 
enum _ChoosePartsType
    {
        ksChAutomaticDefinition	= 1,
        ksChManualEditing	= 2,
        ksChAllParts	= 3,
        ksChNoLibraryParts	= 4
    } 	ksChoosePartsType;

  //------------------------------------------------------------------------------
  // _29_ Область применения. Группы объектов.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("1CDF04A8-CE92-4d22-8F94-1B1375742861") 
enum _ChooseType
    {
        ksChBodiesAndParts	= 1,
        ksChParts	= 2,
        ksChBodies	= 3
    } 	ksChooseType;

//-------------------------------------------------------------------------------
// _30_ ksPoint3DTypeEnum - Способы построения пространственной точки.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("3F409E43-7A53-4ae8-A17B-5B815E450FC1") 
enum _ksPoint3DTypeEnum
    {
        ksPUnknown	= 0,
        ksPParamCoord	= 1,
        ksPDisplace	= 2,
        ksPIntersect	= 3,
        ksPCenter	= 4,
        ksPCurve	= 5,
        ksPSurface	= 6,
        ksPProjection	= 7,
        ksPCylindrCoord	= 8,
        ksPSphericCoord	= 9
    } 	ksPoint3DTypeEnum;

//-------------------------------------------------------------------------------
// _31_ ksPoint3DCurveParamTypeEnum - Типы смещений при способе построения точки вдоль кривой.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D619D348-858C-436b-992D-035DEDA5607C") 
enum _ksPoint3DCurveParamTypeEnum
    {
        ksOffsetByU	= 1,
        ksOffsetByLen	= 2,
        ksOffsetByAngle	= 3
    } 	ksPoint3DCurveParamTypeEnum;

//-------------------------------------------------------------------------------
// _32_ ksPoint3DSurfaceParamTypeEnum - Типы смещений при способе построения точки на поверхности.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("73AF2D44-A0DA-4062-AD6D-11728988A474") 
enum _ksPoint3DSurfaceParamTypeEnum
    {
        ksOffsetByUV	= 1,
        ksOffsetByLenFromObj	= 2,
        ksOffsetByCoords	= 3,
        ksOffsetByCylinderCoords	= 4,
        ksOffsetBySphereCoords	= 5
    } 	ksPoint3DSurfaceParamTypeEnum;

//-------------------------------------------------------------------------------
// _33_ ksMeasureResultEnum - Результат измерения расстояния и угла между поверхностями.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0CDDA9A4-158F-4fd4-B2A8-FFE1389A7E1B") 
enum _ksMeasureResultEnum
    {
        ksMResUnknown	= 0,
        ksMResAxisAxisCoaxial	= 1,
        ksMResAxisAxisParallel	= 2,
        ksMResAxisAxisIntersect	= 3,
        ksMResAxisAxisDistant	= 4,
        ksMResAxisSurfColinear	= 5,
        ksMResAxisSurfParallel	= 6,
        ksMResAxisSurfIntersect	= 7,
        ksMResAxisSurfDistant	= 8,
        ksMResSurfSurfColinear	= 9,
        ksMResSurfSurfParallel	= 10,
        ksMResSurfSurfIntersecting	= 11
    } 	ksMeasureResultEnum;

// -------------------------------------------------------------------------------
// _34_ ksOrientationTypeEnum  - Тип ориентирования ЛСК.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4EAE8137-CEA4-4f75-97E4-1A4374FFD96A") 
enum _ksOrientationTypeEnum
    {
        ksAxisOrientation	= 0,
        ksEulerCorners	= 1,
        ksOrientByObject	= 2
    } 	ksOrientationTypeEnum;

//-------------------------------------------------------------------------------
// _35_ ksModelObjectParamTypeEnum - Тип параметров объекта.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("E88E7E08-B3F8-49f7-872E-B80795EDED95") 
enum _ksModelObjectParamTypeEnum
    {
        ksMOAllParam	= 1,
        ksMOPartAllParam	= 2,
        ksMOCurrentLSKAllParam	= 3
    } 	ksModelObjectParamTypeEnum;

//-------------------------------------------------------------------------------
// _36_ ks3DLineStyle - Стили 3D линий для отрисовки с помощью OpenGL.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4E11BABD-F5A9-4678-9387-F112C676CDE2") 
enum _ks3DLineStyle
    {
        ksCS3DNoDrawing	= 0,
        ksCS3DSolid	= 1,
        ksCS3DDashed	= 2,
        ksCS3DDotted	= 3,
        ksCS3DDashDot	= 4,
        ksCS3DDashDotLDash2Dots	= 5
    } 	ks3DLineStyle;

//-------------------------------------------------------------------------------
// _37_  ksLoadTypeEnum - Тип загрузки компонента.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("7E3A2F5D-3339-45eb-BA57-6E99DA20BB24") 
enum _ksLoadStateEnum
    {
        ksLUnknown	= -1,
        ksLCompletely	= 0,
        ksLUnload	= 1,
        ksLTriangles	= 2,
        ksLPartially	= 3,
        ksLGabarit	= 4
    } 	ksLoadStateEnum;

//-------------------------------------------------------------------------------
// _38_ ksFacetCullingMode - Режим фильтрации отображаемых граней внешнего объекта.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("FAD600A1-A24A-4b4d-9661-6EC6AD1757A4") 
enum _ksFacetCullingMode
    {
        ksFSMNone	= 0,
        ksFSMFront	= 1,
        ksFSMBack	= 2,
        ksFSMAll	= 3
    } 	ksFacetCullingMode;

//-------------------------------------------------------------------------------
// _39_ ksEquidistant3DCutModeEnum - Обход углов эквидистанты 3D.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("5C0DF5CE-53F6-4b55-8D9F-77B28059C4BF") 
enum _ksEquidistant3DCutModeEnum
    {
        ksECMUnknown	= 0,
        ksECMLineSeg	= 1,
        ksECMCircle	= 2
    } 	ksEquidistant3DCutModeEnum;

//-------------------------------------------------------------------------------
// _40_ ksPatternBasePointTypeEnum - Способ задания базовой точки.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("75A8AAF6-5082-4864-936B-45AD2D4F894C") 
enum _ksPatternBasePointTypeEnum
    {
        ksCRAuto	= 0,
        ksCRManual	= 1,
        ksCRFirstObject	= 2
    } 	ksPatternBasePointTypeEnum;

//-------------------------------------------------------------------------------
// _41_ ksExtensionTypeEnum -  Тип продления поверхности.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0AD22EDF-6ECC-4570-91C1-3C7C0D9DDE1B") 
enum _ksExtensionSurfaceTypeEnum
    {
        ksESTUnknown	= -1,
        ksESTSelf	= 0,
        ksESTTangent	= 1,
        ksESTDirection	= 2
    } 	ksExtensionSurfaceTypeEnum;

//-------------------------------------------------------------------------------
// _42_ ksExtensionLimitTypeEnum -  Способ ограничения.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D778A897-F80F-4d38-9D20-0DF46A642837") 
enum _ksExtensionLimitTypeEnum
    {
        ksETLUnknown	= -1,
        ksETLength	= 0,
        ksETLVertex	= 1
    } 	ksExtensionLimitTypeEnum;

// -------------------------------------------------------------------------------
// _43_ ksVector3DParametersTypeEnum - Типы параметров вектора.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B22FD17B-476C-4685-94A2-6908988E41BC") 
enum _ksVector3DParametersTypeEnum
    {
        ksVector3DUnknown	= 0,
        ksVector3D2Vertex	= 1,
        ksVector3DCSAngle	= 2,
        ksVector3DAxis	= 3,
        ksVector3DCoefficients	= 4,
        ksVector3D2Angles	= 5,
        ksVector3DEdge	= 6,
        ksVector3DPlane	= 7,
        ksVector3DSurface	= 8,
        ksVector3DCurve	= 9,
        ksVector3DScreen	= 10
    } 	ksVector3DParametersTypeEnum;

// -------------------------------------------------------------------------------
// _44_ ksBasisVectorTypeEnum  - Типы базисного вектора.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("95A1DF3D-214A-4be0-982C-0FA8E64DD07A") 
enum _ksBasisVectorTypeEnum
    {
        ksTangentVector	= 0,
        ksNormalVector	= 1,
        ksBinormalVector	= 2
    } 	ksBasisVectorTypeEnum;

// -------------------------------------------------------------------------------
// _45_ ksConnectTypeEnum  - Тип соединения кривых.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("307AB9C0-CFD0-4e9c-865A-A6AFBEBA3116") 
enum _ksConnectTypeEnum
    {
        ksCTUnknown	= -1,
        ksCTPosition	= 0,
        ksCTTangent	= 1,
        ksCTNormal	= 2,
        ksCTSmooth	= 3
    } 	ksConnectTypeEnum;

// -------------------------------------------------------------------------------
// _46_ ksArc3DBuildingTypeEnum - Способ создания 3D дуги.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("F618AFBD-5B6E-475f-BBDE-BBD9D0015D29") 
enum _ksArc3DBuildingTypeEnum
    {
        ksArc3DByPoints	= 0,
        ksArc3DByCentre	= 1,
        ksArc3DByDirrection	= 2,
        ksArc3DByTanCurve	= 3
    } 	ksArc3DBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _47_ ksArc3DParameterEnum  - Индекс параметра 3D дуги.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4CC57A26-00E7-4dd6-89E9-EE2C85E4EA0B") 
enum _ksArc3DParameterEnum
    {
        ksArc3DCenter	= 0,
        ksArc3DPoint1	= 1,
        ksArc3DPoint2	= 2,
        ksArc3DPoint3	= 3,
        ksArc3DAngle1	= 1,
        ksArc3DAngle2	= 2,
        ksArc3DRadius	= 3
    } 	ksArc3DParameterEnum;

// -------------------------------------------------------------------------------
// _48_ ksRotatedTypeEnum - Способ построения угла вращения.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("3B0A8DD6-8B55-4166-A21B-53A83136AA64") 
enum _ksRotatedTypeEnum
    {
        ksRTAngle	= 0,
        ksRTVertex	= 1,
        ksRTSurface	= 2
    } 	ksRotatedTypeEnum;

// -------------------------------------------------------------------------------
// _49_ ksLinearPatternBuildingTypeEnum - Способ построения массива по сетке.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("9E36236D-818C-4cc0-BA95-5788E30DA7E8") 
enum _ksLinearPatternBuildingTypeEnum
    {
        ksLPSaveAll	= 0,
        ksLPSaveAlongPerimeter	= 1,
        ksLPSaveAlongAxially	= 2,
        ksLPChessOrderByAxis1	= 3,
        ksLPChessOrderByAxis2	= 4
    } 	ksLinearPatternBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _50_ ksPartAccessTypeEnum -  Тип доступа к компоненту.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("7E8BA3F0-C6BB-46fc-9014-8CE4E1D8E782") 
enum _ksPartAccessTypeEnum
    {
        ksATUncertainty	= -1,
        ksATEditable	= 0,
        ksATReadOnly	= 1,
        ksATDisable	= 2
    } 	ksPartAccessTypeEnum;

// -------------------------------------------------------------------------------
// _51_ ksMeshPointsSurfaceBuildingTypeEnum - Тип поверхности по сети точек.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("40B6EE85-EB19-44b3-A490-8EB2A146F852") 
enum ksMeshPointsSurfaceBuildingTypeEnum
    {
        ksMPByPoints	= 0,
        ksMPByPole	= 1
    } 	ksMeshPointsSurfaceBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _52_ ksCloudSurfaceBuildingTypeEnum - Тип поверхности по облаку точек.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D4781300-F0B0-455e-876D-AF3743D14CAD") 
enum _ksCloudPointsSurfaceBuildingTypeEnum
    {
        ksCLByPoints	= 0,
        ksCLByPole	= 1,
        ksCLPolyhedral	= 2
    } 	ksCloudPointsSurfaceBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _53_ ksCloudTypeEnum - Способ распознования сети точек.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("97707155-CEFF-486d-8908-CDE033FC7334") 
enum _ksCloudTypeEnum
    {
        ksCLAuto	= 0,
        ksCLLocalCS	= 1,
        ksCLScreen	= 2
    } 	ksCloudTypeEnum;

  //------------------------------------------------------------------------------
  // _54_ Способ фильтрации 3D объектов.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("86D7EF72-1872-4159-876D-2B7949BF1DF6") 
enum _ksObjectsFilter3DEnum
    {
        ksFilterAll	= 0,
        ksFilterFaces	= 1,
        ksFilterEdges	= 2,
        ksFilterVertexs	= 3,
        ksFilterCPlanes	= 4,
        ksFilterCAxis	= 5,
        ksFilterParts	= 6,
        ksFilterBodies	= 7,
        ksFilterSurfaces	= 8,
        ksFilterSketches	= 9,
        ksFilterCurves	= 10,
        ksFilterCS	= 11,
        ksFilterControlPoints	= 12,
        ksFilterPoints3D	= 13,
        ksFilterDesignations	= 14,
        ksFilterThread	= 15
    } 	ksObjectsFilter3DEnum;

  //------------------------------------------------------------------------------
  // _55_ Порядок законов.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("59357D0F-8E3B-4de9-8E5D-1EA560D9AFCF") 
enum _ksCoordLawEnum
    {
        ksCLawX	= 0,
        ksCLawY	= 1,
        ksCLawZ	= 2
    } 	ksCoordLawEnum;

  //------------------------------------------------------------------------------
  // _56_ Типы законов.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("089100F3-E556-46c5-A3F5-08C0725B5E90") 
enum _ksLawTypeEnum
    {
        ksTLawConst	= 0,
        ksTLawLinear	= 1,
        ksTLawCube	= 2,
        ksTLawByExpression	= 3
    } 	ksLawTypeEnum;

// -------------------------------------------------------------------------------
// _57_ ksCircularPatternBuildingTypeEnum - Способ построения массива по концентрической сетке.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("968BAF5C-FA17-4e10-A564-CD679002E2C2") 
enum _ksCircularPatternBuildingTypeEnum
    {
        ksCPSaveAll	= 0,
        ksCPChessOrderByAxis1	= 1,
        ksCPChessOrderByAxis2	= 2
    } 	ksCircularPatternBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _58_ ksSplineTangentEnum - Тип направления касательной.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("A4540537-F734-4419-AA54-E3E0E8466A74") 
enum _ksSplineTangentEnum
    {
        ksSTNone	= 0,
        ksSTByDirection	= 1,
        ksSTCurveU	= 2,
        ksSTCurveV	= 3,
        ksSTSurfaceCurve	= 4
    } 	ksSplineTangentEnum;

  //------------------------------------------------------------------------------
  // _59_ Тип проекции кривой.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("96E09375-9C26-4c97-8DD6-BFCCBD087D8C") 
enum _ksCurveProjectionTypeEnum
    {
        ksCPNearest	= 0,
        ksCPNearestByDirection	= 1
    } 	ksCurveProjectionTypeEnum;

  //------------------------------------------------------------------------------
  // _60_ Тип контура.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("EEDCF647-0F60-4df6-8199-744E3BCA4C7D") 
enum _ksContour3DTypeEnum
    {
        ksCTAuto	= 0,
        ksCTSpace	= 1,
        ksCTSurface	= 2,
        ksCTSketch	= 3
    } 	ksContour3DTypeEnum;

  //------------------------------------------------------------------------------
  // _61_ Тип построения отрезка 3D.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("95163FBB-4C16-4f16-AC01-400269860CBC") 
enum _ksLineSegment3DTypeEnum
    {
        ksLSTTwoPoints	= 0,
        ksLSTPointLenghtAngle	= 1
    } 	ksLineSegment3DTypeEnum;

  //------------------------------------------------------------------------------
  // _62_ ksConjunctivePointTypeEnum - Способ построение присоединительной точки.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("5EA1DE1C-EF3E-411b-A4B3-741B2DB8111F") 
enum _ksConjunctivePointTypeEnum
    {
        ksCPByObject	= 0,
        ksCPManualDirection	= 1
    } 	ksConjunctivePointTypeEnum;

//-------------------------------------------------------------------------------
// _63_ ksContour3DBuildingTypeTypeEnum - Способ построения Контура 3D.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("81636BDF-8B3C-4af8-A936-62C4FAC9598F") 
enum _ksContour3DBuildingTypeTypeEnum
    {
        ksCBTUnknown	= 0,
        ksCBTEdges	= 1,
        ksCBTEquidistant	= 2
    } 	ksContour3DBuildingTypeTypeEnum;

//-------------------------------------------------------------------------------
// _64_ ksRelationTypeEnum - Тип родственных отношений.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("033193FF-F75A-4d3e-86F1-F1450280BF48") 
enum _ksRelationTypeEnum
    {
        ksRTUnknown	= 0,
        ksRTIndifferent	= 1,
        ksRTStrong	= 2
    } 	ksRelationTypeEnum;

//-------------------------------------------------------------------------------
// _65_ ksSpiral3DHeightTypeEnum - Способ задания высоты
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("8689860F-FD49-4d49-8D66-DFE2D67A5855") 
enum _ksSpiral3DHeightTypeEnum
    {
        ksSHTByValue	= 0,
        ksSHTByObject	= 1,
        ksSHTByCurve	= 2
    } 	ksSpiral3DHeightTypeEnum;

//-------------------------------------------------------------------------------
// _66_ ksSpiral3DBuildingTypeEnum - Способ построения спирали 3D
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("AE2342CA-8925-4c5f-83FD-545A0F9FFFDB") 
enum _ksSpline3DBuildingTypeEnum
    {
        ksSBTByStepAndTurnCount	= 0,
        ksSBTByStepAndHeight	= 1,
        ksSBTByTurnCountAndHeight	= 2
    } 	ksSpline3DBuildingTypeEnum;

//-------------------------------------------------------------------------------
// _67_ ksSpline3DDiameterTypeEnum - Способ задания диаметра спирали 3D
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("3DFA9658-506F-4483-83AD-ECF730902095") 
enum _ksSpline3DDiameterTypeEnum
    {
        ksSDTByValue	= 0,
        ksSDTByObject	= 1,
        ksSDTByGeneratrixTiltAngle	= 2
    } 	ksSpline3DDiameterTypeEnum;

//-------------------------------------------------------------------------------
// _68_ ksPointsArrOnCurveTypeEnum - Способ построения точек группы
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("8F9E12DD-2EDE-47b7-ABA2-E7EC1AE3167F") 
enum _ksPointsArrOnCurveTypeEnum
    {
        ksPAOCByPointsCount	= 0,
        ksPAOCByStep	= 1,
        ksPAOCByParametricStep	= 2
    } 	ksPointsArrOnCurveTypeEnum;

//-------------------------------------------------------------------------------
// _69_ ksPointsArrOnSurfaceTypeEnum - Способ построения точек группы
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("CBA80496-0DF6-44f3-992E-91130B017E95") 
enum _ksPointsArrOnSurfaceTypeEnum
    {
        ksPAOSByPointsUVCount	= -1,
        ksPAOSByLinearDeflection	= 0,
        ksPAOSByAngularDeflection	= 1,
        ksPAOSByMeshAroundPoint	= 2
    } 	ksPointsArrOnSurfaceTypeEnum;

//-------------------------------------------------------------------------------
// _70_ ksMeshAroundPointTypeEnum - Тип сетки построенной вокруг точки
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("70612141-0BFF-4027-8BFC-539BE3059E8B") 
enum _ksMeshAroundPointTypeEnum
    {
        ksMALinear	= 0,
        ksMAUVLinear	= 1,
        ksMACircular	= 2,
        ksMAHexagonal	= 3
    } 	ksMeshAroundPointTypeEnum;

//-------------------------------------------------------------------------------
// _71_ ksEditColorTypeEnum - Тип цвета редактирования
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("3C40AC33-6CAC-4888-A248-9B1994CAFA32") 
enum _ksEditColorTypeEnum
    {
        ksECSelectObject	= 0,
        ksECChooseObject1	= 1,
        ksECChooseObject2	= 2,
        ksECChooseObject3	= 3,
        ksECPassiveParts	= 4,
        ksECFacePhantom	= 5,
        ksECLabelsPhantom	= 6,
        ksECDimensions	= 7
    } 	ksEditColorTypeEnum;

  //------------------------------------------------------------------------------
  // _72_ ksProjectionOptionEnum - Опции проецирования.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("33FCAE36-1B1D-4489-ACD0-EE1FAA0AED85") 
enum _ksProjectionOptionEnum
    {
        ksPOUndefined	= -1,
        ksPODisable	= 0,
        ksPOEnable	= 1,
        ksPOByLayer	= 2
    } 	ksProjectionOptionEnum;

  //------------------------------------------------------------------------------
  // _73_ ksVisibleStateEnum - Состояние видимости объекта.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0F04F158-BC24-41FC-84BA-C105E8C74C44") 
enum _ksVisibleStateEnum
    {
        ksVSUndefined	= -1,
        ksVSVisible	= 0,
        ksVSHidden	= 1,
        ksVSByLayer	= 2
    } 	ksVisibleStateEnum;

  //------------------------------------------------------------------------------
  // _74_ ksEditableStateEnum - Способ редактирования.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D9132734-CFEF-49DD-A412-20176955C302") 
enum _ksEditableStateEnum
    {
        ksESUndefined	= -1,
        ksESDisable	= 0,
        ksESEnable	= 1,
        ksESByLayer	= 2
    } 	ksEditableStateEnum;

//-------------------------------------------------------------------------------
// _75_ ksToleranceRecalcsEnum - Способ пересчета размера
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0BE57A41-0674-45FE-8DF7-CE317B867F85") 
enum _ksToleranceRecalcsEnum
    {
        ksTRUnknown	= 0,
        ksTRLowerLimit	= 1,
        ksTRTopLimit	= 2,
        ksTRMiddle	= 3,
        ksTRCoefficient	= 4,
        ksTRUser	= 5
    } 	ksToleranceRecalcsEnum;

  //------------------------------------------------------------------------------
  // _76_ ksSpecRoughPlacementEnum Размещение неуказанной шероховатости.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("6E29802C-9F4B-4F70-A77D-410C629B49E4") 
enum _ksSpecRoughPlacementEnum
    {
        ksRPTopLeft	= 0,
        ksRPTopRight	= 1,
        ksRPBottomRight	= 2
    } 	ksSpecRoughPlacementEnum;

//-------------------------------------------------------------------------------
// _77_ ksMathCurve3DTypeEnum - Тип математической кривой в трехмерном пространстве
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("1277A1EB-E280-46E7-8DDA-ED201F6E6B87") 
enum _ksMathCurve3DTypeEnum
    {
        ks3DCurve	= 0,
        ksLine3D	= 1,
        ksLineSegment3D	= 2,
        ksArc3D	= 3,
        ksSpiral	= 4,
        ksConeSpiral	= 5,
        ksCurveSpiral	= 6,
        ksCrookedSpiral	= 7,
        ksPolyCurve3D	= 8,
        ksPolyline3D	= 9,
        ksNurbs3D	= 10,
        ksBezier3D	= 11,
        ksHermit3D	= 12,
        ksCubicSpline3D	= 13,
        ksPlaneCurve	= 14,
        ksOffsetCurve3D	= 15,
        ksTrimmedCurve3D	= 16,
        ksReparamCurve3D	= 17,
        ksBridgeCurve3D	= 18,
        ksCharacterCurve3D	= 19,
        ksContourOnSurface	= 20,
        ksContourOnPlane	= 21,
        ksSurfaceCurve	= 22,
        ksSilhouetteCurve	= 23,
        ksSurfaceIntersectionCurve	= 24,
        ksBSpline	= 25,
        ksContour3D	= 26
    } 	ksMathCurve3DTypeEnum;

//-------------------------------------------------------------------------------
// _78_ ksMathSurface3DTypeEnum - Тип математической поверхности в трехмерном пространстве
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("83A59E79-D0B4-4AF7-A9BF-3B291F84E87D") 
enum _ksMathSurface3DTypeEnum
    {
        ks3DSurface	= 0,
        ksElementarySurface	= 1,
        ksPlane	= 2,
        ksConeSurface	= 3,
        ksCylinderSurface	= 4,
        ksSphereSurface	= 5,
        ksTorusSurface	= 6,
        ksSweptSurface	= 7,
        ksExtrusionSurface	= 8,
        ksRevolutionSurface	= 9,
        ksEvolutionSurface	= 10,
        ksExactionSurface	= 11,
        ksExpansionSurface	= 12,
        ksElevationSurface	= 13,
        ksSpiralSurface	= 14,
        ksRuledSurface	= 15,
        ksSectorSurface	= 16,
        ksPolySurface	= 17,
        ksHermitSurface	= 18,
        ksSplineSurface	= 19,
        ksGridSurface	= 20,
        ksTriBezierSurface	= 21,
        ksSimplexSurface	= 22,
        ksOffsetSurface	= 23,
        ksDeformedSurface	= 24,
        ksNurbsSurface	= 25,
        ksCornerSurface	= 26,
        ksCoverSurface	= 27,
        ksCoonsPatchSurface	= 28,
        ksMeshSurface	= 29,
        ksLoftedSurface	= 30,
        ksSmoothSurface	= 31,
        ksChamferSurface	= 32,
        ksFilletSurface	= 33,
        ksChannelSurface	= 34,
        ksJoinSurface	= 35,
        ksCurveBoundedSurface	= 36,
        ksBendedUnbendedSurface	= 37,
        ksCylindricBendedSurface	= 38,
        ksCylindricUnbendedSurface	= 39,
        ksConicBendedSurface	= 40,
        ksConicUnbendedSurface	= 41,
        ksExplorationSurface	= 42,
        ksFreeSurface	= 200
    } 	ksMathSurface3DTypeEnum;

//-------------------------------------------------------------------------------
// _79_ ksLengthBuildingTypeEnum - Способ расчета длины продолжения сгиба листового тела
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("6DDCD794-FB39-4DD4-9947-1521A8749887") 
enum _ksLengthBuildingTypeEnum
    {
        ksLBDistance	= 0,
        ksLBToVertex	= 2,
        ksLBToSurface	= 3
    } 	ksLengthBuildingTypeEnum;

// -------------------------------------------------------------------------------
// _80_ ksPatternOrientationTypeEnum  - Способ ориентации экземпляров массива.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("33E9A976-6C70-4F87-B923-E5797EAE53E0") 
enum _ksPatternExemplarsOrientationTypeEnum
    {
        ksOrientationSave	= 0,
        ksOrientationByNormal	= 1,
        ksOrientationByObject	= 2
    } 	ksPatternExemplarsOrientationTypeEnum;

// -------------------------------------------------------------------------------
// _81_ ksModelDrawingElementsEnum - Возможные элементы отрисовки модели.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("E823B4A9-4225-419B-A63A-C88AA022ED98") 
enum _ksModelDrawingElementsEnum
    {
        ksModelDrawingElementNone	= 0,
        ksModelDrawingElementBackground	= 0x1,
        ksModelDrawingElementCompBodies	= 0x10,
        ksModelDrawingElementCompObjs	= 0x20,
        ksModelDrawingElementAuxObjs	= 0x100,
        ksModelDrawingElementNotifyLibs	= 0x200,
        ksModelDrawingElementEditor	= 0x1000,
        ksModelDrawingElementWidgets	= 0x2000,
        ksModelDrawingElementMeshCutter	= 0x4000,
        ksModelDrawingElementAll	= 0xffff
    } 	ksModelDrawingElementsEnum;

// -------------------------------------------------------------------------------
// _82_ ksMateConstraintDirectionAlignmentEnum  - Варианты выравнивания направлений для сопряжений.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("F6C3B1EA-EF49-4C4B-BEAA-01A75196B1E8") 
enum _ksMateConstraintAlignmentEnum
    {
        ksMCAlignmentOpposite	= -1,
        ksMCAlignmentClosest	= 0,
        ksMCAlignmentCooriented	= 1,
        ksMCAlignmentUnknown	= 2,
        ksMCAlignment_1	= 3,
        ksMCAlignment_2	= 4,
        ksMCAlignment_3	= 5,
        ksMCReverse_1	= 6,
        ksMCReverse_2	= 7,
        ksMCReverse_3	= 8
    } 	ksMateConstraintAlignmentEnum;

// -------------------------------------------------------------------------------
// _83_ ksMateFixedTypeEnum - Фиксация компонентов при создании сопряжения.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("59CCD417-B923-4A8D-8F4D-75ED60F754A6") 
enum _ksMateFixedTypeEnum
    {
        ksMFixedUnknown	= 0,
        ksMFixedPart1	= 1,
        ksMFixedPart2	= 2
    } 	ksMateFixedTypeEnum;

// -------------------------------------------------------------------------------
// _84_ ksMateTangentTypeEnum - Вид касания для сопряжения касание.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("030C6F06-9275-4DA2-AF6F-95AAF7A8676E") 
enum _ksMateTangentTypeEnum
    {
        ksMTangentUnknown	= 0,
        ksMTangentByPoint	= 1,
        ksMTangentByGeneratrixLine	= 2,
        ksMTangentByCircle	= 3
    } 	ksMateTangentTypeEnum;

// -------------------------------------------------------------------------------
// _85_ ksViewProjectionType - Тип проекции.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("32DC0A11-B588-407A-912D-01DC77B0DC01") 
enum _ksViewProjectionType
    {
        ksVPNone	= -1,
        ksVPNormalTo	= 0,
        ksVPFront	= 1,
        ksVPRear	= 2,
        ksVPUp	= 3,
        ksVPDown	= 4,
        ksVPLeft	= 5,
        ksVPRight	= 6,
        ksVPIsometric	= 7,
        ksVPDimetric	= 8,
        ksVPUnfold	= 9,
        ksVPUser	= 10
    } 	ksViewProjectionType;

// -------------------------------------------------------------------------------
// _86_ ksDepthTypeEnum - Способ определения глубины отверстия.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("BFB7D127-4BA0-4A23-89D4-3629B7F3D942") 
enum _ksDepthTypeEnum
    {
        ksDTValue	= 0,
        ksDTReachThrough	= 1,
        ksDTObject	= 2
    } 	ksDepthTypeEnum;

// -------------------------------------------------------------------------------
// _87_ ksEndFaceTypeEnum - Форма торца отверстия.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("9B2AA573-715A-4D3B-8EC8-2EFBC167E4CA") 
enum _ksEndFaceTypeEnum
    {
        ksEFFlat	= 0,
        ksEFConic	= 1,
        ksEFSphere	= 2
    } 	ksEndFaceTypeEnum;

// -------------------------------------------------------------------------------
// _88_ ksHoleTypeEnum - Тип отверстия.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("FF3963FB-A490-4FB5-BFBA-7458E0AEDAFC") 
enum _ksHoleTypeEnum
    {
        ksHTBase	= 0,
        ksHTCounterbore	= 1,
        ksHTCountersinking	= 2,
        ksHTCounterdrill	= 3,
        ksHTConic	= 4,
        ksHTLfrLibrary	= 5
    } 	ksHoleTypeEnum;

// -------------------------------------------------------------------------------
// _89_ ksCountersinkTypeEnum - Способ определения параметров зенковки.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("43DFDA67-3D34-43E1-8FC1-334F01D9A1A1") 
enum _ksCountersinkTypeEnum
    {
        ksCTDiameterAngle	= 0,
        ksCTDepthAngle	= 1,
        ksCTDiameterDepth	= 2
    } 	ksCountersinkTypeEnum;

// -------------------------------------------------------------------------------
// _90_ ksConicTypeEnum - Способ определения параметров конического отверстия.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0AE27BCB-2439-40BF-8E50-1D1128A1FCF1") 
enum _ksConicTypeEnum
    {
        ksCNDiameter	= 0,
        ksCNAngle	= 1
    } 	ksConicTypeEnum;

// -------------------------------------------------------------------------------
// _91_ ksViewProjectionScheme - схема ориентаций модели.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D2B67DAA-51F8-42A3-AC20-D2EE3CA0EB3E") 
enum _ksViewProjectionScheme
    {
        ksVPSUnknown	= -1,
        ksVPSUser	= 0,
        ksVPSZAxonometric	= 1,
        ksVPSYAxonometric	= 2,
        ksVPSXAxonometric	= 3,
        ksVPSZ90AxonometricISO	= 4,
        ksVPSY90AxonometricISO	= 5,
        ksVPSX90AxonometricISO	= 6
    } 	ksViewProjectionScheme;

// -------------------------------------------------------------------------------
// _92_ ksMateTangentTypeEnum - Вид касания для сопряжения касание.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("DC2E8F20-DE0A-4FF2-8BCD-FFEC78128093") 
enum _ksMateMotionTypeEnum
    {
        ksMMotionUnknown	= 0,
        ksMMotionLinear	= 1,
        ksMMotionRotation	= 2
    } 	ksMateMotionTypeEnum;

  //------------------------------------------------------------------------------
  // _93_ Управляющие разрешением на чтение или запись объектов в дополнительные форматы jgs, sat, xt, step, stl, VRML, JT
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("EC5196DF-2F6A-4DC5-A91A-9356BC19FF9C") 
enum _ksD3ConverterOptionsEnum
    {
        ksD3COBodyes	= 0,
        ksD3COSurfaces	= 2,
        ksD3COCurves	= 4,
        ksD3COSketches	= 6,
        ksD3COInvisibleObjects	= 8,
        ksD3COPoints	= 10,
        ksD3CODocumentProperties	= 12,
        ksD3COTechnicalDemand	= 14,
        ksD3CODimensions	= 16,
        ksD3COAttributes	= 18,
        ksD3CBRep	= 20,
        ksD3CPolygonal	= 22,
        ksD3CPolygonalLOD0	= 24,
        ksD3CAssociated	= 26,
        ksD3COStyle	= 28,
        ksD3CODensity	= 30,
        ksD3COValidationProperties	= 32
    } 	ksD3ConverterOptionsEnum;

  //------------------------------------------------------------------------------
  // _94_ Способы вычисления приращения параметра по объекту
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B6F13ECF-65BB-4885-A2B8-14F405BEEC4A") 
enum _ksStepTypeEnum
    {
        ksSpaceStep	= 0x1,
        ksDeviationStep	= 0x2,
        ksMetricStep	= 0x4,
        ksParamStep	= 0x8,
        ksCollisionStep	= 0x10,
        ksMipStep	= 0x20
    } 	ksStepTypeEnum;

  //------------------------------------------------------------------------------
  // _95_ Пердставление текста при экспорте
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D7290676-1166-4CC2-A38A-7962B859A4D5") 
enum _ksTextExportFormEnum
    {
        ksTEFTextOnly	= 0,
        ksTEFGeometryOnly	= 1
    } 	ksTextExportFormEnum;

  //------------------------------------------------------------------------------
  // _96_ Состояние объекта
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("81E091C5-CC72-4C3F-BA3A-BD0B3697BD3F") 
enum _ksFeatureStateEnum
    {
        ksFSNone	= 0,
        ksFSLocked	= 0x1,
        ksFSRebuild	= 0x2,
        ksFSInside3dMacro	= 0x4,
        ksFSLCSDependent	= 0x8,
        ksFSComprisedOfParts	= 0x10,
        ksFSCurrent	= 0x20,
        ksFSReadOnlyAccessM3d	= 0x40,
        ksFSDetailedFold	= 0x80,
        ksFSSketchUndefined	= 0x100,
        ksFSSketchDefined	= 0x200,
        ksFSSketchRedefined	= 0x400,
        ksFSEditRestricted	= 0x800,
        ksFSEditImpossible	= 0x1000,
        ksFSFixedComponent	= 0x2000,
        ksFSPutInRecalcState	= 0x4000,
        ksFSReadOnlyAccessA3d	= 0x8000,
        ksFSUncuttable	= 0x10000,
        ksFSUpdateNeeded	= 0x100000,
        ksFSBrokenLink	= 0x200000
    } 	ksFeatureStateEnum;

  //------------------------------------------------------------------------------
  // _97_ Типы построения фаски
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("31F69A56-1AB8-48D0-9C0B-B53E812CBCA9") 
enum _ksChamferBuildingTypeEnum
    {
        ksChamferSideAngle	= 0,
        ksChamferTwoSides	= 1
    } 	ksChamferBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _98_ Типы построения скругления
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("0DC92500-2970-41FD-880A-9177C386FF10") 
enum _ksFilletBuildingTypeEnum
    {
        ksFilletCircleArc	= 0,
        ksFilletEllipseArc	= 1,
        ksFilletCoefficient	= 2,
        ksFilletHord	= 3
    } 	ksFilletBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _99_ Способ расчета смещения для точек останова скругления.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("BB305274-2FDE-463E-B91F-6EF616FE1651") 
enum _ksFilletOffsetModeEnum
    {
        ksFilletOffsetByPersent	= 0,
        ksFilletOffsetByLength	= 1,
        ksFilletOffsetByAngle	= 2
    } 	ksFilletOffsetModeEnum;

  //------------------------------------------------------------------------------
  // _100_ Положение ребра жесткости.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("F60E2FB3-97EA-4FD7-8DA4-2E93B5236D68") 
enum _ksRibSideEnum
    {
        ksRibSideLeft	= 0,
        ksRibSideRight	= 1,
        ksRibSideUp	= 2,
        ksRibSideDown	= 3
    } 	ksRibSideEnum;

  //------------------------------------------------------------------------------
  // _101_ Результат операции.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("C39F4719-365E-4B1E-B45D-A13FD26183EA") 
enum _ksOperationResultEnum
    {
        ksOperationUnion	= 0,
        ksOperationNewBody	= 1,
        ksOperationCut	= 2,
        ksOperationIntersect	= 3
    } 	ksOperationResultEnum;

  //------------------------------------------------------------------------------
  // _102_ Способы построения элемента по сечениям у крайних сечений.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("9FC95047-D47F-4579-B41C-17C0BCF5F813") 
enum _ksLoftBuildingType
    {
        ksLoftAuto	= 0,
        ksLoftByNormal	= 1,
        ksLoftByObject	= 2,
        ksLoftCupola	= 3
    } 	ksLoftBuildingType;

  //------------------------------------------------------------------------------
  // _103_ Тип движения сечения в кинематической операции.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D0267DAC-C757-4641-A101-1210CF0681D6") 
enum _ksEvolutionShiftSketchTypeEnum
    {
        ksEvShiftParallel	= 0,
        ksEvShiftKeepAngle	= 1,
        ksEvShiftOrtogonal	= 2
    } 	ksEvolutionShiftSketchTypeEnum;

  //------------------------------------------------------------------------------
  // _104_ Способы построения сгиба по эскизу.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("772AC2D4-B0CF-4E63-8774-615A3A3BDF7A") 
enum _ksSketchBendBuildingTypeEnum
    {
        ksSBFromSketch	= 1,
        ksSBSomeEdges	= 2
    } 	ksSketchBendBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _105_ Тип замыкания операции сгиб по эскизу листового тела.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("EE4AEF43-16FF-4034-AB39-F2FF5C2AA5D8") 
enum _ksClosingTypeEnum
    {
        ksClosingAngles	= 0,
        ksClosingBegin	= 1,
        ksClosingEnd	= 2
    } 	ksClosingTypeEnum;

  //------------------------------------------------------------------------------
  // _106_ Обработка угла при замыкании.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("6D4B4057-3935-4362-928E-19A4550DCF02") 
enum _ksClosingCorneringEnum
    {
        ksCorneringNone	= 0,
        ksCorneringJointOnBorder	= 1,
        ksCorneringJointOnChord	= 2,
        ksCorneringCircled	= 3
    } 	ksClosingCorneringEnum;

  //------------------------------------------------------------------------------
  // _107_ Место отверстия при круговой обработке угла.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("677EA6F7-190F-4707-8217-E035FF4C4A96") 
enum _ksClosingHolePlacementEnum
    {
        ksCorneringHPBend	= 0,
        ksCorneringHPAngle	= 1,
        ksCorneringHPPoint	= 2
    } 	ksClosingHolePlacementEnum;

  //------------------------------------------------------------------------------
  // _108_ Способ замыкании углов листового тела.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("28A5A5BE-FDBA-4B86-8D19-0077DE3CF0FC") 
enum _ksClosingClosedTypeEnum
    {
        ksClosingCJoint	= 0,
        ksClosingCOver	= 1,
        ksClosingCTightClosure	= 2
    } 	ksClosingClosedTypeEnum;

  //------------------------------------------------------------------------------
  // _109_ Способ задания размера.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("823EAAA2-E7F5-417F-BE69-12DDE9141B87") 
enum _ksUndercutDistanceTypeEnum
    {
        ksUCDictanceOut	= 0,
        ksUCDictanceIn	= 1,
        ksUCDictanceAll	= 2
    } 	ksUndercutDistanceTypeEnum;

  //------------------------------------------------------------------------------
  // _110_ Способ создания сечения.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("033435E2-87FA-4483-AE4A-7BD977B1E3E7") 
enum _ksCutBuildingTypeEnum
    {
        ksCutByContour	= 0,
        ksCutByPlane	= 1
    } 	ksCutBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _111_ Тип. Способ обработки концов буртика.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B590B16E-DE83-43F6-ABE1-EDE4DE0D61A9") 
enum _ksShoulderTypeEnum
    {
        ksShoulderClosed	= 0,
        ksShoulderOpened	= 1,
        ksShoulderChopped	= 2
    } 	ksShoulderTypeEnum;

  //------------------------------------------------------------------------------
  // _112_ Форма сечения буртика.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("9789BC5E-E06C-4032-82B6-939013559214") 
enum _ksShoulderCutingTypeEnum
    {
        ksShoulderCutingCircle	= 0,
        ksShoulderCutingU	= 1,
        ksShoulderCutingV	= 2
    } 	ksShoulderCutingTypeEnum;

  //------------------------------------------------------------------------------
  // _113_ Способ построения буртика.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D013E417-0F60-4B46-85C6-83673CFB838F") 
enum _ksShoulderBuildingTypeEnum
    {
        ksShoulderUnknown	= 0,
        ksShoulderWidth1	= 0x1,
        ksShoulderHeight	= 0x2,
        ksShoulderAngle	= 0x4,
        ksShoulderWidth2	= 0x8,
        ksShoulderRadius2	= 0x10,
        ksShoulderWidth1Off	= -0x1,
        ksShoulderHeightOff	= -0x2,
        ksShoulderAngleOff	= -0x4,
        ksShoulderWidth2Off	= -0x8,
        ksShoulderRadius2Off	= -0x10,
        ksShoulderCircleByHeightWidth1	= ( ksShoulderHeight | ksShoulderWidth1 ) ,
        ksShoulderCircleByHeightRadius2	= ( ksShoulderHeight | ksShoulderRadius2 ) ,
        ksShoulderCircleByRadiusWidth1	= ( ksShoulderRadius2 | ksShoulderWidth1 ) ,
        ksShoulderUByHeighAngleWidth1	= ( ( ksShoulderHeight | ksShoulderAngle )  | ksShoulderWidth1 ) ,
        ksShoulderUByHeighAngleWidthRadius2	= ( ( ( ksShoulderHeight | ksShoulderAngle )  | ksShoulderWidth1 )  | ksShoulderRadius2 ) ,
        ksShoulderUByHeighWidth1Width2	= ( ( ksShoulderHeight | ksShoulderWidth1 )  | ksShoulderWidth2 ) ,
        ksShoulderUByHeighWidth1Width2Radius2	= ( ( ( ksShoulderHeight | ksShoulderWidth1 )  | ksShoulderWidth2 )  | ksShoulderRadius2 ) ,
        ksShoulderUByAngleWidth1Width2	= ( ( ksShoulderAngle | ksShoulderWidth1 )  | ksShoulderWidth2 ) ,
        ksShoulderUByAngleWidth1Width2Radius2	= ( ( ( ksShoulderAngle | ksShoulderWidth1 )  | ksShoulderWidth2 )  | ksShoulderRadius2 ) ,
        ksShoulderUByHeighAngleWidth2	= ( ( ksShoulderHeight | ksShoulderAngle )  | ksShoulderWidth2 ) ,
        ksShoulderUByHeighAngleWidth2Radius2	= ( ( ( ksShoulderHeight | ksShoulderAngle )  | ksShoulderWidth2 )  | ksShoulderRadius2 ) ,
        ksShoulderVByHeighAngleWidth1	= ( ( ksShoulderHeight | ksShoulderAngle )  | ksShoulderWidth1 ) ,
        ksShoulderVByHeighAngleRadius2	= ( ( ksShoulderHeight | ksShoulderAngle )  | ksShoulderRadius2 ) ,
        ksShoulderVByRadius2AngleWidth1	= ( ( ksShoulderRadius2 | ksShoulderAngle )  | ksShoulderWidth1 ) ,
        ksShoulderVByHeighRadius2Width1	= ( ( ksShoulderHeight | ksShoulderRadius2 )  | ksShoulderWidth1 ) 
    } 	ksShoulderBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _114_ Способ построения жалюзей.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("412D4BCB-E96D-4C2C-A359-50B082454BF0") 
enum _ksJalousieBuildingTypeEnum
    {
        ksJalousieExtract	= 0,
        ksJalousieTrim	= 1
    } 	ksJalousieBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _115_ Форма торца жалюзей.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("88997B3A-E08D-41B4-A0D0-B6D7ABF05055") 
enum _ksJalousieFormEndEnum
    {
        ksJalousieTangent	= 0,
        ksJalousieNormal	= 1
    } 	ksJalousieFormEndEnum;

  //------------------------------------------------------------------------------
  // _116_ Способ задания высоты жалюзей.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("A3F48F08-F4F8-4FBA-B3AE-60D55B5E8B2D") 
enum _ksJalousieHeightTypeEnum
    {
        ksJalousieAllHeight	= 0,
        ksJalousieUpToFaceHeight	= 1,
        ksJalousieSlotHeight	= 2
    } 	ksJalousieHeightTypeEnum;

  //------------------------------------------------------------------------------
  // _117_ Способ задания высоты штамповки.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("2AD08CBA-199A-422D-ABC4-53833523FBAF") 
enum _ksPressFormingHeightTypeEnum
    {
        ksPressFormingAllHeight	= 0,
        ksPressFormingOutHeight	= 1,
        ksPressFormingInHeight	= 2
    } 	ksPressFormingHeightTypeEnum;

// -------------------------------------------------------------------------------
// _118_ ksSplineTransitionTypeEnum - Способ создания сопряжения в заданной вершине сплайна.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D22F23AC-096F-43A4-9413-9AB18AFC72AB") 
enum _ksSplineTransitionTypeEnum
    {
        ksSTTNone	= 0,
        ksSTTByParam	= 1,
        ksSTTConstraint	= 2
    } 	ksSplineTransitionTypeEnum;

// -------------------------------------------------------------------------------
// _119_ ksTransitionVectorIndexEnum - Индекс вектора в точке сопряжения.
// ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B0F7300A-62A2-4267-9C09-E2B6CBEF7005") 
enum _ksTransitionVectorIndexEnum
    {
        ksTVTangent	= 0,
        ksTVNormal	= 1,
        ksTVBNormal	= 2
    } 	ksTransitionVectorIndexEnum;

  //------------------------------------------------------------------------------
  // _120_ Способ построения ребра усиления.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("F9734E68-162F-4720-97B1-FBC9D1064198") 
enum _ksSHRibBuildingTypeEnum
    {
        ksSHRibBuildingHeightAngle	= 0,
        ksSHRibBuildingTwoHeights	= 1,
        ksSHRibBuildingDepthAngle	= 2
    } 	ksSHRibBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _121_ Форма сечения ребра усиления.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("CA1C3C6F-638F-4260-AFCA-C31117C34F0F") 
enum _ksSHRibCutingTypeEnum
    {
        ksSHRibCuttingV	= 0,
        ksSHRibCuttingU	= 1
    } 	ksSHRibCutingTypeEnum;

  //------------------------------------------------------------------------------
  // _122_ Типы смещений зазора
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("26A7DB16-3120-4B95-8CAF-87650AB6D857") 
enum _ksOffsetGapType
    {
        ksOGParametrU	= 0,
        ksOGLength	= 1,
        ksOGDraftPosition	= 2
    } 	ksOffsetGapType;

  //------------------------------------------------------------------------------
  // _123_ Типы кромки оснований
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("1AA6FA52-76EC-4519-A8DA-7E687D56425A") 
enum _ksRuledBorderEnum
    {
        ksRuledBodder1	= 0,
        ksRuledBodder2	= 1
    } 	ksRuledBorderEnum;

  //------------------------------------------------------------------------------
  // _124_ Типы кромки стыка
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4E98A0D5-817A-49AB-B6F5-C80AC85F0BC3") 
enum _ksRuledJointEnum
    {
        ksRuledJoint1	= 0,
        ksRuledJoint2	= 1
    } 	ksRuledJointEnum;

  //------------------------------------------------------------------------------
  // _125_ Способ сегментации эскиза
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("81478BA5-5AE3-455B-A959-C276D3B05843") 
enum _ksSegmentationMethodEnum
    {
        ksSmQuantity	= 0,
        ksSmLength	= 1,
        ksSmAngle	= 2,
        ksSmHeight	= 3
    } 	ksSegmentationMethodEnum;

  //------------------------------------------------------------------------------
  // _126_  Способ создания зоны
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("3E611D7F-B138-4DA2-822B-A5AFA79E55D2") 
enum _ksZoneTypeEnum
    {
        ksZoneFree	= 0,
        ksZoneByPoints	= 1,
        ksZoneByObjects	= 2
    } 	ksZoneTypeEnum;

  //------------------------------------------------------------------------------
  // _127_  Способ разбиения зоны
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4BD167B9-3A15-4D4B-9848-FA1EB388DEDE") 
enum _ksZoneDivisionTypeEnum
    {
        ksZoneDivisionRegular	= 0,
        ksZoneDivisionByPlanes	= 1
    } 	ksZoneDivisionTypeEnum;

  //------------------------------------------------------------------------------
  // _128_ Способ задания габаритов.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("82264A76-1868-4B95-8CFE-7DAD0C325EB6") 
enum _ksGabaritBuildingTypeEnum
    {
        ksGabaritByBorderPoints	= 0,
        ksGabaritByCenterAndBorder	= 1
    } 	ksGabaritBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _129_ Способ создания шага сечения модели.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("D5B9827D-63DD-4F38-8AFE-7AD3A846F16A") 
enum _ksDynamicCrossSectionStepBuildingTypeEnum
    {
        ksDCSTUnknown	= -1,
        ksDCSTByFreePlane	= 0,
        ksDCSTByOffsetPlane	= 1,
        ksDCSTByRotatedPlane	= 2,
        ksDCSTByZone	= 3,
        ksDCSTByBorderPoints	= 4
    } 	ksDynamicCrossSectionStepBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _130_ Способ построения секущей плоскости для шага динамического сечения.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("C0FF27CE-D814-4F09-AA47-868229431F99") 
enum _ksCrossSectionPlaneBuildingTypeEnum
    {
        ksCrossSectionPlaneByModelPlane	= 0,
        ksCrossSectionPlaneByOtherStep	= 1
    } 	ksCrossSectionPlaneBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _131_ Способ выражения глубины прогиба.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("082949CB-4400-4F3B-91C8-FD6F3D3EDA5F") 
enum _ksArchMeasureEnum
    {
        ksArchMeasureByCoefficient	= 0,
        ksArchMeasureByLength	= 1
    } 	ksArchMeasureEnum;

  //------------------------------------------------------------------------------
  // _132_  Способ разбиения зоны
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("307FE013-1A93-48C7-B883-5B223091BD7E") 
enum _ksManipulatorTypeEnum
    {
        ksPlacement3DManipulator	= 1,
        ksEditDoubleManipulator	= 2
    } 	ksManipulatorTypeEnum;

  //------------------------------------------------------------------------------
  // _133_  Тип примитива манипулятора
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("7CAF9EA8-7188-431B-8011-4780C2532068") 
enum _ksManipulatorPrimitiveEnum
    {
        ksMPNone	= 0,
        ksMPAxisX	= 1,
        ksMPAxisY	= 2,
        ksMPAxisZ	= 3,
        ksMPPlaceXOY	= 4,
        ksMPPlaceXOZ	= 5,
        ksMPPlaceYOZ	= 6,
        ksMPConturXY	= 7,
        ksMPConturXZ	= 8,
        ksMPConturYZ	= 9,
        ksMPTextX	= 10,
        ksMPTextY	= 11,
        ksMPTextZ	= 12,
        ksMPOriginal	= 13
    } 	ksManipulatorPrimitiveEnum;

  //------------------------------------------------------------------------------
  // _134_  Режимы работы манипулятора
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("24BAA9A3-A463-40F0-876C-C6BA7B34A1E2") 
enum _ksManipulatorModeEnum
    {
        ksManipulatorModeDefault	= 1,
        ksManipulatorModeNotHandleEditor	= 2
    } 	ksManipulatorModeEnum;

  //------------------------------------------------------------------------------
  // _135_ Режим использования прямоугольной рамки для выделения объектов.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("FE41D7B0-8FB2-44E3-B494-2D5A550377BF") 
enum _ksSelectionBandMode
    {
        ksSelectionNoBand	= 0,
        ksSelectionWhenNoNearestObject	= 2
    } 	ksSelectionBandMode;

  //------------------------------------------------------------------------------
  // _136_ Тип объектов для фильтрации в процессе.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("9552DFF3-0F6D-4015-BA59-A6EB054A9998") 
enum _ksProcessObjectsFilter3DEnum
    {
        ksProcessFilterBodies	= 0,
        ksProcessFilterSurfaces	= 1,
        ksProcessFilterObjects	= 2,
        ksProcessFilterOperations	= 3,
        ksProcessFilterParts	= 4,
        ksProcessFilterExcludeExternalObjects	= 1000
    } 	ksProcessObjectsFilter3DEnum;

  //------------------------------------------------------------------------------
  // _137_ Способ построения операции копия геометрии.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("AD3C90CF-0FF3-473A-B379-3B2090609C6C") 
enum _ksCopyGeometryBuildingTypeEnum
    {
        ksCGBTWithoutGrouping	= 0,
        ksCGBTBodyFaceGrouping	= 1
    } 	ksCopyGeometryBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _138_ Тип разнотолщинной группы.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("609FE1D8-B246-4C57-8C41-3641D912D0D1") 
enum _ksMultiThicknessGroupTypeEnum
    {
        ksArbitraryThicknesses	= 0,
        ksSetsThicknesses	= 1
    } 	ksMultiThicknessGroupTypeEnum;

  //------------------------------------------------------------------------------
  // _139_ Тип текстуры.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("8983E2CD-CF41-4CA3-B56E-73973C7CDEA6") 
enum _ksTextureTypeEnum
    {
        ksBaseProperties	= -1,
        ksTexture	= 0,
        ksRelief	= 1,
        ksCutting	= 2
    } 	ksTextureTypeEnum;

  //------------------------------------------------------------------------------
  // _140_ Способ построения для штамповки телом. Инструмент.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("FCC908CA-0CDD-456E-9956-698ECF678AE5") 
enum _ksSheetMetalPunchBuildingTypeEnum
    {
        ksSheetMetalPunch	= 0,
        ksSheetMetalMatrix	= 1
    } 	ksSheetMetalPunchBuildingTypeEnum;

  //------------------------------------------------------------------------------
  // _141_ Способ задания толщины для штамповки телом.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("B1C9FD06-0A44-4471-8054-5CE526427464") 
enum _ksSheetMetalPunchThicknessTypeEnum
    {
        ksSheetMetalPunchHeightByBody	= 0,
        ksSheetMetalPunchHeightByValue	= 1
    } 	ksSheetMetalPunchThicknessTypeEnum;

  //------------------------------------------------------------------------------
  // _142_ Способ масштабирования.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("E76AA4E4-9D8B-4753-9380-95D873A517DF") 
enum _ksScalingTypeEnum
    {
        ksScalingByCoefficient	= 0,
        ksScalingByAxis	= 1
    } 	ksScalingTypeEnum;

  //------------------------------------------------------------------------------
  // _143_ Версия оптимизации.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("6D143099-35B5-46D9-9BB4-E8DA0442323D") 
enum _ksEvolutionVersionEnum
    {
        ksEvolutionVersion1	= 1,
        ksEvolutionVersion2	= 2
    } 	ksEvolutionVersionEnum;

  //------------------------------------------------------------------------------
  // _144_ Размещение технических требований.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("4EEC274E-D38E-4EA3-96AD-88C9EB9EB728") 
enum _ksTechnicalDemand3DPlacementEnum
    {
        ksTdPTopRight	= 0,
        ksTdPBottomRight	= 1
    } 	ksTechnicalDemand3DPlacementEnum;

  //------------------------------------------------------------------------------
  // _145_ Версия оптимизации.
  // ---
typedef /* [v1_enum][helpcontext][helpstring][uuid] */  DECLSPEC_UUID("C28688FD-FBEF-4787-9330-4C7015BDA323") 
enum _ksSketchEdgesTypeEnum
    {
        ksSketchEdgesFromCurves2D	= 1,
        ksSketchEdgesFromFaces	= 2
    } 	ksSketchEdgesTypeEnum;


DEFINE_GUID(LIBID_Kompas6Constants3D,0x2CAF168C,0x7961,0x4b90,0x9D,0xA2,0x70,0x14,0x19,0xBE,0xEF,0xE3);
#endif /* __Kompas6Constants3D_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


