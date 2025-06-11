

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for D:/shared/workspace/KOMPAS/_RELEASES/releases-v21-x86/KOMPAS/Source/API/API5_3D/libInterfaces3D.odl:
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


#ifndef __kAPI3D5COM_h__
#define __kAPI3D5COM_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDocument3D_FWD_DEFINED__
#define __IDocument3D_FWD_DEFINED__
typedef interface IDocument3D IDocument3D;

#endif 	/* __IDocument3D_FWD_DEFINED__ */


#ifndef __IPart_FWD_DEFINED__
#define __IPart_FWD_DEFINED__
typedef interface IPart IPart;

#endif 	/* __IPart_FWD_DEFINED__ */


#ifndef __IEntity_FWD_DEFINED__
#define __IEntity_FWD_DEFINED__
typedef interface IEntity IEntity;

#endif 	/* __IEntity_FWD_DEFINED__ */


#ifndef __IColorParam_FWD_DEFINED__
#define __IColorParam_FWD_DEFINED__
typedef interface IColorParam IColorParam;

#endif 	/* __IColorParam_FWD_DEFINED__ */


#ifndef __ISpecification3D_FWD_DEFINED__
#define __ISpecification3D_FWD_DEFINED__
typedef interface ISpecification3D ISpecification3D;

#endif 	/* __ISpecification3D_FWD_DEFINED__ */


#ifndef __IPlacement_FWD_DEFINED__
#define __IPlacement_FWD_DEFINED__
typedef interface IPlacement IPlacement;

#endif 	/* __IPlacement_FWD_DEFINED__ */


#ifndef __IRequestInfo_FWD_DEFINED__
#define __IRequestInfo_FWD_DEFINED__
typedef interface IRequestInfo IRequestInfo;

#endif 	/* __IRequestInfo_FWD_DEFINED__ */


#ifndef __IMateConstraint_FWD_DEFINED__
#define __IMateConstraint_FWD_DEFINED__
typedef interface IMateConstraint IMateConstraint;

#endif 	/* __IMateConstraint_FWD_DEFINED__ */


#ifndef __IAdditionFormatParam_FWD_DEFINED__
#define __IAdditionFormatParam_FWD_DEFINED__
typedef interface IAdditionFormatParam IAdditionFormatParam;

#endif 	/* __IAdditionFormatParam_FWD_DEFINED__ */


#ifndef __ISelectionMng_FWD_DEFINED__
#define __ISelectionMng_FWD_DEFINED__
typedef interface ISelectionMng ISelectionMng;

#endif 	/* __ISelectionMng_FWD_DEFINED__ */


#ifndef __IChooseMng_FWD_DEFINED__
#define __IChooseMng_FWD_DEFINED__
typedef interface IChooseMng IChooseMng;

#endif 	/* __IChooseMng_FWD_DEFINED__ */


#ifndef __IFeature_FWD_DEFINED__
#define __IFeature_FWD_DEFINED__
typedef interface IFeature IFeature;

#endif 	/* __IFeature_FWD_DEFINED__ */


#ifndef __IViewProjection_FWD_DEFINED__
#define __IViewProjection_FWD_DEFINED__
typedef interface IViewProjection IViewProjection;

#endif 	/* __IViewProjection_FWD_DEFINED__ */


#ifndef __IVariable_FWD_DEFINED__
#define __IVariable_FWD_DEFINED__
typedef interface IVariable IVariable;

#endif 	/* __IVariable_FWD_DEFINED__ */


#ifndef __IModelLibrary_FWD_DEFINED__
#define __IModelLibrary_FWD_DEFINED__
typedef interface IModelLibrary IModelLibrary;

#endif 	/* __IModelLibrary_FWD_DEFINED__ */


#ifndef __IThinParam_FWD_DEFINED__
#define __IThinParam_FWD_DEFINED__
typedef interface IThinParam IThinParam;

#endif 	/* __IThinParam_FWD_DEFINED__ */


#ifndef __IExtrusionParam_FWD_DEFINED__
#define __IExtrusionParam_FWD_DEFINED__
typedef interface IExtrusionParam IExtrusionParam;

#endif 	/* __IExtrusionParam_FWD_DEFINED__ */


#ifndef __IRotatedParam_FWD_DEFINED__
#define __IRotatedParam_FWD_DEFINED__
typedef interface IRotatedParam IRotatedParam;

#endif 	/* __IRotatedParam_FWD_DEFINED__ */


#ifndef __IAttribute3D_FWD_DEFINED__
#define __IAttribute3D_FWD_DEFINED__
typedef interface IAttribute3D IAttribute3D;

#endif 	/* __IAttribute3D_FWD_DEFINED__ */


#ifndef __IComponentPositioner_FWD_DEFINED__
#define __IComponentPositioner_FWD_DEFINED__
typedef interface IComponentPositioner IComponentPositioner;

#endif 	/* __IComponentPositioner_FWD_DEFINED__ */


#ifndef __IObjectsFilter3D_FWD_DEFINED__
#define __IObjectsFilter3D_FWD_DEFINED__
typedef interface IObjectsFilter3D IObjectsFilter3D;

#endif 	/* __IObjectsFilter3D_FWD_DEFINED__ */


#ifndef __IChooseBodies_FWD_DEFINED__
#define __IChooseBodies_FWD_DEFINED__
typedef interface IChooseBodies IChooseBodies;

#endif 	/* __IChooseBodies_FWD_DEFINED__ */


#ifndef __IChooseParts_FWD_DEFINED__
#define __IChooseParts_FWD_DEFINED__
typedef interface IChooseParts IChooseParts;

#endif 	/* __IChooseParts_FWD_DEFINED__ */


#ifndef __IFaceDefinition_FWD_DEFINED__
#define __IFaceDefinition_FWD_DEFINED__
typedef interface IFaceDefinition IFaceDefinition;

#endif 	/* __IFaceDefinition_FWD_DEFINED__ */


#ifndef __IEdgeDefinition_FWD_DEFINED__
#define __IEdgeDefinition_FWD_DEFINED__
typedef interface IEdgeDefinition IEdgeDefinition;

#endif 	/* __IEdgeDefinition_FWD_DEFINED__ */


#ifndef __IVertexDefinition_FWD_DEFINED__
#define __IVertexDefinition_FWD_DEFINED__
typedef interface IVertexDefinition IVertexDefinition;

#endif 	/* __IVertexDefinition_FWD_DEFINED__ */


#ifndef __ISketchDefinition_FWD_DEFINED__
#define __ISketchDefinition_FWD_DEFINED__
typedef interface ISketchDefinition ISketchDefinition;

#endif 	/* __ISketchDefinition_FWD_DEFINED__ */


#ifndef __IThreadDefinition_FWD_DEFINED__
#define __IThreadDefinition_FWD_DEFINED__
typedef interface IThreadDefinition IThreadDefinition;

#endif 	/* __IThreadDefinition_FWD_DEFINED__ */


#ifndef __IAxis2PointsDefinition_FWD_DEFINED__
#define __IAxis2PointsDefinition_FWD_DEFINED__
typedef interface IAxis2PointsDefinition IAxis2PointsDefinition;

#endif 	/* __IAxis2PointsDefinition_FWD_DEFINED__ */


#ifndef __IAxis2PlanesDefinition_FWD_DEFINED__
#define __IAxis2PlanesDefinition_FWD_DEFINED__
typedef interface IAxis2PlanesDefinition IAxis2PlanesDefinition;

#endif 	/* __IAxis2PlanesDefinition_FWD_DEFINED__ */


#ifndef __IAxisOperationsDefinition_FWD_DEFINED__
#define __IAxisOperationsDefinition_FWD_DEFINED__
typedef interface IAxisOperationsDefinition IAxisOperationsDefinition;

#endif 	/* __IAxisOperationsDefinition_FWD_DEFINED__ */


#ifndef __IAxisEdgeDefinition_FWD_DEFINED__
#define __IAxisEdgeDefinition_FWD_DEFINED__
typedef interface IAxisEdgeDefinition IAxisEdgeDefinition;

#endif 	/* __IAxisEdgeDefinition_FWD_DEFINED__ */


#ifndef __IPlaneOffsetDefinition_FWD_DEFINED__
#define __IPlaneOffsetDefinition_FWD_DEFINED__
typedef interface IPlaneOffsetDefinition IPlaneOffsetDefinition;

#endif 	/* __IPlaneOffsetDefinition_FWD_DEFINED__ */


#ifndef __IPlane3PointsDefinition_FWD_DEFINED__
#define __IPlane3PointsDefinition_FWD_DEFINED__
typedef interface IPlane3PointsDefinition IPlane3PointsDefinition;

#endif 	/* __IPlane3PointsDefinition_FWD_DEFINED__ */


#ifndef __IPlaneAngleDefinition_FWD_DEFINED__
#define __IPlaneAngleDefinition_FWD_DEFINED__
typedef interface IPlaneAngleDefinition IPlaneAngleDefinition;

#endif 	/* __IPlaneAngleDefinition_FWD_DEFINED__ */


#ifndef __IPlaneEdgePointDefinition_FWD_DEFINED__
#define __IPlaneEdgePointDefinition_FWD_DEFINED__
typedef interface IPlaneEdgePointDefinition IPlaneEdgePointDefinition;

#endif 	/* __IPlaneEdgePointDefinition_FWD_DEFINED__ */


#ifndef __IPlaneParallelDefinition_FWD_DEFINED__
#define __IPlaneParallelDefinition_FWD_DEFINED__
typedef interface IPlaneParallelDefinition IPlaneParallelDefinition;

#endif 	/* __IPlaneParallelDefinition_FWD_DEFINED__ */


#ifndef __IPlanePerpendicularDefinition_FWD_DEFINED__
#define __IPlanePerpendicularDefinition_FWD_DEFINED__
typedef interface IPlanePerpendicularDefinition IPlanePerpendicularDefinition;

#endif 	/* __IPlanePerpendicularDefinition_FWD_DEFINED__ */


#ifndef __IPlaneNormalToSurfaceDefinition_FWD_DEFINED__
#define __IPlaneNormalToSurfaceDefinition_FWD_DEFINED__
typedef interface IPlaneNormalToSurfaceDefinition IPlaneNormalToSurfaceDefinition;

#endif 	/* __IPlaneNormalToSurfaceDefinition_FWD_DEFINED__ */


#ifndef __IPlaneTangentToSurfaceDefinition_FWD_DEFINED__
#define __IPlaneTangentToSurfaceDefinition_FWD_DEFINED__
typedef interface IPlaneTangentToSurfaceDefinition IPlaneTangentToSurfaceDefinition;

#endif 	/* __IPlaneTangentToSurfaceDefinition_FWD_DEFINED__ */


#ifndef __IPlaneLineToEdgeDefinition_FWD_DEFINED__
#define __IPlaneLineToEdgeDefinition_FWD_DEFINED__
typedef interface IPlaneLineToEdgeDefinition IPlaneLineToEdgeDefinition;

#endif 	/* __IPlaneLineToEdgeDefinition_FWD_DEFINED__ */


#ifndef __IPlaneLineToPlaneDefinition_FWD_DEFINED__
#define __IPlaneLineToPlaneDefinition_FWD_DEFINED__
typedef interface IPlaneLineToPlaneDefinition IPlaneLineToPlaneDefinition;

#endif 	/* __IPlaneLineToPlaneDefinition_FWD_DEFINED__ */


#ifndef __IBaseExtrusionDefinition_FWD_DEFINED__
#define __IBaseExtrusionDefinition_FWD_DEFINED__
typedef interface IBaseExtrusionDefinition IBaseExtrusionDefinition;

#endif 	/* __IBaseExtrusionDefinition_FWD_DEFINED__ */


#ifndef __IBossExtrusionDefinition_FWD_DEFINED__
#define __IBossExtrusionDefinition_FWD_DEFINED__
typedef interface IBossExtrusionDefinition IBossExtrusionDefinition;

#endif 	/* __IBossExtrusionDefinition_FWD_DEFINED__ */


#ifndef __ICutExtrusionDefinition_FWD_DEFINED__
#define __ICutExtrusionDefinition_FWD_DEFINED__
typedef interface ICutExtrusionDefinition ICutExtrusionDefinition;

#endif 	/* __ICutExtrusionDefinition_FWD_DEFINED__ */


#ifndef __IBaseRotatedDefinition_FWD_DEFINED__
#define __IBaseRotatedDefinition_FWD_DEFINED__
typedef interface IBaseRotatedDefinition IBaseRotatedDefinition;

#endif 	/* __IBaseRotatedDefinition_FWD_DEFINED__ */


#ifndef __IBossRotatedDefinition_FWD_DEFINED__
#define __IBossRotatedDefinition_FWD_DEFINED__
typedef interface IBossRotatedDefinition IBossRotatedDefinition;

#endif 	/* __IBossRotatedDefinition_FWD_DEFINED__ */


#ifndef __ICutRotatedDefinition_FWD_DEFINED__
#define __ICutRotatedDefinition_FWD_DEFINED__
typedef interface ICutRotatedDefinition ICutRotatedDefinition;

#endif 	/* __ICutRotatedDefinition_FWD_DEFINED__ */


#ifndef __IBaseLoftDefinition_FWD_DEFINED__
#define __IBaseLoftDefinition_FWD_DEFINED__
typedef interface IBaseLoftDefinition IBaseLoftDefinition;

#endif 	/* __IBaseLoftDefinition_FWD_DEFINED__ */


#ifndef __IBossLoftDefinition_FWD_DEFINED__
#define __IBossLoftDefinition_FWD_DEFINED__
typedef interface IBossLoftDefinition IBossLoftDefinition;

#endif 	/* __IBossLoftDefinition_FWD_DEFINED__ */


#ifndef __ICutLoftDefinition_FWD_DEFINED__
#define __ICutLoftDefinition_FWD_DEFINED__
typedef interface ICutLoftDefinition ICutLoftDefinition;

#endif 	/* __ICutLoftDefinition_FWD_DEFINED__ */


#ifndef __IBaseEvolutionDefinition_FWD_DEFINED__
#define __IBaseEvolutionDefinition_FWD_DEFINED__
typedef interface IBaseEvolutionDefinition IBaseEvolutionDefinition;

#endif 	/* __IBaseEvolutionDefinition_FWD_DEFINED__ */


#ifndef __IBossEvolutionDefinition_FWD_DEFINED__
#define __IBossEvolutionDefinition_FWD_DEFINED__
typedef interface IBossEvolutionDefinition IBossEvolutionDefinition;

#endif 	/* __IBossEvolutionDefinition_FWD_DEFINED__ */


#ifndef __ICutEvolutionDefinition_FWD_DEFINED__
#define __ICutEvolutionDefinition_FWD_DEFINED__
typedef interface ICutEvolutionDefinition ICutEvolutionDefinition;

#endif 	/* __ICutEvolutionDefinition_FWD_DEFINED__ */


#ifndef __IFilletDefinition_FWD_DEFINED__
#define __IFilletDefinition_FWD_DEFINED__
typedef interface IFilletDefinition IFilletDefinition;

#endif 	/* __IFilletDefinition_FWD_DEFINED__ */


#ifndef __IChamferDefinition_FWD_DEFINED__
#define __IChamferDefinition_FWD_DEFINED__
typedef interface IChamferDefinition IChamferDefinition;

#endif 	/* __IChamferDefinition_FWD_DEFINED__ */


#ifndef __IShellDefinition_FWD_DEFINED__
#define __IShellDefinition_FWD_DEFINED__
typedef interface IShellDefinition IShellDefinition;

#endif 	/* __IShellDefinition_FWD_DEFINED__ */


#ifndef __ICopyMeshDefinition_FWD_DEFINED__
#define __ICopyMeshDefinition_FWD_DEFINED__
typedef interface ICopyMeshDefinition ICopyMeshDefinition;

#endif 	/* __ICopyMeshDefinition_FWD_DEFINED__ */


#ifndef __ICopyCircularDefinition_FWD_DEFINED__
#define __ICopyCircularDefinition_FWD_DEFINED__
typedef interface ICopyCircularDefinition ICopyCircularDefinition;

#endif 	/* __ICopyCircularDefinition_FWD_DEFINED__ */


#ifndef __ICopyCurveDefinition_FWD_DEFINED__
#define __ICopyCurveDefinition_FWD_DEFINED__
typedef interface ICopyCurveDefinition ICopyCurveDefinition;

#endif 	/* __ICopyCurveDefinition_FWD_DEFINED__ */


#ifndef __IMirrorDefinition_FWD_DEFINED__
#define __IMirrorDefinition_FWD_DEFINED__
typedef interface IMirrorDefinition IMirrorDefinition;

#endif 	/* __IMirrorDefinition_FWD_DEFINED__ */


#ifndef __IMirrorAllDefinition_FWD_DEFINED__
#define __IMirrorAllDefinition_FWD_DEFINED__
typedef interface IMirrorAllDefinition IMirrorAllDefinition;

#endif 	/* __IMirrorAllDefinition_FWD_DEFINED__ */


#ifndef __ICutByPlaneDefinition_FWD_DEFINED__
#define __ICutByPlaneDefinition_FWD_DEFINED__
typedef interface ICutByPlaneDefinition ICutByPlaneDefinition;

#endif 	/* __ICutByPlaneDefinition_FWD_DEFINED__ */


#ifndef __ICutBySketchDefinition_FWD_DEFINED__
#define __ICutBySketchDefinition_FWD_DEFINED__
typedef interface ICutBySketchDefinition ICutBySketchDefinition;

#endif 	/* __ICutBySketchDefinition_FWD_DEFINED__ */


#ifndef __IMeshPartArrayDefinition_FWD_DEFINED__
#define __IMeshPartArrayDefinition_FWD_DEFINED__
typedef interface IMeshPartArrayDefinition IMeshPartArrayDefinition;

#endif 	/* __IMeshPartArrayDefinition_FWD_DEFINED__ */


#ifndef __ICircularPartArrayDefinition_FWD_DEFINED__
#define __ICircularPartArrayDefinition_FWD_DEFINED__
typedef interface ICircularPartArrayDefinition ICircularPartArrayDefinition;

#endif 	/* __ICircularPartArrayDefinition_FWD_DEFINED__ */


#ifndef __ICurvePartArrayDefinition_FWD_DEFINED__
#define __ICurvePartArrayDefinition_FWD_DEFINED__
typedef interface ICurvePartArrayDefinition ICurvePartArrayDefinition;

#endif 	/* __ICurvePartArrayDefinition_FWD_DEFINED__ */


#ifndef __IDerivativePartArrayDefinition_FWD_DEFINED__
#define __IDerivativePartArrayDefinition_FWD_DEFINED__
typedef interface IDerivativePartArrayDefinition IDerivativePartArrayDefinition;

#endif 	/* __IDerivativePartArrayDefinition_FWD_DEFINED__ */


#ifndef __IInclineDefinition_FWD_DEFINED__
#define __IInclineDefinition_FWD_DEFINED__
typedef interface IInclineDefinition IInclineDefinition;

#endif 	/* __IInclineDefinition_FWD_DEFINED__ */


#ifndef __IRibDefinition_FWD_DEFINED__
#define __IRibDefinition_FWD_DEFINED__
typedef interface IRibDefinition IRibDefinition;

#endif 	/* __IRibDefinition_FWD_DEFINED__ */


#ifndef __IImportedSurfaceDefinition_FWD_DEFINED__
#define __IImportedSurfaceDefinition_FWD_DEFINED__
typedef interface IImportedSurfaceDefinition IImportedSurfaceDefinition;

#endif 	/* __IImportedSurfaceDefinition_FWD_DEFINED__ */


#ifndef __IPolygonalLineDefinition_FWD_DEFINED__
#define __IPolygonalLineDefinition_FWD_DEFINED__
typedef interface IPolygonalLineDefinition IPolygonalLineDefinition;

#endif 	/* __IPolygonalLineDefinition_FWD_DEFINED__ */


#ifndef __IConicSpiralDefinition_FWD_DEFINED__
#define __IConicSpiralDefinition_FWD_DEFINED__
typedef interface IConicSpiralDefinition IConicSpiralDefinition;

#endif 	/* __IConicSpiralDefinition_FWD_DEFINED__ */


#ifndef __ISplineDefinition_FWD_DEFINED__
#define __ISplineDefinition_FWD_DEFINED__
typedef interface ISplineDefinition ISplineDefinition;

#endif 	/* __ISplineDefinition_FWD_DEFINED__ */


#ifndef __ICylindricSpiralDefinition_FWD_DEFINED__
#define __ICylindricSpiralDefinition_FWD_DEFINED__
typedef interface ICylindricSpiralDefinition ICylindricSpiralDefinition;

#endif 	/* __ICylindricSpiralDefinition_FWD_DEFINED__ */


#ifndef __IEvolutionSurfaceDefinition_FWD_DEFINED__
#define __IEvolutionSurfaceDefinition_FWD_DEFINED__
typedef interface IEvolutionSurfaceDefinition IEvolutionSurfaceDefinition;

#endif 	/* __IEvolutionSurfaceDefinition_FWD_DEFINED__ */


#ifndef __IExtrusionSurfaceDefinition_FWD_DEFINED__
#define __IExtrusionSurfaceDefinition_FWD_DEFINED__
typedef interface IExtrusionSurfaceDefinition IExtrusionSurfaceDefinition;

#endif 	/* __IExtrusionSurfaceDefinition_FWD_DEFINED__ */


#ifndef __IRotatedSurfaceDefinition_FWD_DEFINED__
#define __IRotatedSurfaceDefinition_FWD_DEFINED__
typedef interface IRotatedSurfaceDefinition IRotatedSurfaceDefinition;

#endif 	/* __IRotatedSurfaceDefinition_FWD_DEFINED__ */


#ifndef __ILoftSurfaceDefinition_FWD_DEFINED__
#define __ILoftSurfaceDefinition_FWD_DEFINED__
typedef interface ILoftSurfaceDefinition ILoftSurfaceDefinition;

#endif 	/* __ILoftSurfaceDefinition_FWD_DEFINED__ */


#ifndef __IMacro3DDefinition_FWD_DEFINED__
#define __IMacro3DDefinition_FWD_DEFINED__
typedef interface IMacro3DDefinition IMacro3DDefinition;

#endif 	/* __IMacro3DDefinition_FWD_DEFINED__ */


#ifndef __IAxisConefaceDefinition_FWD_DEFINED__
#define __IAxisConefaceDefinition_FWD_DEFINED__
typedef interface IAxisConefaceDefinition IAxisConefaceDefinition;

#endif 	/* __IAxisConefaceDefinition_FWD_DEFINED__ */


#ifndef __IUnionComponentsDefinition_FWD_DEFINED__
#define __IUnionComponentsDefinition_FWD_DEFINED__
typedef interface IUnionComponentsDefinition IUnionComponentsDefinition;

#endif 	/* __IUnionComponentsDefinition_FWD_DEFINED__ */


#ifndef __IMoldCavityDefinition_FWD_DEFINED__
#define __IMoldCavityDefinition_FWD_DEFINED__
typedef interface IMoldCavityDefinition IMoldCavityDefinition;

#endif 	/* __IMoldCavityDefinition_FWD_DEFINED__ */


#ifndef __IPlaneMiddleDefinition_FWD_DEFINED__
#define __IPlaneMiddleDefinition_FWD_DEFINED__
typedef interface IPlaneMiddleDefinition IPlaneMiddleDefinition;

#endif 	/* __IPlaneMiddleDefinition_FWD_DEFINED__ */


#ifndef __IControlPointDefinition_FWD_DEFINED__
#define __IControlPointDefinition_FWD_DEFINED__
typedef interface IControlPointDefinition IControlPointDefinition;

#endif 	/* __IControlPointDefinition_FWD_DEFINED__ */


#ifndef __IConjunctivePointDefinition_FWD_DEFINED__
#define __IConjunctivePointDefinition_FWD_DEFINED__
typedef interface IConjunctivePointDefinition IConjunctivePointDefinition;

#endif 	/* __IConjunctivePointDefinition_FWD_DEFINED__ */


#ifndef __IAggregateDefinition_FWD_DEFINED__
#define __IAggregateDefinition_FWD_DEFINED__
typedef interface IAggregateDefinition IAggregateDefinition;

#endif 	/* __IAggregateDefinition_FWD_DEFINED__ */


#ifndef __IPolygonalLineVertexParam_FWD_DEFINED__
#define __IPolygonalLineVertexParam_FWD_DEFINED__
typedef interface IPolygonalLineVertexParam IPolygonalLineVertexParam;

#endif 	/* __IPolygonalLineVertexParam_FWD_DEFINED__ */


#ifndef __IDefaultObject_FWD_DEFINED__
#define __IDefaultObject_FWD_DEFINED__
typedef interface IDefaultObject IDefaultObject;

#endif 	/* __IDefaultObject_FWD_DEFINED__ */


#ifndef __IBodyParts_FWD_DEFINED__
#define __IBodyParts_FWD_DEFINED__
typedef interface IBodyParts IBodyParts;

#endif 	/* __IBodyParts_FWD_DEFINED__ */


#ifndef __IEmbodiment3D_FWD_DEFINED__
#define __IEmbodiment3D_FWD_DEFINED__
typedef interface IEmbodiment3D IEmbodiment3D;

#endif 	/* __IEmbodiment3D_FWD_DEFINED__ */


#ifndef __IMassInertiaParam_FWD_DEFINED__
#define __IMassInertiaParam_FWD_DEFINED__
typedef interface IMassInertiaParam IMassInertiaParam;

#endif 	/* __IMassInertiaParam_FWD_DEFINED__ */


#ifndef __IMeasurer_FWD_DEFINED__
#define __IMeasurer_FWD_DEFINED__
typedef interface IMeasurer IMeasurer;

#endif 	/* __IMeasurer_FWD_DEFINED__ */


#ifndef __IBody_FWD_DEFINED__
#define __IBody_FWD_DEFINED__
typedef interface IBody IBody;

#endif 	/* __IBody_FWD_DEFINED__ */


#ifndef __ISurface_FWD_DEFINED__
#define __ISurface_FWD_DEFINED__
typedef interface ISurface ISurface;

#endif 	/* __ISurface_FWD_DEFINED__ */


#ifndef __ITessellation_FWD_DEFINED__
#define __ITessellation_FWD_DEFINED__
typedef interface ITessellation ITessellation;

#endif 	/* __ITessellation_FWD_DEFINED__ */


#ifndef __ICurve3D_FWD_DEFINED__
#define __ICurve3D_FWD_DEFINED__
typedef interface ICurve3D ICurve3D;

#endif 	/* __ICurve3D_FWD_DEFINED__ */


#ifndef __IFacet_FWD_DEFINED__
#define __IFacet_FWD_DEFINED__
typedef interface IFacet IFacet;

#endif 	/* __IFacet_FWD_DEFINED__ */


#ifndef __ILoop_FWD_DEFINED__
#define __ILoop_FWD_DEFINED__
typedef interface ILoop ILoop;

#endif 	/* __ILoop_FWD_DEFINED__ */


#ifndef __IOrientedEdge_FWD_DEFINED__
#define __IOrientedEdge_FWD_DEFINED__
typedef interface IOrientedEdge IOrientedEdge;

#endif 	/* __IOrientedEdge_FWD_DEFINED__ */


#ifndef __ILineSeg3dParam_FWD_DEFINED__
#define __ILineSeg3dParam_FWD_DEFINED__
typedef interface ILineSeg3dParam ILineSeg3dParam;

#endif 	/* __ILineSeg3dParam_FWD_DEFINED__ */


#ifndef __ICircle3dParam_FWD_DEFINED__
#define __ICircle3dParam_FWD_DEFINED__
typedef interface ICircle3dParam ICircle3dParam;

#endif 	/* __ICircle3dParam_FWD_DEFINED__ */


#ifndef __IEllipse3dParam_FWD_DEFINED__
#define __IEllipse3dParam_FWD_DEFINED__
typedef interface IEllipse3dParam IEllipse3dParam;

#endif 	/* __IEllipse3dParam_FWD_DEFINED__ */


#ifndef __INurbsPoint3dParam_FWD_DEFINED__
#define __INurbsPoint3dParam_FWD_DEFINED__
typedef interface INurbsPoint3dParam INurbsPoint3dParam;

#endif 	/* __INurbsPoint3dParam_FWD_DEFINED__ */


#ifndef __INurbs3dParam_FWD_DEFINED__
#define __INurbs3dParam_FWD_DEFINED__
typedef interface INurbs3dParam INurbs3dParam;

#endif 	/* __INurbs3dParam_FWD_DEFINED__ */


#ifndef __IPlaneParam_FWD_DEFINED__
#define __IPlaneParam_FWD_DEFINED__
typedef interface IPlaneParam IPlaneParam;

#endif 	/* __IPlaneParam_FWD_DEFINED__ */


#ifndef __IConeParam_FWD_DEFINED__
#define __IConeParam_FWD_DEFINED__
typedef interface IConeParam IConeParam;

#endif 	/* __IConeParam_FWD_DEFINED__ */


#ifndef __ICylinderParam_FWD_DEFINED__
#define __ICylinderParam_FWD_DEFINED__
typedef interface ICylinderParam ICylinderParam;

#endif 	/* __ICylinderParam_FWD_DEFINED__ */


#ifndef __ISphereParam_FWD_DEFINED__
#define __ISphereParam_FWD_DEFINED__
typedef interface ISphereParam ISphereParam;

#endif 	/* __ISphereParam_FWD_DEFINED__ */


#ifndef __ITorusParam_FWD_DEFINED__
#define __ITorusParam_FWD_DEFINED__
typedef interface ITorusParam ITorusParam;

#endif 	/* __ITorusParam_FWD_DEFINED__ */


#ifndef __INurbsSurfaceParam_FWD_DEFINED__
#define __INurbsSurfaceParam_FWD_DEFINED__
typedef interface INurbsSurfaceParam INurbsSurfaceParam;

#endif 	/* __INurbsSurfaceParam_FWD_DEFINED__ */


#ifndef __IArc3dParam_FWD_DEFINED__
#define __IArc3dParam_FWD_DEFINED__
typedef interface IArc3dParam IArc3dParam;

#endif 	/* __IArc3dParam_FWD_DEFINED__ */


#ifndef __ISTrackingPointsMeasurer_FWD_DEFINED__
#define __ISTrackingPointsMeasurer_FWD_DEFINED__
typedef interface ISTrackingPointsMeasurer ISTrackingPointsMeasurer;

#endif 	/* __ISTrackingPointsMeasurer_FWD_DEFINED__ */


#ifndef __IPartCollection_FWD_DEFINED__
#define __IPartCollection_FWD_DEFINED__
typedef interface IPartCollection IPartCollection;

#endif 	/* __IPartCollection_FWD_DEFINED__ */


#ifndef __IEntityCollection_FWD_DEFINED__
#define __IEntityCollection_FWD_DEFINED__
typedef interface IEntityCollection IEntityCollection;

#endif 	/* __IEntityCollection_FWD_DEFINED__ */


#ifndef __IMateConstraintCollection_FWD_DEFINED__
#define __IMateConstraintCollection_FWD_DEFINED__
typedef interface IMateConstraintCollection IMateConstraintCollection;

#endif 	/* __IMateConstraintCollection_FWD_DEFINED__ */


#ifndef __IViewProjectionCollection_FWD_DEFINED__
#define __IViewProjectionCollection_FWD_DEFINED__
typedef interface IViewProjectionCollection IViewProjectionCollection;

#endif 	/* __IViewProjectionCollection_FWD_DEFINED__ */


#ifndef __IVariableCollection_FWD_DEFINED__
#define __IVariableCollection_FWD_DEFINED__
typedef interface IVariableCollection IVariableCollection;

#endif 	/* __IVariableCollection_FWD_DEFINED__ */


#ifndef __IFeatureCollection_FWD_DEFINED__
#define __IFeatureCollection_FWD_DEFINED__
typedef interface IFeatureCollection IFeatureCollection;

#endif 	/* __IFeatureCollection_FWD_DEFINED__ */


#ifndef __IFaceCollection_FWD_DEFINED__
#define __IFaceCollection_FWD_DEFINED__
typedef interface IFaceCollection IFaceCollection;

#endif 	/* __IFaceCollection_FWD_DEFINED__ */


#ifndef __IEdgeCollection_FWD_DEFINED__
#define __IEdgeCollection_FWD_DEFINED__
typedef interface IEdgeCollection IEdgeCollection;

#endif 	/* __IEdgeCollection_FWD_DEFINED__ */


#ifndef __IDeletedCopyCollection_FWD_DEFINED__
#define __IDeletedCopyCollection_FWD_DEFINED__
typedef interface IDeletedCopyCollection IDeletedCopyCollection;

#endif 	/* __IDeletedCopyCollection_FWD_DEFINED__ */


#ifndef __IAttribute3DCollection_FWD_DEFINED__
#define __IAttribute3DCollection_FWD_DEFINED__
typedef interface IAttribute3DCollection IAttribute3DCollection;

#endif 	/* __IAttribute3DCollection_FWD_DEFINED__ */


#ifndef __IBodyCollection_FWD_DEFINED__
#define __IBodyCollection_FWD_DEFINED__
typedef interface IBodyCollection IBodyCollection;

#endif 	/* __IBodyCollection_FWD_DEFINED__ */


#ifndef __ILoopCollection_FWD_DEFINED__
#define __ILoopCollection_FWD_DEFINED__
typedef interface ILoopCollection ILoopCollection;

#endif 	/* __ILoopCollection_FWD_DEFINED__ */


#ifndef __IOrientedEdgeCollection_FWD_DEFINED__
#define __IOrientedEdgeCollection_FWD_DEFINED__
typedef interface IOrientedEdgeCollection IOrientedEdgeCollection;

#endif 	/* __IOrientedEdgeCollection_FWD_DEFINED__ */


#ifndef __INurbsPoint3dCollection_FWD_DEFINED__
#define __INurbsPoint3dCollection_FWD_DEFINED__
typedef interface INurbsPoint3dCollection INurbsPoint3dCollection;

#endif 	/* __INurbsPoint3dCollection_FWD_DEFINED__ */


#ifndef __INurbsPoint3dCollCollection_FWD_DEFINED__
#define __INurbsPoint3dCollCollection_FWD_DEFINED__
typedef interface INurbsPoint3dCollCollection INurbsPoint3dCollCollection;

#endif 	/* __INurbsPoint3dCollCollection_FWD_DEFINED__ */


#ifndef __INurbsKnotCollection_FWD_DEFINED__
#define __INurbsKnotCollection_FWD_DEFINED__
typedef interface INurbsKnotCollection INurbsKnotCollection;

#endif 	/* __INurbsKnotCollection_FWD_DEFINED__ */


#ifndef __ICoordinate3dCollection_FWD_DEFINED__
#define __ICoordinate3dCollection_FWD_DEFINED__
typedef interface ICoordinate3dCollection ICoordinate3dCollection;

#endif 	/* __ICoordinate3dCollection_FWD_DEFINED__ */


#ifndef __IIntersectionResult_FWD_DEFINED__
#define __IIntersectionResult_FWD_DEFINED__
typedef interface IIntersectionResult IIntersectionResult;

#endif 	/* __IIntersectionResult_FWD_DEFINED__ */


#ifndef __IObject3DNotifyResult_FWD_DEFINED__
#define __IObject3DNotifyResult_FWD_DEFINED__
typedef interface IObject3DNotifyResult IObject3DNotifyResult;

#endif 	/* __IObject3DNotifyResult_FWD_DEFINED__ */


#ifndef __IDocument3DNotify_FWD_DEFINED__
#define __IDocument3DNotify_FWD_DEFINED__
typedef interface IDocument3DNotify IDocument3DNotify;

#endif 	/* __IDocument3DNotify_FWD_DEFINED__ */


#ifndef __IObject3DNotify_FWD_DEFINED__
#define __IObject3DNotify_FWD_DEFINED__
typedef interface IObject3DNotify IObject3DNotify;

#endif 	/* __IObject3DNotify_FWD_DEFINED__ */


#ifndef __IDocument3DNotifyResult_FWD_DEFINED__
#define __IDocument3DNotifyResult_FWD_DEFINED__
typedef interface IDocument3DNotifyResult IDocument3DNotifyResult;

#endif 	/* __IDocument3DNotifyResult_FWD_DEFINED__ */


#ifndef __IProcess3DNotify_FWD_DEFINED__
#define __IProcess3DNotify_FWD_DEFINED__
typedef interface IProcess3DNotify IProcess3DNotify;

#endif 	/* __IProcess3DNotify_FWD_DEFINED__ */


#ifndef __IProcess3DManipulatorsNotify_FWD_DEFINED__
#define __IProcess3DManipulatorsNotify_FWD_DEFINED__
typedef interface IProcess3DManipulatorsNotify IProcess3DManipulatorsNotify;

#endif 	/* __IProcess3DManipulatorsNotify_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __Kompas6API3D5COM_LIBRARY_DEFINED__
#define __Kompas6API3D5COM_LIBRARY_DEFINED__

/* library Kompas6API3D5COM */
/* [version][uuid] */ 











































































































































//-------------------------------------------------------------------------------
// Основные объекты
// ---
  // IDocument3D           - Интерфейс документа модели
  // IPart                 - Интерфейс детали или подсборки в составе сборки
  // IEntity               - Интерфейс элемента трехмерной модели(оси, плоскости, формообразующего элемента)
  // IColorParam           - Интерфейс параметров цвета и визуальных свойств материала
  // ISpecification3D      - Интерфейс для работы со спецификацией
  // IPlacement            - Интерфейс локальной системы координат(положение объекта)
  // IRequestInfo          - Интерфейс параметров запроса к системе
  // IMateConstraint       - Интерфейс структуры параметров сопряжения
  // IRasterFormatParam    - Интерфейс параметров для записи документа в растровом формате
  // IAdditionFormatParam  - Интерфейс параметров для записи модели в форматы IGES, SAT, XT, X_B, STEP, STL, VRML
  // ISelectionMng         - Интерфейс менеджера селектированных объектов
  // IChooseMng            - интерфейс менеджера выбора (подсветки) объектов
  // IFeature              - Интерфейс объекта дерева
  // IViewProjection       - Интерфейс проекции отображения модели в окне
  // IVariable             - Интерфейс внешней параметрической переменной модели
  // IModelLibrary         - Интерфейс библиотеки трехмерных моделей
  // IThinParam            - Интерфейс структуры параметров тонкой стенки
  // IExtrusionParam       - Интерфейс параметров элемента выдавливания
  // IRotatedParam         - Интерфейс параметров элемента вращения
  // IAttribute3D          - Интерфейс атрибута
  // IComponentPositioner  - Интерфейс управления положением компонентов в сборке [31/3/2004]
  // IObjectsFilter3D      - Интерфейс фильтрации объектов в окне [17/05/2004]


//-------------------------------------------------------------------------------
// Описания объектов (Definition)
// ---
  // IFaceDefinition                  -  Интерфейс свойств грани
  // IEdgeDefinition                  -  Интерфейс свойств ребра
  // IVertexDefinition                -  Интерфейс описания вершины
  // ISketchDefinition                -  Интерфейс параметров эскиза
  // IThreadDefinition                -  Условное изображение резьбы
  // IAxis2PointsDefinition           -  Интерфейс параметров вспомогательной оси, проходящей через две точки
  // IAxis2PlanesDefinition           -  Интерфейс параметров вспомогательной оси на пересечении двух плоскостей
  // IAxisOperationsDefinition        -  Интерфейс параметров оси формообразующего элемента
  // IAxisConefaceDefinition          -  Интерфейс параметров вспомогательной конической грани
  // IAxisEdgeDefinition              -  Интерфейс параметров вспомогательной оси, проходящей через прямолинейное ребро
  // IPlaneOffsetDefinition           -  Интерфейс параметров смещенной плоскости
  // IPlane3PointsDefinition          -  Интерфейс параметров вспомогательной плоскости, проходящей через три точки 
  // IPlaneAngleDefinition            -  Интерфейс параметров вспомогательной плоскости, построенной под углом к другой плоскости, и проходящей через заданную ось или ребро
  // IPlaneEdgePointDefinition        -  Интерфейс параметров плоскости, проходящей через ребро и вершину
  // IPlaneParallelDefinition         -  Интерфейс параметров плоскости, проходящей через вершину параллельно другой плоскости
  // IPlanePerpendicularDefinition    -  Интерфейс параметров плоскости, проходящей через вершину перпендикулярно ребру
  // IPlaneNormalToSurfaceDefinition  -  Интерфейс параметров нормальной плоскости
  // IPlaneTangentToSurfaceDefinition -  Интерфейс параметров касательной плоскости
  // IPlaneLineToEdgeDefinition       -  Интерфейс параметров плоскости, проходящей через ребро параллельно или перпендикулярно другому ребру
  // IPlaneLineToPlaneDefinition      -  Интерфейс параметров плоскости, проходящей через ребро параллельно или перпендикулярно грани
  // IBaseExtrusionDefinition         -  Интерфейс параметров основания - элемента выдавливания
  // IBossExtrusionDefinition         -  Интерфейс параметров приклеенного элемента выдавливания
  // ICutExtrusionDefinition          -  Интерфейс параметров вырезанного элемента выдавливания
  // IBaseRotatedDefinition           -  Интерфейс параметров основания - элемента вращения
  // IBossRotatedDefinition           -  Интерфейс приклеенного элемента вращения
  // ICutRotatedDefinition            -  Интерфейс вырезанного элемента вращения
  // IBaseLoftDefinition              -  Интерфейс параметров основания - элемента по сечениям
  // IBossLoftDefinition              -  Интерфейс приклеенного элемента по сечениям
  // ICutLoftDefinition               -  Интерфейс параметров вырезанного элемента по сечениям
  // IBaseEvolutionDefinition         -  Интерфейс параметров основания - кинематического элемента
  // IBossEvolutionDefinition         -  Интерфейс приклеенного кинематического элемента
  // ICutEvolutionDefinition          -  Интерфейс вырезанного кинематического элемента
  // IFilletDefinition                -  Интерфейс параметров элемента 'скругление'
  // IChamferDefinition               -  Интерфейс параметров фаски
  // IShellDefinition                 -  Интерфейс тонкостенной оболочки
  // ICopyMeshDefinition              -  Интерфейс операции копирования по сетке
  // ICopyCircularDefinition          -  Интерфейс операции копирования по концентрической сетке
  // ICopyCurveDefinition             -  Интерфейс операции копирования по кривой
  // IMirrorDefinition                -  Интерфейс зеркальной копии
  // IMirrorAllDefinition             -  Интерфейс зеркального отражения всех элементов
  // ICutByPlaneDefinition            -  Интерфейс операции сечения плоскостью
  // ICutBySketchDefinition           -  Интерфейс операции сечения эскизом
  // IMeshPartArrayDefinition         -  Интерфейс операции копирования компонентов сборки по параллелограммной сетке
  // ICircularPartArrayDefinition     -  Интерфейс копирования компонентов сборки по концентрической сетке
  // ICurvePartArrayDefinition        -  Интерфейс операции копирования компонентов сборки по кривой
  // IDerivativePartArrayDefinition   -  Интерфейс параметров нормальной плоскости
  // IInclineDefinition               -  Интерфейс уклона
  // IRibDefinition                   -  Интерфейс ребра жесткости
  // IImportedSurfaceDefinition       -  Интерфейс параметров импортированной поверхности
  // IPolygonalLineDefinition         -  Интерфейс параметров ломаной
  // IConicSpiralDefinition           -  Интерфейс параметров конической спирали
  // ISplineDefinition                -  Интерфейс параметров сплайна
  // ICylindricSpiralDefinition       -  Интерфейс параметров цилиндрической спирали
  // IEvolutionSurfaceDefinition      -  Интерфейс параметров кинематической поверхности
  // IMacro3DDefinition               -  Интерфейс макрообъекта 3D
  // IAxisConefaceDefinition          -  Интерфейс параметров вспомогательной оси конической грани
  // IUnionComponentsDefinition       -  Интерфейс параметров операции объединение компонентов
  // IMoldCavityDefinition            -  Интерфейс параметров операции вычесть компоненты
  // IAggregateDefinition             -  Интерфейс булевой операции
  // IPolygonalLineVertexParam;       -  Интерфейс параметров вершины ломаной
  // IDefaultObject;                  -  Интерфейс базового объекта


//-------------------------------------------------------------------------------
// Объекты математики
// ---

  ////////////////////////////////////////////////////////////////////////////////
  //
  // Деталь имеет массив интерфейсов твердого тела(IBody). С помощью IBody
  // можно доступиться к математической модели детали(компонента).
  //
  // Твердое тело оно же оболочка состоит из массива граней.
  //
  // Грань(IFaceDefinition) сожержит информацию о геометрии(поверхность ISurface),
  // информацию о связях с другими гранями(массив циклов) и  признак ориентации
  // нормали, TRUE если она совпадает с  направлением нормали поверхности.
  //
  // ISurface - интерфейс математической поверхности в трехмерном пространстве.
  //
  // ILoopDefinition - интерфейс цикла(массив ориентированных ребер). Циклов
  // может быть несколько, если в грани есть  отверстия.
  //
  // Ориентированное ребро(IOrientedEdge); - объект топологии. Несет информацию
  // о ребре и направлении относительно ребра. Составляющая цикла.
  // Ребро(IEdgeDefinition) - это объект  топологии. Несет информацию о
  // математической кривой в трехмерном пространстве(ICurve3D) и о присоединенных
  // гранях. Ребро входит с ориентацией плюс(левая) или с ориентацией минус(правая).
  //
  ////////////////////////////////////////////////////////////////////////////////

  // IMassInertiaParam  - Интерфейс параметров для расчета массо-центровочных характеристик
  // IMeasurer          - Интерфейс для измерений расстояния и угла между двумя примитивами ( гранями, ребрами, вершинами)
  // IBody              - Интерфейс твердого тела
  // ISurface           - Интерфейс математической поверхности в трехмерном пространстве
  // ITessellation      - Интерфейс триангуляции
  // ICurve3D           - Интерфейс математической кривой в трехмерном пространстве
  // IFacet             - Интерфейс триангуляционной пластины
  // ILoop              - Интерфейс цикла
  // IOrientedEdge      - Интерфейс ориентированного ребра
  // ILineSeg3dParam    - Интерфейс параметров 3D LineSeg
  // ICircle3dParam     - Интерфейс параметров 3D Circle
  // IEllipse3dParam    - Интерфейс параметров 3D Ellipse
  // INurbsPoint3dParam - Интерфейс параметров точки для Nurbs 3D
  // INurbs3dParam      - Интерфейс параметров Nurbs-сплайна 3D
  // IPlaneParam        - Интерфейс параметров плоскости
  // IConeParam         - Интерфейс параметров конической поверхности
  // ICylinderParam     - Интерфейс параметров цилиндрической поверхности
  // ISphereParam       - Интерфейс параметров сферы
  // ITorusParam        - Интерфейс параметров тора
  // INurbsSurfaceParam - Интерфейс параметров Nurbs-поверхности
  // IArc3dParam        - Интерфейс параметров 3d Arc
  // IChooseBodies;     - Интерфейс области применения для тел документа в данной операции
  
  
//-------------------------------------------------------------------------------
// _5_ Коллекции
// ---
  // IPartCollection           - Интерфейс динамического массива компонентов сборки
  // IEntityCollection         - Интерфейс динамического массива объектов
  // IMateConstraintCollection - Интерфейс массива параметров сопряжений компонента сборки
  // IViewProjectionCollection - Интерфейс массива проекций отображения модели в окне
  // IVariableCollection       - Интерфейс динамического массива внешних переменных
  // IFeatureCollection        - Интерфейс массива объектов дерева
  // IFaceCollection           - Интерфейс массива граней
  // IEdgeCollection           - Интерфейс массива ребер
  // IDeletedCopyCollection    - Интерфейс массива удаленных индексов для оперций копирования и массивов компонент
  // IAttribute3DCollection    - Интерфейс массива атрибутов в 3D
  
  
//-------------------------------------------------------------------------------
// _6_ Коллекции математики
// ---
  // IBodyCollection             - Интерфейс массива твердых тел
  // ILoopCollection             - Интерфейс массива циклов
  // IOrientedEdgeCollection     - Интерфейс массива ориентированных ребер
  // INurbsPoint3dCollection     - Интерфейс массива точек для Nurbs 3D
  // INurbsPoint3dCollCollection - Интерфейс массива массивов точек для Nurbs 3D Surface
  // INurbsKnotCollection        - Интерфейс массива узлов для Nurbs 3D
  // ICoordinate3dCollectio      - Интерфейс массива координат точек 3D
  // IIntersectionResult         - Интерфейс результатов пересечений двух тел
  
  
//-------------------------------------------------------------------------------
// _7_ События и дополнительные интерфейсы
// ---
  // IObject3DNotifyResult   - результаты редактирования объекта 3D объекта
  // IDocument3DNotify       - COM интерфейс : событий для 3D документа
  // IObject3DNotify         - COM интерфейс : событий для объекта 3D документа
  // IDocument3DNotifyResult - Дополнительные параметры для событий докаумента 3D
  
  
//-------------------------------------------------------------------------------
// Описания указателей на интерфейсы
// ---
typedef IObject3DNotifyResult *LPOBJECT3DNOTIFYRESULT;

typedef IDocument3DNotifyResult *LPIDOCUMENT3DNOTIFYRESULT;

typedef IDocument3DNotify *LPDOCUMENT3DNOTIFY;

typedef IObject3DNotify *LPOBJECT3DNOTIFY;

typedef IDocument3D *LPDOCUMENT3D;

typedef IPart *LPPART;

typedef IEntity *LPENTITY;

typedef IRequestInfo *LPREQUESTINFO;

typedef IEntityCollection *LPENTITYCOLLECTION;

typedef IMateConstraintCollection *LPMATECONSTRAINTCOLLECTION;

typedef ISpecification3D *LPSPECIFICATION3D;

typedef IMateConstraint *LPMATECONSTRAINT;

typedef IPartCollection *LPPARTCOLLECTION;

typedef /* external definition not present */ IRasterFormatParam *LPRASTERFORMATPARAM;

typedef IAdditionFormatParam *LPADDITIONFORMATPARAM;

typedef IViewProjectionCollection *LPVIEWPROJECTIONCOLLECTION;

typedef ISelectionMng *LPSELECTIONMNG;

typedef IChooseMng *LPCHOOSEMNG;

typedef IColorParam *LPCOLORPARAM;

typedef IPlacement *LPPLACEMENT;

typedef IVariableCollection *LPVARIABLECOLLECTION;

typedef IBodyCollection *LPBODYCOLLECTION;

typedef IFeature *LPFEATURE;

typedef IMassInertiaParam *LPMASSINERTIAPARAM;

typedef IMeasurer *LPMEASURER;

typedef IBody *LPBODY;

typedef IViewProjection *LPVIEWPROJECTION;

typedef IVariable *LPVARIABLE;

typedef IFeatureCollection *LPFEATURECOLLECTION;

typedef IFaceCollection *LPFACECOLLECTION;

typedef IFaceDefinition *LPFACEDEFINITION;

typedef ISurface *LPSURFACE;

typedef ILoopCollection *LPLOOPCOLLECTION;

typedef IEdgeCollection *LPEDGECOLLECTION;

typedef ITessellation *LPTESSELLATION;

typedef ILoop *LPLOOP;

typedef IEdgeDefinition *LPEDGEDEFINITION;

typedef ICurve3D *LPCURVE3D;

typedef IVertexDefinition *LPVERTEXDEFINITION;

typedef IOrientedEdgeCollection *LPORIENTEDEDGECOLLECTION;

typedef IFacet *LPFACET;

typedef IOrientedEdge *LPORIENTEDEDGE;

typedef IModelLibrary *LPMODELLIBRARY;

typedef IThinParam *LPTHINPARAM;

typedef IExtrusionParam *LPEXTRUSIONPARAM;

typedef IRotatedParam *LPROTATEDPARAM;

typedef IAttribute3D *LPATTRIBUTE3D;

typedef ISketchDefinition *LPSKETCHDEFINITION;

typedef IThreadDefinition *LPTHREADDEFINITION;

typedef IAxis2PointsDefinition *LPAXIS2POINTSDEFINITION;

typedef IAxis2PlanesDefinition *LPAXIS2PLANESDEFINITION;

typedef IAxisOperationsDefinition *LPAXISOPERATIONSDEFINITION;

typedef IAxisConefaceDefinition *LPAXISCONEFACEDEFINITION;

typedef IAxisEdgeDefinition *LPAXISEDGEDEFINITION;

typedef IPlaneOffsetDefinition *LPPLANEOFFSETDEFINITION;

typedef IPlane3PointsDefinition *LPPLANE3POINTSDEFINITION;

typedef IPlaneAngleDefinition *LPPLANEANGLEDEFINITION;

typedef IPlaneEdgePointDefinition *LPPLANEEDGEPOINTDEFINITION;

typedef IPlaneParallelDefinition *LPPLANEPARALLELDEFINITION;

typedef IPlanePerpendicularDefinition *LPPLANEPERPENDICULARDEFINITION;

typedef IPlaneNormalToSurfaceDefinition *LPPLANENORMALTOSURFACEDEFINITION;

typedef IPlaneTangentToSurfaceDefinition *LPPLANETANGENTTOSURFACEDEFINITION;

typedef IPlaneLineToEdgeDefinition *LPPLANELINETOEDGEDEFINITION;

typedef IPlaneLineToPlaneDefinition *LPPLANELINETOPLANEDEFINITION;

typedef IBaseExtrusionDefinition *LPBASEEXTRUSIONDEFINITION;

typedef IBossExtrusionDefinition *LPBOSSEXTRUSIONDEFINITION;

typedef ICutExtrusionDefinition *LPCUTEXTRUSIONDEFINITION;

typedef IExtrusionSurfaceDefinition *LPEXTRUSIONSURFACEDEFINITION;

typedef IBaseRotatedDefinition *LPBASEROTATEDDEFINITION;

typedef IBossRotatedDefinition *LPBOSSROTATEDDEFINITION;

typedef ICutRotatedDefinition *LPCUTROTATEDDEFINITION;

typedef IRotatedSurfaceDefinition *LPROTATEDSURFAKEDEFINITION;

typedef IBaseLoftDefinition *LPBASELOFTDEFINITION;

typedef IBossLoftDefinition *LPBOSSLOFTDEFINITION;

typedef ICutLoftDefinition *LPCUTLOFTDEFINITION;

typedef ILoftSurfaceDefinition *LPLOFTSURFAKEDEFINITION;

typedef IBaseEvolutionDefinition *LPBASEEVOLUTIONDEFINITION;

typedef IBossEvolutionDefinition *LPBOSSEVOLUTIONDEFINITION;

typedef ICutEvolutionDefinition *LPCUTEVOLUTIONDEFINITION;

typedef IEvolutionSurfaceDefinition *LPEVOLUTIONSURFACEDEFINITION;

typedef IFilletDefinition *LPFILLETDEFINITION;

typedef IChamferDefinition *LPCHAMFERDEFINITION;

typedef IShellDefinition *LPSHELLDEFINITION;

typedef ICopyMeshDefinition *LPCOPYMESHDEFINITION;

typedef ICopyCircularDefinition *LPCOPYCIRCULARDEFINITION;

typedef ICopyCurveDefinition *LPCOPYCURVEDEFINITION;

typedef IMirrorDefinition *LPMIRRORDEFINITION;

typedef IMirrorAllDefinition *LPMIRRORALLDEFINITION;

typedef ICutByPlaneDefinition *LPCUTBYPLANEDEFINITION;

typedef ICutBySketchDefinition *LPCUTBYSKETCHDEFINITION;

typedef IDeletedCopyCollection *LPDELETEDCOPYCOLLECTION;

typedef IMeshPartArrayDefinition *LPMESHPARTARRAYDEFINITION;

typedef ICircularPartArrayDefinition *LPCOPYPARTCIRCULARDEFINITION;

typedef ICurvePartArrayDefinition *LPCURVEPARTARRAYDEFINITION;

typedef IDerivativePartArrayDefinition *LPDERIVATIVEPARTARRAYDEFINITION;

typedef IInclineDefinition *LPINCLINEDEFINITION;

typedef IRibDefinition *LPRIBDEFINITION;

typedef IImportedSurfaceDefinition *LPIMPORTEDSURFACEDEFINITION;

typedef IPolygonalLineDefinition *LPPOLYGONALLINEDEFINITION;

typedef IConicSpiralDefinition *LPCONICSPIRALDEFINITION;

typedef ISplineDefinition *LPSPLINEDEFINITION;

typedef ICylindricSpiralDefinition *LPCYLINDRICSPIRALDEFINITION;

typedef ILineSeg3dParam *LPLINESEG3DPARAM;

typedef ICircle3dParam *LPCIRCLE3DPARAM;

typedef IEllipse3dParam *LPELLIPSE3DPARAM;

typedef INurbsPoint3dParam *LPNURBSPOINT3DPARAM;

typedef INurbsPoint3dCollection *LPNURBSPOINT3DCOLLECTION;

typedef INurbsPoint3dCollCollection *LPNURBSPOINT3DCOLLCOLLECTION;

typedef INurbsKnotCollection *LPNURBSKNOTCOLLECTION;

typedef INurbs3dParam *LPNURBS3DPARAM;

typedef IPlaneParam *LPPLANEPARAM;

typedef IConeParam *LPCONEPARAM;

typedef ICylinderParam *LPCYLINDERPARAM;

typedef ISphereParam *LPSPHEREPARAM;

typedef ITorusParam *LPTORUSPARAM;

typedef INurbsSurfaceParam *LPNURBSSURFACEPARAM;

typedef IArc3dParam *LPARC3DPARAM;

typedef IAttribute3DCollection *LPATTRIBUTE3DCOLLECTION;

typedef IComponentPositioner *LPCOMPONENTPOSITIONER;

typedef IObjectsFilter3D *LPOBJECTSFILTER3D;

typedef IMacro3DDefinition *LPMACRO3DDEFINITION;

typedef ICoordinate3dCollection *LPCOORDINATE3DCOLLECTION;

typedef IIntersectionResult *LPINTERSECTIONRESULT;

typedef IChooseBodies *LPCHOOSEBODIES;

typedef IAggregateDefinition *LPAGGREGATEDEFINITION;

typedef IPolygonalLineVertexParam *LPPOLYGONALLINEVERTEXPARAM;

typedef IChooseParts *LPCHOOSEPARTS;

typedef IBodyParts *LPBODYPARTS;

typedef IProcess3DNotify *LPPROCESS3DNOTIFY;

typedef IProcess3DManipulatorsNotify *LPPROCESS3DMANIPULATORSNOTIFY;


DEFINE_GUID(LIBID_Kompas6API3D5COM,0x006C01C3,0xFA63,0x4f20,0xB9,0x30,0xCC,0xE6,0xDD,0x3A,0x92,0x36);

#ifndef __IDocument3D_INTERFACE_DEFINED__
#define __IDocument3D_INTERFACE_DEFINED__

/* interface IDocument3D */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDocument3D,0x7AA0E540,0x0302,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0302-11D4-A30E-00C026EE094F")
    IDocument3D : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UpdateDocumentParam( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetFileName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFileName( 
            LPOLESTR name) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetComment( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetComment( 
            LPOLESTR comment) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetAuthor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAuthor( 
            LPOLESTR author) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsActive( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetActive( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetInvisibleMode( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE GetPart( 
            long type) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Create( 
            BOOL invisible,
            BOOL _typeDoc) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Open( 
            LPOLESTR fileName,
            BOOL invisible) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Save( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SaveAs( 
            LPOLESTR fileName) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE UserSelectEntity( 
            LPENTITY defSelectObject,
            void *fnFilter,
            LPOLESTR prompt) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UserGetCursor( 
            LPOLESTR prompt,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsEditMode( void) = 0;
        
        virtual /* [helpstring] */ LPREQUESTINFO STDMETHODCALLTYPE GetRequestInfo( 
            LPPART part) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UserGetPlacementAndEntity( 
            long entityCount) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE EntityCollection( 
            short objType,
            BOOL checkEntity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPartFromFile( 
            LPOLESTR fileName,
            LPPART part,
            BOOL externalFile) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE CreatePartFromFile( 
            LPOLESTR fileName,
            LPPART part,
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsDetail( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ChangeObjectInLibRequest( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE StopLibRequest( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINTCOLLECTION STDMETHODCALLTYPE MateConstraintCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddMateConstraint( 
            long constraintType,
            LPENTITY obj1,
            LPENTITY obj2,
            short direction,
            short fixed,
            double val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RemoveMateConstraint( 
            long constraintType,
            LPENTITY obj1,
            LPENTITY obj2) = 0;
        
        virtual /* [helpstring] */ LPSPECIFICATION3D STDMETHODCALLTYPE GetSpecification( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINT STDMETHODCALLTYPE GetMateConstraint( void) = 0;
        
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartCollection( 
            BOOL refresh) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ZoomPrevNextOrAll( 
            short type) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RefreshActiveWindow( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE CreatePartInAssembly( 
            LPOLESTR fileName,
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RebuildDocument( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SaveAsToRasterFormat( 
            LPOLESTR fileName,
            LPRASTERFORMATPARAM par) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SaveAsToAdditionFormat( 
            LPOLESTR fileName,
            LPADDITIONFORMATPARAM par) = 0;
        
        virtual /* [helpstring] */ LPRASTERFORMATPARAM STDMETHODCALLTYPE RasterFormatParam( void) = 0;
        
        virtual /* [helpstring] */ LPADDITIONFORMATPARAM STDMETHODCALLTYPE AdditionFormatParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPerspective( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPerspective( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDrawMode( 
            int mode) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetDrawMode( void) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTIONCOLLECTION STDMETHODCALLTYPE GetViewProjectionCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DeleteObject( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ LPSELECTIONMNG STDMETHODCALLTYPE GetSelectionMng( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEMNG STDMETHODCALLTYPE GetChooseMng( void) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetObjectType( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SaveAsToUncompressedRasterFormat( 
            LPOLESTR fileName,
            LPRASTERFORMATPARAM par) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE AddImportedSurfaces( 
            LPOLESTR fileName,
            BOOL together) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllPlanes( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllPlanes( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllAxis( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllAxis( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllSketches( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllSketches( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllPlaces( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllPlaces( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllSurfaces( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllSurfaces( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllThreads( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllThreads( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3DCOLLECTION STDMETHODCALLTYPE AttributeCollection( 
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            LPUNKNOWN pObj) = 0;
        
        virtual /* [helpstring] */ LPFEATURECOLLECTION STDMETHODCALLTYPE FeatureCollection( 
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            int objType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPartFromFileEx( 
            LPOLESTR fileName,
            LPPART part,
            BOOL externalFile,
            BOOL redraw) = 0;
        
        virtual /* [helpstring] */ LPCOMPONENTPOSITIONER STDMETHODCALLTYPE ComponentPositioner( void) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE DefaultPlacement( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetShadedWireframe( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetShadedWireframe( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEditMacroObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SaveAsEx( 
            LPOLESTR fileName,
            long saveMode) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetInterface( 
            long o3dType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDismantleMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDismantleMode( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllCurves( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllCurves( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllControlPoints( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllControlPoints( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE CopyPart( 
            LPPART sourcePart,
            LPPLACEMENT newPlacement) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTreeNeedRebuild( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTreeNeedRebuild( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE UserSelectEntityEx( 
            LPENTITY defSelectObject,
            void *fnFilter,
            LPOLESTR prompt,
            LPUNKNOWN processParam) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE PlaceFeatureAfter( 
            LPFEATURE obj,
            LPFEATURE afterObj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetRollBackFeature( 
            LPFEATURE obj) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetRollBackFeature( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEnableRollBackFeaturesInCollections( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetEnableRollBackFeaturesInCollections( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ExcludeFeaturesAfter( 
            LPFEATURE obj,
            BOOL exclude) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllDimensions( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllDimensions( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllDesignations( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllDesignations( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideAllAuxiliaryGeom( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideAllAuxiliaryGeom( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideInComponentsMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideInComponentsMode( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ IDocument3DNotifyResult *STDMETHODCALLTYPE GetDocument3DNotifyResult( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetReference( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetWindowNeedRebuild( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetWindowNeedRebuild( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHideLayoutGeometry( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHideLayoutGeometry( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RunTakeCreateObjectProc( 
            long processType,
            LPUNKNOWN takeObject,
            BOOL needCreateTakeObj,
            BOOL lostTakeObj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE LoadFromAdditionFormat( 
            LPOLESTR fileName,
            LPADDITIONFORMATPARAM par) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetLastFeature( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMatesMultiCreatedMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMatesMultiCreatedMode( 
            BOOL val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDocument3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocument3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocument3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UpdateDocumentParam )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetFileName )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFileName )( 
            IDocument3D * This,
            LPOLESTR name);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetComment )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetComment )( 
            IDocument3D * This,
            LPOLESTR comment);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetAuthor )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAuthor )( 
            IDocument3D * This,
            LPOLESTR author);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsActive )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetActive )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetInvisibleMode )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *GetPart )( 
            IDocument3D * This,
            long type);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Create )( 
            IDocument3D * This,
            BOOL invisible,
            BOOL _typeDoc);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Open )( 
            IDocument3D * This,
            LPOLESTR fileName,
            BOOL invisible);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Save )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SaveAs )( 
            IDocument3D * This,
            LPOLESTR fileName);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Close )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *UserSelectEntity )( 
            IDocument3D * This,
            LPENTITY defSelectObject,
            void *fnFilter,
            LPOLESTR prompt);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UserGetCursor )( 
            IDocument3D * This,
            LPOLESTR prompt,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsEditMode )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPREQUESTINFO ( STDMETHODCALLTYPE *GetRequestInfo )( 
            IDocument3D * This,
            LPPART part);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UserGetPlacementAndEntity )( 
            IDocument3D * This,
            long entityCount);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *EntityCollection )( 
            IDocument3D * This,
            short objType,
            BOOL checkEntity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPartFromFile )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPPART part,
            BOOL externalFile);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *CreatePartFromFile )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPPART part,
            LPENTITY plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsDetail )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ChangeObjectInLibRequest )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *StopLibRequest )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPMATECONSTRAINTCOLLECTION ( STDMETHODCALLTYPE *MateConstraintCollection )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddMateConstraint )( 
            IDocument3D * This,
            long constraintType,
            LPENTITY obj1,
            LPENTITY obj2,
            short direction,
            short fixed,
            double val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RemoveMateConstraint )( 
            IDocument3D * This,
            long constraintType,
            LPENTITY obj1,
            LPENTITY obj2);
        
        /* [helpstring] */ LPSPECIFICATION3D ( STDMETHODCALLTYPE *GetSpecification )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPMATECONSTRAINT ( STDMETHODCALLTYPE *GetMateConstraint )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartCollection )( 
            IDocument3D * This,
            BOOL refresh);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ZoomPrevNextOrAll )( 
            IDocument3D * This,
            short type);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RefreshActiveWindow )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *CreatePartInAssembly )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPENTITY plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RebuildDocument )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SaveAsToRasterFormat )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPRASTERFORMATPARAM par);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SaveAsToAdditionFormat )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPADDITIONFORMATPARAM par);
        
        /* [helpstring] */ LPRASTERFORMATPARAM ( STDMETHODCALLTYPE *RasterFormatParam )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPADDITIONFORMATPARAM ( STDMETHODCALLTYPE *AdditionFormatParam )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPerspective )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPerspective )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDrawMode )( 
            IDocument3D * This,
            int mode);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetDrawMode )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPVIEWPROJECTIONCOLLECTION ( STDMETHODCALLTYPE *GetViewProjectionCollection )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DeleteObject )( 
            IDocument3D * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ LPSELECTIONMNG ( STDMETHODCALLTYPE *GetSelectionMng )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPCHOOSEMNG ( STDMETHODCALLTYPE *GetChooseMng )( 
            IDocument3D * This);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetObjectType )( 
            IDocument3D * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SaveAsToUncompressedRasterFormat )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPRASTERFORMATPARAM par);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *AddImportedSurfaces )( 
            IDocument3D * This,
            LPOLESTR fileName,
            BOOL together);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllPlanes )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllPlanes )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllAxis )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllAxis )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllSketches )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllSketches )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllPlaces )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllPlaces )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllSurfaces )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllSurfaces )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllThreads )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllThreads )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPATTRIBUTE3DCOLLECTION ( STDMETHODCALLTYPE *AttributeCollection )( 
            IDocument3D * This,
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            LPUNKNOWN pObj);
        
        /* [helpstring] */ LPFEATURECOLLECTION ( STDMETHODCALLTYPE *FeatureCollection )( 
            IDocument3D * This,
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            int objType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPartFromFileEx )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPPART part,
            BOOL externalFile,
            BOOL redraw);
        
        /* [helpstring] */ LPCOMPONENTPOSITIONER ( STDMETHODCALLTYPE *ComponentPositioner )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *DefaultPlacement )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetShadedWireframe )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetShadedWireframe )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEditMacroObject )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SaveAsEx )( 
            IDocument3D * This,
            LPOLESTR fileName,
            long saveMode);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetInterface )( 
            IDocument3D * This,
            long o3dType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDismantleMode )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDismantleMode )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllCurves )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllCurves )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllControlPoints )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllControlPoints )( 
            IDocument3D * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *CopyPart )( 
            IDocument3D * This,
            LPPART sourcePart,
            LPPLACEMENT newPlacement);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTreeNeedRebuild )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTreeNeedRebuild )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *UserSelectEntityEx )( 
            IDocument3D * This,
            LPENTITY defSelectObject,
            void *fnFilter,
            LPOLESTR prompt,
            LPUNKNOWN processParam);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *PlaceFeatureAfter )( 
            IDocument3D * This,
            LPFEATURE obj,
            LPFEATURE afterObj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetRollBackFeature )( 
            IDocument3D * This,
            LPFEATURE obj);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetRollBackFeature )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEnableRollBackFeaturesInCollections )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetEnableRollBackFeaturesInCollections )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ExcludeFeaturesAfter )( 
            IDocument3D * This,
            LPFEATURE obj,
            BOOL exclude);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllDimensions )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllDimensions )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllDesignations )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllDesignations )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideAllAuxiliaryGeom )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideAllAuxiliaryGeom )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideInComponentsMode )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideInComponentsMode )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ IDocument3DNotifyResult *( STDMETHODCALLTYPE *GetDocument3DNotifyResult )( 
            IDocument3D * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetReference )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetWindowNeedRebuild )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetWindowNeedRebuild )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHideLayoutGeometry )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHideLayoutGeometry )( 
            IDocument3D * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RunTakeCreateObjectProc )( 
            IDocument3D * This,
            long processType,
            LPUNKNOWN takeObject,
            BOOL needCreateTakeObj,
            BOOL lostTakeObj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *LoadFromAdditionFormat )( 
            IDocument3D * This,
            LPOLESTR fileName,
            LPADDITIONFORMATPARAM par);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetLastFeature )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMatesMultiCreatedMode )( 
            IDocument3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMatesMultiCreatedMode )( 
            IDocument3D * This,
            BOOL val);
        
        END_INTERFACE
    } IDocument3DVtbl;

    interface IDocument3D
    {
        CONST_VTBL struct IDocument3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocument3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDocument3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocument3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocument3D_UpdateDocumentParam(This)	\
    ( (This)->lpVtbl -> UpdateDocumentParam(This) ) 

#define IDocument3D_GetFileName(This)	\
    ( (This)->lpVtbl -> GetFileName(This) ) 

#define IDocument3D_SetFileName(This,name)	\
    ( (This)->lpVtbl -> SetFileName(This,name) ) 

#define IDocument3D_GetComment(This)	\
    ( (This)->lpVtbl -> GetComment(This) ) 

#define IDocument3D_SetComment(This,comment)	\
    ( (This)->lpVtbl -> SetComment(This,comment) ) 

#define IDocument3D_GetAuthor(This)	\
    ( (This)->lpVtbl -> GetAuthor(This) ) 

#define IDocument3D_SetAuthor(This,author)	\
    ( (This)->lpVtbl -> SetAuthor(This,author) ) 

#define IDocument3D_IsActive(This)	\
    ( (This)->lpVtbl -> IsActive(This) ) 

#define IDocument3D_SetActive(This)	\
    ( (This)->lpVtbl -> SetActive(This) ) 

#define IDocument3D_GetInvisibleMode(This)	\
    ( (This)->lpVtbl -> GetInvisibleMode(This) ) 

#define IDocument3D_GetPart(This,type)	\
    ( (This)->lpVtbl -> GetPart(This,type) ) 

#define IDocument3D_Create(This,invisible,_typeDoc)	\
    ( (This)->lpVtbl -> Create(This,invisible,_typeDoc) ) 

#define IDocument3D_Open(This,fileName,invisible)	\
    ( (This)->lpVtbl -> Open(This,fileName,invisible) ) 

#define IDocument3D_Save(This)	\
    ( (This)->lpVtbl -> Save(This) ) 

#define IDocument3D_SaveAs(This,fileName)	\
    ( (This)->lpVtbl -> SaveAs(This,fileName) ) 

#define IDocument3D_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IDocument3D_UserSelectEntity(This,defSelectObject,fnFilter,prompt)	\
    ( (This)->lpVtbl -> UserSelectEntity(This,defSelectObject,fnFilter,prompt) ) 

#define IDocument3D_UserGetCursor(This,prompt,x,y,z)	\
    ( (This)->lpVtbl -> UserGetCursor(This,prompt,x,y,z) ) 

#define IDocument3D_IsEditMode(This)	\
    ( (This)->lpVtbl -> IsEditMode(This) ) 

#define IDocument3D_GetRequestInfo(This,part)	\
    ( (This)->lpVtbl -> GetRequestInfo(This,part) ) 

#define IDocument3D_UserGetPlacementAndEntity(This,entityCount)	\
    ( (This)->lpVtbl -> UserGetPlacementAndEntity(This,entityCount) ) 

#define IDocument3D_EntityCollection(This,objType,checkEntity)	\
    ( (This)->lpVtbl -> EntityCollection(This,objType,checkEntity) ) 

#define IDocument3D_SetPartFromFile(This,fileName,part,externalFile)	\
    ( (This)->lpVtbl -> SetPartFromFile(This,fileName,part,externalFile) ) 

#define IDocument3D_CreatePartFromFile(This,fileName,part,plane)	\
    ( (This)->lpVtbl -> CreatePartFromFile(This,fileName,part,plane) ) 

#define IDocument3D_IsDetail(This)	\
    ( (This)->lpVtbl -> IsDetail(This) ) 

#define IDocument3D_ChangeObjectInLibRequest(This)	\
    ( (This)->lpVtbl -> ChangeObjectInLibRequest(This) ) 

#define IDocument3D_StopLibRequest(This)	\
    ( (This)->lpVtbl -> StopLibRequest(This) ) 

#define IDocument3D_MateConstraintCollection(This)	\
    ( (This)->lpVtbl -> MateConstraintCollection(This) ) 

#define IDocument3D_AddMateConstraint(This,constraintType,obj1,obj2,direction,fixed,val)	\
    ( (This)->lpVtbl -> AddMateConstraint(This,constraintType,obj1,obj2,direction,fixed,val) ) 

#define IDocument3D_RemoveMateConstraint(This,constraintType,obj1,obj2)	\
    ( (This)->lpVtbl -> RemoveMateConstraint(This,constraintType,obj1,obj2) ) 

#define IDocument3D_GetSpecification(This)	\
    ( (This)->lpVtbl -> GetSpecification(This) ) 

#define IDocument3D_GetMateConstraint(This)	\
    ( (This)->lpVtbl -> GetMateConstraint(This) ) 

#define IDocument3D_PartCollection(This,refresh)	\
    ( (This)->lpVtbl -> PartCollection(This,refresh) ) 

#define IDocument3D_ZoomPrevNextOrAll(This,type)	\
    ( (This)->lpVtbl -> ZoomPrevNextOrAll(This,type) ) 

#define IDocument3D_RefreshActiveWindow(This)	\
    ( (This)->lpVtbl -> RefreshActiveWindow(This) ) 

#define IDocument3D_CreatePartInAssembly(This,fileName,plane)	\
    ( (This)->lpVtbl -> CreatePartInAssembly(This,fileName,plane) ) 

#define IDocument3D_RebuildDocument(This)	\
    ( (This)->lpVtbl -> RebuildDocument(This) ) 

#define IDocument3D_SaveAsToRasterFormat(This,fileName,par)	\
    ( (This)->lpVtbl -> SaveAsToRasterFormat(This,fileName,par) ) 

#define IDocument3D_SaveAsToAdditionFormat(This,fileName,par)	\
    ( (This)->lpVtbl -> SaveAsToAdditionFormat(This,fileName,par) ) 

#define IDocument3D_RasterFormatParam(This)	\
    ( (This)->lpVtbl -> RasterFormatParam(This) ) 

#define IDocument3D_AdditionFormatParam(This)	\
    ( (This)->lpVtbl -> AdditionFormatParam(This) ) 

#define IDocument3D_SetPerspective(This,val)	\
    ( (This)->lpVtbl -> SetPerspective(This,val) ) 

#define IDocument3D_GetPerspective(This)	\
    ( (This)->lpVtbl -> GetPerspective(This) ) 

#define IDocument3D_SetDrawMode(This,mode)	\
    ( (This)->lpVtbl -> SetDrawMode(This,mode) ) 

#define IDocument3D_GetDrawMode(This)	\
    ( (This)->lpVtbl -> GetDrawMode(This) ) 

#define IDocument3D_GetViewProjectionCollection(This)	\
    ( (This)->lpVtbl -> GetViewProjectionCollection(This) ) 

#define IDocument3D_DeleteObject(This,obj)	\
    ( (This)->lpVtbl -> DeleteObject(This,obj) ) 

#define IDocument3D_GetSelectionMng(This)	\
    ( (This)->lpVtbl -> GetSelectionMng(This) ) 

#define IDocument3D_GetChooseMng(This)	\
    ( (This)->lpVtbl -> GetChooseMng(This) ) 

#define IDocument3D_GetObjectType(This,obj)	\
    ( (This)->lpVtbl -> GetObjectType(This,obj) ) 

#define IDocument3D_SaveAsToUncompressedRasterFormat(This,fileName,par)	\
    ( (This)->lpVtbl -> SaveAsToUncompressedRasterFormat(This,fileName,par) ) 

#define IDocument3D_AddImportedSurfaces(This,fileName,together)	\
    ( (This)->lpVtbl -> AddImportedSurfaces(This,fileName,together) ) 

#define IDocument3D_SetHideAllPlanes(This,val)	\
    ( (This)->lpVtbl -> SetHideAllPlanes(This,val) ) 

#define IDocument3D_GetHideAllPlanes(This)	\
    ( (This)->lpVtbl -> GetHideAllPlanes(This) ) 

#define IDocument3D_SetHideAllAxis(This,val)	\
    ( (This)->lpVtbl -> SetHideAllAxis(This,val) ) 

#define IDocument3D_GetHideAllAxis(This)	\
    ( (This)->lpVtbl -> GetHideAllAxis(This) ) 

#define IDocument3D_SetHideAllSketches(This,val)	\
    ( (This)->lpVtbl -> SetHideAllSketches(This,val) ) 

#define IDocument3D_GetHideAllSketches(This)	\
    ( (This)->lpVtbl -> GetHideAllSketches(This) ) 

#define IDocument3D_SetHideAllPlaces(This,val)	\
    ( (This)->lpVtbl -> SetHideAllPlaces(This,val) ) 

#define IDocument3D_GetHideAllPlaces(This)	\
    ( (This)->lpVtbl -> GetHideAllPlaces(This) ) 

#define IDocument3D_SetHideAllSurfaces(This,val)	\
    ( (This)->lpVtbl -> SetHideAllSurfaces(This,val) ) 

#define IDocument3D_GetHideAllSurfaces(This)	\
    ( (This)->lpVtbl -> GetHideAllSurfaces(This) ) 

#define IDocument3D_SetHideAllThreads(This,val)	\
    ( (This)->lpVtbl -> SetHideAllThreads(This,val) ) 

#define IDocument3D_GetHideAllThreads(This)	\
    ( (This)->lpVtbl -> GetHideAllThreads(This) ) 

#define IDocument3D_AttributeCollection(This,key1,key2,key3,key4,numb,pObj)	\
    ( (This)->lpVtbl -> AttributeCollection(This,key1,key2,key3,key4,numb,pObj) ) 

#define IDocument3D_FeatureCollection(This,key1,key2,key3,key4,numb,objType)	\
    ( (This)->lpVtbl -> FeatureCollection(This,key1,key2,key3,key4,numb,objType) ) 

#define IDocument3D_SetPartFromFileEx(This,fileName,part,externalFile,redraw)	\
    ( (This)->lpVtbl -> SetPartFromFileEx(This,fileName,part,externalFile,redraw) ) 

#define IDocument3D_ComponentPositioner(This)	\
    ( (This)->lpVtbl -> ComponentPositioner(This) ) 

#define IDocument3D_DefaultPlacement(This)	\
    ( (This)->lpVtbl -> DefaultPlacement(This) ) 

#define IDocument3D_SetShadedWireframe(This,val)	\
    ( (This)->lpVtbl -> SetShadedWireframe(This,val) ) 

#define IDocument3D_GetShadedWireframe(This)	\
    ( (This)->lpVtbl -> GetShadedWireframe(This) ) 

#define IDocument3D_GetEditMacroObject(This)	\
    ( (This)->lpVtbl -> GetEditMacroObject(This) ) 

#define IDocument3D_SaveAsEx(This,fileName,saveMode)	\
    ( (This)->lpVtbl -> SaveAsEx(This,fileName,saveMode) ) 

#define IDocument3D_GetInterface(This,o3dType)	\
    ( (This)->lpVtbl -> GetInterface(This,o3dType) ) 

#define IDocument3D_GetDismantleMode(This)	\
    ( (This)->lpVtbl -> GetDismantleMode(This) ) 

#define IDocument3D_SetDismantleMode(This,val)	\
    ( (This)->lpVtbl -> SetDismantleMode(This,val) ) 

#define IDocument3D_SetHideAllCurves(This,val)	\
    ( (This)->lpVtbl -> SetHideAllCurves(This,val) ) 

#define IDocument3D_GetHideAllCurves(This)	\
    ( (This)->lpVtbl -> GetHideAllCurves(This) ) 

#define IDocument3D_SetHideAllControlPoints(This,val)	\
    ( (This)->lpVtbl -> SetHideAllControlPoints(This,val) ) 

#define IDocument3D_GetHideAllControlPoints(This)	\
    ( (This)->lpVtbl -> GetHideAllControlPoints(This) ) 

#define IDocument3D_CopyPart(This,sourcePart,newPlacement)	\
    ( (This)->lpVtbl -> CopyPart(This,sourcePart,newPlacement) ) 

#define IDocument3D_GetTreeNeedRebuild(This)	\
    ( (This)->lpVtbl -> GetTreeNeedRebuild(This) ) 

#define IDocument3D_SetTreeNeedRebuild(This,val)	\
    ( (This)->lpVtbl -> SetTreeNeedRebuild(This,val) ) 

#define IDocument3D_UserSelectEntityEx(This,defSelectObject,fnFilter,prompt,processParam)	\
    ( (This)->lpVtbl -> UserSelectEntityEx(This,defSelectObject,fnFilter,prompt,processParam) ) 

#define IDocument3D_PlaceFeatureAfter(This,obj,afterObj)	\
    ( (This)->lpVtbl -> PlaceFeatureAfter(This,obj,afterObj) ) 

#define IDocument3D_SetRollBackFeature(This,obj)	\
    ( (This)->lpVtbl -> SetRollBackFeature(This,obj) ) 

#define IDocument3D_GetRollBackFeature(This)	\
    ( (This)->lpVtbl -> GetRollBackFeature(This) ) 

#define IDocument3D_SetEnableRollBackFeaturesInCollections(This,val)	\
    ( (This)->lpVtbl -> SetEnableRollBackFeaturesInCollections(This,val) ) 

#define IDocument3D_GetEnableRollBackFeaturesInCollections(This)	\
    ( (This)->lpVtbl -> GetEnableRollBackFeaturesInCollections(This) ) 

#define IDocument3D_ExcludeFeaturesAfter(This,obj,exclude)	\
    ( (This)->lpVtbl -> ExcludeFeaturesAfter(This,obj,exclude) ) 

#define IDocument3D_GetHideAllDimensions(This)	\
    ( (This)->lpVtbl -> GetHideAllDimensions(This) ) 

#define IDocument3D_SetHideAllDimensions(This,val)	\
    ( (This)->lpVtbl -> SetHideAllDimensions(This,val) ) 

#define IDocument3D_GetHideAllDesignations(This)	\
    ( (This)->lpVtbl -> GetHideAllDesignations(This) ) 

#define IDocument3D_SetHideAllDesignations(This,val)	\
    ( (This)->lpVtbl -> SetHideAllDesignations(This,val) ) 

#define IDocument3D_GetHideAllAuxiliaryGeom(This)	\
    ( (This)->lpVtbl -> GetHideAllAuxiliaryGeom(This) ) 

#define IDocument3D_SetHideAllAuxiliaryGeom(This,val)	\
    ( (This)->lpVtbl -> SetHideAllAuxiliaryGeom(This,val) ) 

#define IDocument3D_GetHideInComponentsMode(This)	\
    ( (This)->lpVtbl -> GetHideInComponentsMode(This) ) 

#define IDocument3D_SetHideInComponentsMode(This,val)	\
    ( (This)->lpVtbl -> SetHideInComponentsMode(This,val) ) 

#define IDocument3D_GetDocument3DNotifyResult(This)	\
    ( (This)->lpVtbl -> GetDocument3DNotifyResult(This) ) 

#define IDocument3D_GetReference(This)	\
    ( (This)->lpVtbl -> GetReference(This) ) 

#define IDocument3D_GetWindowNeedRebuild(This)	\
    ( (This)->lpVtbl -> GetWindowNeedRebuild(This) ) 

#define IDocument3D_SetWindowNeedRebuild(This,val)	\
    ( (This)->lpVtbl -> SetWindowNeedRebuild(This,val) ) 

#define IDocument3D_GetHideLayoutGeometry(This)	\
    ( (This)->lpVtbl -> GetHideLayoutGeometry(This) ) 

#define IDocument3D_SetHideLayoutGeometry(This,val)	\
    ( (This)->lpVtbl -> SetHideLayoutGeometry(This,val) ) 

#define IDocument3D_RunTakeCreateObjectProc(This,processType,takeObject,needCreateTakeObj,lostTakeObj)	\
    ( (This)->lpVtbl -> RunTakeCreateObjectProc(This,processType,takeObject,needCreateTakeObj,lostTakeObj) ) 

#define IDocument3D_LoadFromAdditionFormat(This,fileName,par)	\
    ( (This)->lpVtbl -> LoadFromAdditionFormat(This,fileName,par) ) 

#define IDocument3D_GetLastFeature(This)	\
    ( (This)->lpVtbl -> GetLastFeature(This) ) 

#define IDocument3D_GetMatesMultiCreatedMode(This)	\
    ( (This)->lpVtbl -> GetMatesMultiCreatedMode(This) ) 

#define IDocument3D_SetMatesMultiCreatedMode(This,val)	\
    ( (This)->lpVtbl -> SetMatesMultiCreatedMode(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocument3D_INTERFACE_DEFINED__ */


#ifndef __IPart_INTERFACE_DEFINED__
#define __IPart_INTERFACE_DEFINED__

/* interface IPart */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPart,0x7AA0E540,0x0300,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0300-11D4-A30E-00C026EE094F")
    IPart : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetName( 
            LPOLESTR name) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetMarking( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMarking( 
            LPOLESTR marking) = 0;
        
        virtual /* [helpstring] */ LPCOLORPARAM STDMETHODCALLTYPE ColorParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAdvancedColor( 
            COLORREF *color,
            double *ambient,
            double *diffuse,
            double *specularity,
            double *shininess,
            double *transparency,
            double *emission) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAdvancedColor( 
            COLORREF color,
            double ambient,
            double diffuse,
            double specularity,
            double shininess,
            double transparency,
            double emission) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetUserParam( 
            void *value,
            long size,
            LPOLESTR fileName,
            LPOLESTR libName,
            long command) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUserParamSize( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetUserParam( 
            void *value,
            long size) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDefaultEntity( 
            short objType) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE EntityCollection( 
            short objType) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE NewEntity( 
            short objType) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlacement( 
            LPPLACEMENT p) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UpdatePlacement( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLECOLLECTION STDMETHODCALLTYPE VariableCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RebuildModel( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetStandardComponent( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStandardComponent( 
            BOOL f) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMateConstraintObjects( 
            LPENTITYCOLLECTION collection) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE GetMateConstraintObjects( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFixedComponent( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFixedComponent( 
            BOOL f) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetFileName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFileName( 
            LPOLESTR name) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsDetail( void) = 0;
        
        virtual /* [helpstring] */ LPDOCUMENT3D STDMETHODCALLTYPE BeginEdit( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE EndEdit( 
            BOOL rebuild_) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE GetPart( 
            long type) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetMass( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE PutStorage( 
            LPOLESTR str,
            BOOL type,
            BOOL mirror) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExcluded( 
            BOOL exclude) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetExcluded( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetMaterial( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDensity( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMaterial( 
            LPOLESTR name,
            double density) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetUserLibraryFileName( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetUserLibraryName( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUserLibraryCommand( void) = 0;
        
        virtual /* [helpstring] */ LPBODYCOLLECTION STDMETHODCALLTYPE BodyCollection( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetFeature( void) = 0;
        
        virtual /* [helpstring] */ LPMASSINERTIAPARAM STDMETHODCALLTYPE CalcMassInertiaProperties( 
            unsigned int bitVector) = 0;
        
        virtual /* [helpstring] */ LPMEASURER STDMETHODCALLTYPE GetMeasurer( void) = 0;
        
        virtual /* [helpstring] */ LPBODY STDMETHODCALLTYPE GetMainBody( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUseColor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetUseColor( 
            long useColor) = 0;
        
        virtual /* [helpstring] */ IObject3DNotifyResult *STDMETHODCALLTYPE GetObject3DNotifyResult( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UpdatePlacementEx( 
            BOOL redraw) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RebuildModelEx( 
            BOOL redraw) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNeedRebuild( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetNeedRebuild( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE CurveIntersection( 
            LPCURVE3D curve,
            LPPARTCOLLECTION parts,
            LPFACECOLLECTION faces,
            LPCOORDINATE3DCOLLECTION points) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE TransformPoint( 
            /* [out][in] */ double *x,
            /* [out][in] */ double *y,
            /* [out][in] */ double *z,
            /* [in] */ LPPART part1) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHidden( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHidden( 
            BOOL _hidden) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObject( 
            long index,
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetObject( 
            long index) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCountObj( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ClearAllObj( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE CreateOrEditObject( 
            short objType,
            LPENTITY editObj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDoubleClickEditOff( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDoubleClickEditOff( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE TransformPoints( 
            /* [out][in] */ VARIANT *poins,
            LPPART part1) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSummMatrix( 
            VARIANT *matrix,
            LPPART part1) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMultiBodyParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSourceVariables( 
            BOOL rebuild_) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetMathematic3D( 
            int type) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGabarit( 
            BOOL full,
            BOOL customizable,
            double *x1,
            double *y1,
            double *z1,
            double *x2,
            double *y2,
            double *z2) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetObjectByName( 
            LPOLESTR name,
            short objType,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPropertyObjectEditable( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPropertyObjectEditable( 
            BOOL PVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPartVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPart * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPart * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPart * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetName )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetName )( 
            IPart * This,
            LPOLESTR name);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetMarking )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMarking )( 
            IPart * This,
            LPOLESTR marking);
        
        /* [helpstring] */ LPCOLORPARAM ( STDMETHODCALLTYPE *ColorParam )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAdvancedColor )( 
            IPart * This,
            COLORREF *color,
            double *ambient,
            double *diffuse,
            double *specularity,
            double *shininess,
            double *transparency,
            double *emission);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAdvancedColor )( 
            IPart * This,
            COLORREF color,
            double ambient,
            double diffuse,
            double specularity,
            double shininess,
            double transparency,
            double emission);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Update )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetUserParam )( 
            IPart * This,
            void *value,
            long size,
            LPOLESTR fileName,
            LPOLESTR libName,
            long command);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUserParamSize )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetUserParam )( 
            IPart * This,
            void *value,
            long size);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDefaultEntity )( 
            IPart * This,
            short objType);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *EntityCollection )( 
            IPart * This,
            short objType);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *NewEntity )( 
            IPart * This,
            short objType);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlacement )( 
            IPart * This,
            LPPLACEMENT p);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UpdatePlacement )( 
            IPart * This);
        
        /* [helpstring] */ LPVARIABLECOLLECTION ( STDMETHODCALLTYPE *VariableCollection )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RebuildModel )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetStandardComponent )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStandardComponent )( 
            IPart * This,
            BOOL f);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMateConstraintObjects )( 
            IPart * This,
            LPENTITYCOLLECTION collection);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *GetMateConstraintObjects )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFixedComponent )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFixedComponent )( 
            IPart * This,
            BOOL f);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetFileName )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFileName )( 
            IPart * This,
            LPOLESTR name);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsDetail )( 
            IPart * This);
        
        /* [helpstring] */ LPDOCUMENT3D ( STDMETHODCALLTYPE *BeginEdit )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *EndEdit )( 
            IPart * This,
            BOOL rebuild_);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *GetPart )( 
            IPart * This,
            long type);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetMass )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *PutStorage )( 
            IPart * This,
            LPOLESTR str,
            BOOL type,
            BOOL mirror);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExcluded )( 
            IPart * This,
            BOOL exclude);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetExcluded )( 
            IPart * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetMaterial )( 
            IPart * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDensity )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMaterial )( 
            IPart * This,
            LPOLESTR name,
            double density);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetUserLibraryFileName )( 
            IPart * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetUserLibraryName )( 
            IPart * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUserLibraryCommand )( 
            IPart * This);
        
        /* [helpstring] */ LPBODYCOLLECTION ( STDMETHODCALLTYPE *BodyCollection )( 
            IPart * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetFeature )( 
            IPart * This);
        
        /* [helpstring] */ LPMASSINERTIAPARAM ( STDMETHODCALLTYPE *CalcMassInertiaProperties )( 
            IPart * This,
            unsigned int bitVector);
        
        /* [helpstring] */ LPMEASURER ( STDMETHODCALLTYPE *GetMeasurer )( 
            IPart * This);
        
        /* [helpstring] */ LPBODY ( STDMETHODCALLTYPE *GetMainBody )( 
            IPart * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUseColor )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetUseColor )( 
            IPart * This,
            long useColor);
        
        /* [helpstring] */ IObject3DNotifyResult *( STDMETHODCALLTYPE *GetObject3DNotifyResult )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UpdatePlacementEx )( 
            IPart * This,
            BOOL redraw);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RebuildModelEx )( 
            IPart * This,
            BOOL redraw);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNeedRebuild )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetNeedRebuild )( 
            IPart * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *CurveIntersection )( 
            IPart * This,
            LPCURVE3D curve,
            LPPARTCOLLECTION parts,
            LPFACECOLLECTION faces,
            LPCOORDINATE3DCOLLECTION points);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *TransformPoint )( 
            IPart * This,
            /* [out][in] */ double *x,
            /* [out][in] */ double *y,
            /* [out][in] */ double *z,
            /* [in] */ LPPART part1);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHidden )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHidden )( 
            IPart * This,
            BOOL _hidden);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObject )( 
            IPart * This,
            long index,
            LPUNKNOWN obj);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetObject )( 
            IPart * This,
            long index);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCountObj )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ClearAllObj )( 
            IPart * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *CreateOrEditObject )( 
            IPart * This,
            short objType,
            LPENTITY editObj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDoubleClickEditOff )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDoubleClickEditOff )( 
            IPart * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *TransformPoints )( 
            IPart * This,
            /* [out][in] */ VARIANT *poins,
            LPPART part1);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSummMatrix )( 
            IPart * This,
            VARIANT *matrix,
            LPPART part1);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMultiBodyParts )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSourceVariables )( 
            IPart * This,
            BOOL rebuild_);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetMathematic3D )( 
            IPart * This,
            int type);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGabarit )( 
            IPart * This,
            BOOL full,
            BOOL customizable,
            double *x1,
            double *y1,
            double *z1,
            double *x2,
            double *y2,
            double *z2);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetObjectByName )( 
            IPart * This,
            LPOLESTR name,
            short objType,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPropertyObjectEditable )( 
            IPart * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPropertyObjectEditable )( 
            IPart * This,
            BOOL PVal);
        
        END_INTERFACE
    } IPartVtbl;

    interface IPart
    {
        CONST_VTBL struct IPartVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPart_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPart_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPart_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPart_GetName(This)	\
    ( (This)->lpVtbl -> GetName(This) ) 

#define IPart_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IPart_GetMarking(This)	\
    ( (This)->lpVtbl -> GetMarking(This) ) 

#define IPart_SetMarking(This,marking)	\
    ( (This)->lpVtbl -> SetMarking(This,marking) ) 

#define IPart_ColorParam(This)	\
    ( (This)->lpVtbl -> ColorParam(This) ) 

#define IPart_GetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission)	\
    ( (This)->lpVtbl -> GetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission) ) 

#define IPart_SetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission)	\
    ( (This)->lpVtbl -> SetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission) ) 

#define IPart_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IPart_SetUserParam(This,value,size,fileName,libName,command)	\
    ( (This)->lpVtbl -> SetUserParam(This,value,size,fileName,libName,command) ) 

#define IPart_GetUserParamSize(This)	\
    ( (This)->lpVtbl -> GetUserParamSize(This) ) 

#define IPart_GetUserParam(This,value,size)	\
    ( (This)->lpVtbl -> GetUserParam(This,value,size) ) 

#define IPart_GetDefaultEntity(This,objType)	\
    ( (This)->lpVtbl -> GetDefaultEntity(This,objType) ) 

#define IPart_EntityCollection(This,objType)	\
    ( (This)->lpVtbl -> EntityCollection(This,objType) ) 

#define IPart_NewEntity(This,objType)	\
    ( (This)->lpVtbl -> NewEntity(This,objType) ) 

#define IPart_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IPart_SetPlacement(This,p)	\
    ( (This)->lpVtbl -> SetPlacement(This,p) ) 

#define IPart_UpdatePlacement(This)	\
    ( (This)->lpVtbl -> UpdatePlacement(This) ) 

#define IPart_VariableCollection(This)	\
    ( (This)->lpVtbl -> VariableCollection(This) ) 

#define IPart_RebuildModel(This)	\
    ( (This)->lpVtbl -> RebuildModel(This) ) 

#define IPart_GetStandardComponent(This)	\
    ( (This)->lpVtbl -> GetStandardComponent(This) ) 

#define IPart_SetStandardComponent(This,f)	\
    ( (This)->lpVtbl -> SetStandardComponent(This,f) ) 

#define IPart_SetMateConstraintObjects(This,collection)	\
    ( (This)->lpVtbl -> SetMateConstraintObjects(This,collection) ) 

#define IPart_GetMateConstraintObjects(This)	\
    ( (This)->lpVtbl -> GetMateConstraintObjects(This) ) 

#define IPart_GetFixedComponent(This)	\
    ( (This)->lpVtbl -> GetFixedComponent(This) ) 

#define IPart_SetFixedComponent(This,f)	\
    ( (This)->lpVtbl -> SetFixedComponent(This,f) ) 

#define IPart_GetFileName(This)	\
    ( (This)->lpVtbl -> GetFileName(This) ) 

#define IPart_SetFileName(This,name)	\
    ( (This)->lpVtbl -> SetFileName(This,name) ) 

#define IPart_IsDetail(This)	\
    ( (This)->lpVtbl -> IsDetail(This) ) 

#define IPart_BeginEdit(This)	\
    ( (This)->lpVtbl -> BeginEdit(This) ) 

#define IPart_EndEdit(This,rebuild_)	\
    ( (This)->lpVtbl -> EndEdit(This,rebuild_) ) 

#define IPart_GetPart(This,type)	\
    ( (This)->lpVtbl -> GetPart(This,type) ) 

#define IPart_GetMass(This)	\
    ( (This)->lpVtbl -> GetMass(This) ) 

#define IPart_PutStorage(This,str,type,mirror)	\
    ( (This)->lpVtbl -> PutStorage(This,str,type,mirror) ) 

#define IPart_SetExcluded(This,exclude)	\
    ( (This)->lpVtbl -> SetExcluded(This,exclude) ) 

#define IPart_GetExcluded(This)	\
    ( (This)->lpVtbl -> GetExcluded(This) ) 

#define IPart_GetMaterial(This)	\
    ( (This)->lpVtbl -> GetMaterial(This) ) 

#define IPart_GetDensity(This)	\
    ( (This)->lpVtbl -> GetDensity(This) ) 

#define IPart_SetMaterial(This,name,density)	\
    ( (This)->lpVtbl -> SetMaterial(This,name,density) ) 

#define IPart_GetUserLibraryFileName(This)	\
    ( (This)->lpVtbl -> GetUserLibraryFileName(This) ) 

#define IPart_GetUserLibraryName(This)	\
    ( (This)->lpVtbl -> GetUserLibraryName(This) ) 

#define IPart_GetUserLibraryCommand(This)	\
    ( (This)->lpVtbl -> GetUserLibraryCommand(This) ) 

#define IPart_BodyCollection(This)	\
    ( (This)->lpVtbl -> BodyCollection(This) ) 

#define IPart_GetFeature(This)	\
    ( (This)->lpVtbl -> GetFeature(This) ) 

#define IPart_CalcMassInertiaProperties(This,bitVector)	\
    ( (This)->lpVtbl -> CalcMassInertiaProperties(This,bitVector) ) 

#define IPart_GetMeasurer(This)	\
    ( (This)->lpVtbl -> GetMeasurer(This) ) 

#define IPart_GetMainBody(This)	\
    ( (This)->lpVtbl -> GetMainBody(This) ) 

#define IPart_GetUseColor(This)	\
    ( (This)->lpVtbl -> GetUseColor(This) ) 

#define IPart_SetUseColor(This,useColor)	\
    ( (This)->lpVtbl -> SetUseColor(This,useColor) ) 

#define IPart_GetObject3DNotifyResult(This)	\
    ( (This)->lpVtbl -> GetObject3DNotifyResult(This) ) 

#define IPart_UpdatePlacementEx(This,redraw)	\
    ( (This)->lpVtbl -> UpdatePlacementEx(This,redraw) ) 

#define IPart_RebuildModelEx(This,redraw)	\
    ( (This)->lpVtbl -> RebuildModelEx(This,redraw) ) 

#define IPart_GetNeedRebuild(This)	\
    ( (This)->lpVtbl -> GetNeedRebuild(This) ) 

#define IPart_SetNeedRebuild(This,val)	\
    ( (This)->lpVtbl -> SetNeedRebuild(This,val) ) 

#define IPart_CurveIntersection(This,curve,parts,faces,points)	\
    ( (This)->lpVtbl -> CurveIntersection(This,curve,parts,faces,points) ) 

#define IPart_TransformPoint(This,x,y,z,part1)	\
    ( (This)->lpVtbl -> TransformPoint(This,x,y,z,part1) ) 

#define IPart_GetHidden(This)	\
    ( (This)->lpVtbl -> GetHidden(This) ) 

#define IPart_SetHidden(This,_hidden)	\
    ( (This)->lpVtbl -> SetHidden(This,_hidden) ) 

#define IPart_SetObject(This,index,obj)	\
    ( (This)->lpVtbl -> SetObject(This,index,obj) ) 

#define IPart_GetObject(This,index)	\
    ( (This)->lpVtbl -> GetObject(This,index) ) 

#define IPart_GetCountObj(This)	\
    ( (This)->lpVtbl -> GetCountObj(This) ) 

#define IPart_ClearAllObj(This)	\
    ( (This)->lpVtbl -> ClearAllObj(This) ) 

#define IPart_CreateOrEditObject(This,objType,editObj)	\
    ( (This)->lpVtbl -> CreateOrEditObject(This,objType,editObj) ) 

#define IPart_GetDoubleClickEditOff(This)	\
    ( (This)->lpVtbl -> GetDoubleClickEditOff(This) ) 

#define IPart_SetDoubleClickEditOff(This,val)	\
    ( (This)->lpVtbl -> SetDoubleClickEditOff(This,val) ) 

#define IPart_TransformPoints(This,poins,part1)	\
    ( (This)->lpVtbl -> TransformPoints(This,poins,part1) ) 

#define IPart_GetSummMatrix(This,matrix,part1)	\
    ( (This)->lpVtbl -> GetSummMatrix(This,matrix,part1) ) 

#define IPart_GetMultiBodyParts(This)	\
    ( (This)->lpVtbl -> GetMultiBodyParts(This) ) 

#define IPart_SetSourceVariables(This,rebuild_)	\
    ( (This)->lpVtbl -> SetSourceVariables(This,rebuild_) ) 

#define IPart_GetMathematic3D(This,type)	\
    ( (This)->lpVtbl -> GetMathematic3D(This,type) ) 

#define IPart_GetGabarit(This,full,customizable,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> GetGabarit(This,full,customizable,x1,y1,z1,x2,y2,z2) ) 

#define IPart_GetObjectByName(This,name,objType,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetObjectByName(This,name,objType,testFullName,testIgnoreCase) ) 

#define IPart_GetPropertyObjectEditable(This)	\
    ( (This)->lpVtbl -> GetPropertyObjectEditable(This) ) 

#define IPart_SetPropertyObjectEditable(This,PVal)	\
    ( (This)->lpVtbl -> SetPropertyObjectEditable(This,PVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPart_INTERFACE_DEFINED__ */


#ifndef __IEntity_INTERFACE_DEFINED__
#define __IEntity_INTERFACE_DEFINED__

/* interface IEntity */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEntity,0x7AA0E540,0x0301,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0301-11D4-A30E-00C026EE094F")
    IEntity : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHidden( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHidden( 
            BOOL _hidden) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetName( 
            LPOLESTR name) = 0;
        
        virtual /* [helpstring] */ LPCOLORPARAM STDMETHODCALLTYPE ColorParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAdvancedColor( 
            COLORREF *color,
            double *ambient,
            double *diffuse,
            double *specularity,
            double *shininess,
            double *transparency,
            double *emission) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAdvancedColor( 
            COLORREF color,
            double ambient,
            double diffuse,
            double specularity,
            double shininess,
            double transparency,
            double emission) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsIt( 
            short objType) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCreated( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetDefinition( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Create( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Update( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE GetParent( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExcluded( 
            BOOL exclude) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetExcluded( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetFeature( void) = 0;
        
        virtual /* [helpstring] */ LPBODYCOLLECTION STDMETHODCALLTYPE BodyCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMultiBodyParts( void) = 0;
        
        virtual /* [helpstring] */ LPBODYPARTS STDMETHODCALLTYPE GetBodyParts( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUseColor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetUseColor( 
            long useColor) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEntityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEntity * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEntity * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHidden )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHidden )( 
            IEntity * This,
            BOOL _hidden);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetName )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetName )( 
            IEntity * This,
            LPOLESTR name);
        
        /* [helpstring] */ LPCOLORPARAM ( STDMETHODCALLTYPE *ColorParam )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAdvancedColor )( 
            IEntity * This,
            COLORREF *color,
            double *ambient,
            double *diffuse,
            double *specularity,
            double *shininess,
            double *transparency,
            double *emission);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAdvancedColor )( 
            IEntity * This,
            COLORREF color,
            double ambient,
            double diffuse,
            double specularity,
            double shininess,
            double transparency,
            double emission);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsIt )( 
            IEntity * This,
            short objType);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetType )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCreated )( 
            IEntity * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetDefinition )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Create )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Update )( 
            IEntity * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *GetParent )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExcluded )( 
            IEntity * This,
            BOOL exclude);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetExcluded )( 
            IEntity * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetFeature )( 
            IEntity * This);
        
        /* [helpstring] */ LPBODYCOLLECTION ( STDMETHODCALLTYPE *BodyCollection )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMultiBodyParts )( 
            IEntity * This);
        
        /* [helpstring] */ LPBODYPARTS ( STDMETHODCALLTYPE *GetBodyParts )( 
            IEntity * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUseColor )( 
            IEntity * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetUseColor )( 
            IEntity * This,
            long useColor);
        
        END_INTERFACE
    } IEntityVtbl;

    interface IEntity
    {
        CONST_VTBL struct IEntityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEntity_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEntity_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEntity_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEntity_GetHidden(This)	\
    ( (This)->lpVtbl -> GetHidden(This) ) 

#define IEntity_SetHidden(This,_hidden)	\
    ( (This)->lpVtbl -> SetHidden(This,_hidden) ) 

#define IEntity_GetName(This)	\
    ( (This)->lpVtbl -> GetName(This) ) 

#define IEntity_SetName(This,name)	\
    ( (This)->lpVtbl -> SetName(This,name) ) 

#define IEntity_ColorParam(This)	\
    ( (This)->lpVtbl -> ColorParam(This) ) 

#define IEntity_GetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission)	\
    ( (This)->lpVtbl -> GetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission) ) 

#define IEntity_SetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission)	\
    ( (This)->lpVtbl -> SetAdvancedColor(This,color,ambient,diffuse,specularity,shininess,transparency,emission) ) 

#define IEntity_IsIt(This,objType)	\
    ( (This)->lpVtbl -> IsIt(This,objType) ) 

#define IEntity_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IEntity_IsCreated(This)	\
    ( (This)->lpVtbl -> IsCreated(This) ) 

#define IEntity_GetDefinition(This)	\
    ( (This)->lpVtbl -> GetDefinition(This) ) 

#define IEntity_Create(This)	\
    ( (This)->lpVtbl -> Create(This) ) 

#define IEntity_Update(This)	\
    ( (This)->lpVtbl -> Update(This) ) 

#define IEntity_GetParent(This)	\
    ( (This)->lpVtbl -> GetParent(This) ) 

#define IEntity_SetExcluded(This,exclude)	\
    ( (This)->lpVtbl -> SetExcluded(This,exclude) ) 

#define IEntity_GetExcluded(This)	\
    ( (This)->lpVtbl -> GetExcluded(This) ) 

#define IEntity_GetFeature(This)	\
    ( (This)->lpVtbl -> GetFeature(This) ) 

#define IEntity_BodyCollection(This)	\
    ( (This)->lpVtbl -> BodyCollection(This) ) 

#define IEntity_GetMultiBodyParts(This)	\
    ( (This)->lpVtbl -> GetMultiBodyParts(This) ) 

#define IEntity_GetBodyParts(This)	\
    ( (This)->lpVtbl -> GetBodyParts(This) ) 

#define IEntity_GetUseColor(This)	\
    ( (This)->lpVtbl -> GetUseColor(This) ) 

#define IEntity_SetUseColor(This,useColor)	\
    ( (This)->lpVtbl -> SetUseColor(This,useColor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEntity_INTERFACE_DEFINED__ */


#ifndef __IColorParam_INTERFACE_DEFINED__
#define __IColorParam_INTERFACE_DEFINED__

/* interface IColorParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IColorParam,0x7AA0E540,0x0305,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0305-11D4-A30E-00C026EE094F")
    IColorParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ COLORREF STDMETHODCALLTYPE GetColor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetColor( 
            COLORREF val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAmbient( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAmbient( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDiffuse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDiffuse( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetSpecularity( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSpecularity( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetShininess( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetShininess( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetTransparency( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTransparency( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetEmission( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEmission( 
            double val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUseColor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetUseColor( 
            long useColor) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IColorParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IColorParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IColorParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IColorParam * This);
        
        /* [helpstring] */ COLORREF ( STDMETHODCALLTYPE *GetColor )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetColor )( 
            IColorParam * This,
            COLORREF val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAmbient )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAmbient )( 
            IColorParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDiffuse )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDiffuse )( 
            IColorParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetSpecularity )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSpecularity )( 
            IColorParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetShininess )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetShininess )( 
            IColorParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetTransparency )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTransparency )( 
            IColorParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetEmission )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEmission )( 
            IColorParam * This,
            double val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUseColor )( 
            IColorParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetUseColor )( 
            IColorParam * This,
            long useColor);
        
        END_INTERFACE
    } IColorParamVtbl;

    interface IColorParam
    {
        CONST_VTBL struct IColorParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IColorParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IColorParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IColorParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IColorParam_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IColorParam_GetColor(This)	\
    ( (This)->lpVtbl -> GetColor(This) ) 

#define IColorParam_SetColor(This,val)	\
    ( (This)->lpVtbl -> SetColor(This,val) ) 

#define IColorParam_GetAmbient(This)	\
    ( (This)->lpVtbl -> GetAmbient(This) ) 

#define IColorParam_SetAmbient(This,val)	\
    ( (This)->lpVtbl -> SetAmbient(This,val) ) 

#define IColorParam_GetDiffuse(This)	\
    ( (This)->lpVtbl -> GetDiffuse(This) ) 

#define IColorParam_SetDiffuse(This,val)	\
    ( (This)->lpVtbl -> SetDiffuse(This,val) ) 

#define IColorParam_GetSpecularity(This)	\
    ( (This)->lpVtbl -> GetSpecularity(This) ) 

#define IColorParam_SetSpecularity(This,val)	\
    ( (This)->lpVtbl -> SetSpecularity(This,val) ) 

#define IColorParam_GetShininess(This)	\
    ( (This)->lpVtbl -> GetShininess(This) ) 

#define IColorParam_SetShininess(This,val)	\
    ( (This)->lpVtbl -> SetShininess(This,val) ) 

#define IColorParam_GetTransparency(This)	\
    ( (This)->lpVtbl -> GetTransparency(This) ) 

#define IColorParam_SetTransparency(This,val)	\
    ( (This)->lpVtbl -> SetTransparency(This,val) ) 

#define IColorParam_GetEmission(This)	\
    ( (This)->lpVtbl -> GetEmission(This) ) 

#define IColorParam_SetEmission(This,val)	\
    ( (This)->lpVtbl -> SetEmission(This,val) ) 

#define IColorParam_GetUseColor(This)	\
    ( (This)->lpVtbl -> GetUseColor(This) ) 

#define IColorParam_SetUseColor(This,useColor)	\
    ( (This)->lpVtbl -> SetUseColor(This,useColor) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IColorParam_INTERFACE_DEFINED__ */


#ifndef __ISpecification3D_INTERFACE_DEFINED__
#define __ISpecification3D_INTERFACE_DEFINED__

/* interface ISpecification3D */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISpecification3D,0x7AA0E540,0x0315,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0315-11D4-A30E-00C026EE094F")
    ISpecification3D : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SpcIncludePart( 
            LPPART part,
            BOOL fillTexts) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetSpcObjForGeomWithLimit( 
            LPOLESTR nameLib,
            long numb,
            LPPART part,
            short first,
            short section,
            double attrTypeNumb) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE D3GetSpcObjGeometry( 
            long spcObj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISpecification3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISpecification3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISpecification3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISpecification3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SpcIncludePart )( 
            ISpecification3D * This,
            LPPART part,
            BOOL fillTexts);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetSpcObjForGeomWithLimit )( 
            ISpecification3D * This,
            LPOLESTR nameLib,
            long numb,
            LPPART part,
            short first,
            short section,
            double attrTypeNumb);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *D3GetSpcObjGeometry )( 
            ISpecification3D * This,
            long spcObj);
        
        END_INTERFACE
    } ISpecification3DVtbl;

    interface ISpecification3D
    {
        CONST_VTBL struct ISpecification3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISpecification3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISpecification3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISpecification3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISpecification3D_SpcIncludePart(This,part,fillTexts)	\
    ( (This)->lpVtbl -> SpcIncludePart(This,part,fillTexts) ) 

#define ISpecification3D_GetSpcObjForGeomWithLimit(This,nameLib,numb,part,first,section,attrTypeNumb)	\
    ( (This)->lpVtbl -> GetSpcObjForGeomWithLimit(This,nameLib,numb,part,first,section,attrTypeNumb) ) 

#define ISpecification3D_D3GetSpcObjGeometry(This,spcObj)	\
    ( (This)->lpVtbl -> D3GetSpcObjGeometry(This,spcObj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISpecification3D_INTERFACE_DEFINED__ */


#ifndef __IPlacement_INTERFACE_DEFINED__
#define __IPlacement_INTERFACE_DEFINED__

/* interface IPlacement */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlacement,0x7AA0E540,0x0310,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0310-11D4-A30E-00C026EE094F")
    IPlacement : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetOrigin( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetOrigin( 
            double x,
            double y,
            double z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAxis( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z,
            /* [in] */ long type) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis( 
            double x,
            double y,
            double z,
            long type) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlacement( 
            LPPLACEMENT p) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxes( 
            double Xx,
            double Xy,
            double Xz,
            double Yx,
            double Yy,
            double Yz) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE PointProjection( 
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [in] */ double ZIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE PointOn( 
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut,
            /* [out] */ double *ZOut) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetVector( 
            /* [in] */ long type,
            /* [out] */ double *X,
            /* [out] */ double *Y,
            /* [out] */ double *Z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetVector( 
            long type,
            double X,
            double Y,
            double Z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE InitByMatrix3D( 
            VARIANT mtr) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMatrix3D( 
            /* [out] */ VARIANT *Result) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Rotate( 
            /* [in] */ double X0,
            /* [in] */ double Y0,
            /* [in] */ double Z0,
            /* [in] */ double AxisZX,
            /* [in] */ double AxisZXY,
            /* [in] */ double AxisZZ,
            /* [in] */ double Angle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlacementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlacement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlacement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlacement * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetOrigin )( 
            IPlacement * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetOrigin )( 
            IPlacement * This,
            double x,
            double y,
            double z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAxis )( 
            IPlacement * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z,
            /* [in] */ long type);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis )( 
            IPlacement * This,
            double x,
            double y,
            double z,
            long type);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlacement )( 
            IPlacement * This,
            LPPLACEMENT p);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxes )( 
            IPlacement * This,
            double Xx,
            double Xy,
            double Xz,
            double Yx,
            double Yy,
            double Yz);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *PointProjection )( 
            IPlacement * This,
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [in] */ double ZIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *PointOn )( 
            IPlacement * This,
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut,
            /* [out] */ double *ZOut);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetVector )( 
            IPlacement * This,
            /* [in] */ long type,
            /* [out] */ double *X,
            /* [out] */ double *Y,
            /* [out] */ double *Z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetVector )( 
            IPlacement * This,
            long type,
            double X,
            double Y,
            double Z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *InitByMatrix3D )( 
            IPlacement * This,
            VARIANT mtr);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMatrix3D )( 
            IPlacement * This,
            /* [out] */ VARIANT *Result);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Rotate )( 
            IPlacement * This,
            /* [in] */ double X0,
            /* [in] */ double Y0,
            /* [in] */ double Z0,
            /* [in] */ double AxisZX,
            /* [in] */ double AxisZXY,
            /* [in] */ double AxisZZ,
            /* [in] */ double Angle);
        
        END_INTERFACE
    } IPlacementVtbl;

    interface IPlacement
    {
        CONST_VTBL struct IPlacementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlacement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlacement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlacement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlacement_GetOrigin(This,x,y,z)	\
    ( (This)->lpVtbl -> GetOrigin(This,x,y,z) ) 

#define IPlacement_SetOrigin(This,x,y,z)	\
    ( (This)->lpVtbl -> SetOrigin(This,x,y,z) ) 

#define IPlacement_GetAxis(This,x,y,z,type)	\
    ( (This)->lpVtbl -> GetAxis(This,x,y,z,type) ) 

#define IPlacement_SetAxis(This,x,y,z,type)	\
    ( (This)->lpVtbl -> SetAxis(This,x,y,z,type) ) 

#define IPlacement_SetPlacement(This,p)	\
    ( (This)->lpVtbl -> SetPlacement(This,p) ) 

#define IPlacement_SetAxes(This,Xx,Xy,Xz,Yx,Yy,Yz)	\
    ( (This)->lpVtbl -> SetAxes(This,Xx,Xy,Xz,Yx,Yy,Yz) ) 

#define IPlacement_PointProjection(This,XIn,YIn,ZIn,XOut,YOut)	\
    ( (This)->lpVtbl -> PointProjection(This,XIn,YIn,ZIn,XOut,YOut) ) 

#define IPlacement_PointOn(This,XIn,YIn,XOut,YOut,ZOut)	\
    ( (This)->lpVtbl -> PointOn(This,XIn,YIn,XOut,YOut,ZOut) ) 

#define IPlacement_GetVector(This,type,X,Y,Z)	\
    ( (This)->lpVtbl -> GetVector(This,type,X,Y,Z) ) 

#define IPlacement_SetVector(This,type,X,Y,Z)	\
    ( (This)->lpVtbl -> SetVector(This,type,X,Y,Z) ) 

#define IPlacement_InitByMatrix3D(This,mtr)	\
    ( (This)->lpVtbl -> InitByMatrix3D(This,mtr) ) 

#define IPlacement_GetMatrix3D(This,Result)	\
    ( (This)->lpVtbl -> GetMatrix3D(This,Result) ) 

#define IPlacement_Rotate(This,X0,Y0,Z0,AxisZX,AxisZXY,AxisZZ,Angle)	\
    ( (This)->lpVtbl -> Rotate(This,X0,Y0,Z0,AxisZX,AxisZXY,AxisZZ,Angle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlacement_INTERFACE_DEFINED__ */


#ifndef __IRequestInfo_INTERFACE_DEFINED__
#define __IRequestInfo_INTERFACE_DEFINED__

/* interface IRequestInfo */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IRequestInfo,0x7AA0E540,0x0313,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0313-11D4-A30E-00C026EE094F")
    IRequestInfo : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetPrompt( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPrompt( 
            LPOLESTR prompt) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE GetEntityCollection( void) = 0;
        
        virtual /* [helpstring] */ void *STDMETHODCALLTYPE GetFilterCallBack( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFilterCallBack( 
            void *callBack) = 0;
        
        virtual /* [helpstring] */ void *STDMETHODCALLTYPE GetCallBack( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCallBack( 
            void *callBack) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetCommandsString( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCommandsString( 
            LPOLESTR menu) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetMenuId( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMenuId( 
            long menuId) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCurrentCommand( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetCursorName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCursorName( 
            LPOLESTR cursor) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCursorId( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCursorId( 
            long cursorId) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetTitle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTitle( 
            LPOLESTR title) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINTCOLLECTION STDMETHODCALLTYPE GetMateConstraintCollection( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE GetIPhantom( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE CreatePhantom( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetProcessParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetProcessParam( 
            LPUNKNOWN param) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetCallBackFeature( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDynamicFiltering( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDynamicFiltering( 
            BOOL f) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCursorText( 
            LPOLESTR text) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetShowCommandWindow( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetShowCommandWindow( 
            BOOL f) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetTakeProcessObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTakeProcessObject( 
            LPUNKNOWN takeObject) = 0;
        
        virtual /* [helpstring] */ void *STDMETHODCALLTYPE GetTakeObjectCallBack( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTakeObjectCallBack( 
            void *callBack) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetSelectionBandMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSelectionBandMode( 
            long f) = 0;
        
        virtual /* [helpstring] */ void *STDMETHODCALLTYPE GetProcessingGroupObjectsCallBack( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetProcessingGroupObjectsCallBack( 
            void *callBack) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObjectsFilter3D( 
            long filterType,
            BOOL newVal) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetObjectsFilter3D( 
            long filterType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRequestInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRequestInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRequestInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRequestInfo * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetPrompt )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPrompt )( 
            IRequestInfo * This,
            LPOLESTR prompt);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IRequestInfo * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *GetEntityCollection )( 
            IRequestInfo * This);
        
        /* [helpstring] */ void *( STDMETHODCALLTYPE *GetFilterCallBack )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFilterCallBack )( 
            IRequestInfo * This,
            void *callBack);
        
        /* [helpstring] */ void *( STDMETHODCALLTYPE *GetCallBack )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCallBack )( 
            IRequestInfo * This,
            void *callBack);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetCommandsString )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCommandsString )( 
            IRequestInfo * This,
            LPOLESTR menu);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetMenuId )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMenuId )( 
            IRequestInfo * This,
            long menuId);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCurrentCommand )( 
            IRequestInfo * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetCursorName )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCursorName )( 
            IRequestInfo * This,
            LPOLESTR cursor);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCursorId )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCursorId )( 
            IRequestInfo * This,
            long cursorId);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetTitle )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTitle )( 
            IRequestInfo * This,
            LPOLESTR title);
        
        /* [helpstring] */ LPMATECONSTRAINTCOLLECTION ( STDMETHODCALLTYPE *GetMateConstraintCollection )( 
            IRequestInfo * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *GetIPhantom )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *CreatePhantom )( 
            IRequestInfo * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetProcessParam )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetProcessParam )( 
            IRequestInfo * This,
            LPUNKNOWN param);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetCallBackFeature )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDynamicFiltering )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDynamicFiltering )( 
            IRequestInfo * This,
            BOOL f);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCursorText )( 
            IRequestInfo * This,
            LPOLESTR text);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetShowCommandWindow )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetShowCommandWindow )( 
            IRequestInfo * This,
            BOOL f);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetTakeProcessObject )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTakeProcessObject )( 
            IRequestInfo * This,
            LPUNKNOWN takeObject);
        
        /* [helpstring] */ void *( STDMETHODCALLTYPE *GetTakeObjectCallBack )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTakeObjectCallBack )( 
            IRequestInfo * This,
            void *callBack);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetSelectionBandMode )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSelectionBandMode )( 
            IRequestInfo * This,
            long f);
        
        /* [helpstring] */ void *( STDMETHODCALLTYPE *GetProcessingGroupObjectsCallBack )( 
            IRequestInfo * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetProcessingGroupObjectsCallBack )( 
            IRequestInfo * This,
            void *callBack);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObjectsFilter3D )( 
            IRequestInfo * This,
            long filterType,
            BOOL newVal);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetObjectsFilter3D )( 
            IRequestInfo * This,
            long filterType);
        
        END_INTERFACE
    } IRequestInfoVtbl;

    interface IRequestInfo
    {
        CONST_VTBL struct IRequestInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRequestInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRequestInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRequestInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRequestInfo_GetPrompt(This)	\
    ( (This)->lpVtbl -> GetPrompt(This) ) 

#define IRequestInfo_SetPrompt(This,prompt)	\
    ( (This)->lpVtbl -> SetPrompt(This,prompt) ) 

#define IRequestInfo_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IRequestInfo_GetEntityCollection(This)	\
    ( (This)->lpVtbl -> GetEntityCollection(This) ) 

#define IRequestInfo_GetFilterCallBack(This)	\
    ( (This)->lpVtbl -> GetFilterCallBack(This) ) 

#define IRequestInfo_SetFilterCallBack(This,callBack)	\
    ( (This)->lpVtbl -> SetFilterCallBack(This,callBack) ) 

#define IRequestInfo_GetCallBack(This)	\
    ( (This)->lpVtbl -> GetCallBack(This) ) 

#define IRequestInfo_SetCallBack(This,callBack)	\
    ( (This)->lpVtbl -> SetCallBack(This,callBack) ) 

#define IRequestInfo_GetCommandsString(This)	\
    ( (This)->lpVtbl -> GetCommandsString(This) ) 

#define IRequestInfo_SetCommandsString(This,menu)	\
    ( (This)->lpVtbl -> SetCommandsString(This,menu) ) 

#define IRequestInfo_GetMenuId(This)	\
    ( (This)->lpVtbl -> GetMenuId(This) ) 

#define IRequestInfo_SetMenuId(This,menuId)	\
    ( (This)->lpVtbl -> SetMenuId(This,menuId) ) 

#define IRequestInfo_GetCurrentCommand(This)	\
    ( (This)->lpVtbl -> GetCurrentCommand(This) ) 

#define IRequestInfo_GetCursorName(This)	\
    ( (This)->lpVtbl -> GetCursorName(This) ) 

#define IRequestInfo_SetCursorName(This,cursor)	\
    ( (This)->lpVtbl -> SetCursorName(This,cursor) ) 

#define IRequestInfo_GetCursorId(This)	\
    ( (This)->lpVtbl -> GetCursorId(This) ) 

#define IRequestInfo_SetCursorId(This,cursorId)	\
    ( (This)->lpVtbl -> SetCursorId(This,cursorId) ) 

#define IRequestInfo_GetTitle(This)	\
    ( (This)->lpVtbl -> GetTitle(This) ) 

#define IRequestInfo_SetTitle(This,title)	\
    ( (This)->lpVtbl -> SetTitle(This,title) ) 

#define IRequestInfo_GetMateConstraintCollection(This)	\
    ( (This)->lpVtbl -> GetMateConstraintCollection(This) ) 

#define IRequestInfo_GetIPhantom(This)	\
    ( (This)->lpVtbl -> GetIPhantom(This) ) 

#define IRequestInfo_CreatePhantom(This)	\
    ( (This)->lpVtbl -> CreatePhantom(This) ) 

#define IRequestInfo_GetProcessParam(This)	\
    ( (This)->lpVtbl -> GetProcessParam(This) ) 

#define IRequestInfo_SetProcessParam(This,param)	\
    ( (This)->lpVtbl -> SetProcessParam(This,param) ) 

#define IRequestInfo_GetCallBackFeature(This)	\
    ( (This)->lpVtbl -> GetCallBackFeature(This) ) 

#define IRequestInfo_GetDynamicFiltering(This)	\
    ( (This)->lpVtbl -> GetDynamicFiltering(This) ) 

#define IRequestInfo_SetDynamicFiltering(This,f)	\
    ( (This)->lpVtbl -> SetDynamicFiltering(This,f) ) 

#define IRequestInfo_SetCursorText(This,text)	\
    ( (This)->lpVtbl -> SetCursorText(This,text) ) 

#define IRequestInfo_GetShowCommandWindow(This)	\
    ( (This)->lpVtbl -> GetShowCommandWindow(This) ) 

#define IRequestInfo_SetShowCommandWindow(This,f)	\
    ( (This)->lpVtbl -> SetShowCommandWindow(This,f) ) 

#define IRequestInfo_GetTakeProcessObject(This)	\
    ( (This)->lpVtbl -> GetTakeProcessObject(This) ) 

#define IRequestInfo_SetTakeProcessObject(This,takeObject)	\
    ( (This)->lpVtbl -> SetTakeProcessObject(This,takeObject) ) 

#define IRequestInfo_GetTakeObjectCallBack(This)	\
    ( (This)->lpVtbl -> GetTakeObjectCallBack(This) ) 

#define IRequestInfo_SetTakeObjectCallBack(This,callBack)	\
    ( (This)->lpVtbl -> SetTakeObjectCallBack(This,callBack) ) 

#define IRequestInfo_GetSelectionBandMode(This)	\
    ( (This)->lpVtbl -> GetSelectionBandMode(This) ) 

#define IRequestInfo_SetSelectionBandMode(This,f)	\
    ( (This)->lpVtbl -> SetSelectionBandMode(This,f) ) 

#define IRequestInfo_GetProcessingGroupObjectsCallBack(This)	\
    ( (This)->lpVtbl -> GetProcessingGroupObjectsCallBack(This) ) 

#define IRequestInfo_SetProcessingGroupObjectsCallBack(This,callBack)	\
    ( (This)->lpVtbl -> SetProcessingGroupObjectsCallBack(This,callBack) ) 

#define IRequestInfo_SetObjectsFilter3D(This,filterType,newVal)	\
    ( (This)->lpVtbl -> SetObjectsFilter3D(This,filterType,newVal) ) 

#define IRequestInfo_GetObjectsFilter3D(This,filterType)	\
    ( (This)->lpVtbl -> GetObjectsFilter3D(This,filterType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRequestInfo_INTERFACE_DEFINED__ */


#ifndef __IMateConstraint_INTERFACE_DEFINED__
#define __IMateConstraint_INTERFACE_DEFINED__

/* interface IMateConstraint */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMateConstraint,0x7AA0E540,0x0314,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0314-11D4-A30E-00C026EE094F")
    IMateConstraint : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetConstraintType( 
            short type) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetConstraintType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBaseObj( 
            short number,
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetBaseObj( 
            short number) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            short direction) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFixed( 
            short direction) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetFixed( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDistance( 
            double distance) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDistance( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Create( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetFeature( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetEntityParams( 
            /* [in] */ short number,
            /* [out] */ VARIANT *params) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMateConstraintVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMateConstraint * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMateConstraint * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMateConstraint * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetConstraintType )( 
            IMateConstraint * This,
            short type);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetConstraintType )( 
            IMateConstraint * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBaseObj )( 
            IMateConstraint * This,
            short number,
            LPENTITY obj);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetBaseObj )( 
            IMateConstraint * This,
            short number);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            IMateConstraint * This,
            short direction);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetDirection )( 
            IMateConstraint * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFixed )( 
            IMateConstraint * This,
            short direction);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetFixed )( 
            IMateConstraint * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDistance )( 
            IMateConstraint * This,
            double distance);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDistance )( 
            IMateConstraint * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Create )( 
            IMateConstraint * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetFeature )( 
            IMateConstraint * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetEntityParams )( 
            IMateConstraint * This,
            /* [in] */ short number,
            /* [out] */ VARIANT *params);
        
        END_INTERFACE
    } IMateConstraintVtbl;

    interface IMateConstraint
    {
        CONST_VTBL struct IMateConstraintVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMateConstraint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMateConstraint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMateConstraint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMateConstraint_SetConstraintType(This,type)	\
    ( (This)->lpVtbl -> SetConstraintType(This,type) ) 

#define IMateConstraint_GetConstraintType(This)	\
    ( (This)->lpVtbl -> GetConstraintType(This) ) 

#define IMateConstraint_SetBaseObj(This,number,obj)	\
    ( (This)->lpVtbl -> SetBaseObj(This,number,obj) ) 

#define IMateConstraint_GetBaseObj(This,number)	\
    ( (This)->lpVtbl -> GetBaseObj(This,number) ) 

#define IMateConstraint_SetDirection(This,direction)	\
    ( (This)->lpVtbl -> SetDirection(This,direction) ) 

#define IMateConstraint_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define IMateConstraint_SetFixed(This,direction)	\
    ( (This)->lpVtbl -> SetFixed(This,direction) ) 

#define IMateConstraint_GetFixed(This)	\
    ( (This)->lpVtbl -> GetFixed(This) ) 

#define IMateConstraint_SetDistance(This,distance)	\
    ( (This)->lpVtbl -> SetDistance(This,distance) ) 

#define IMateConstraint_GetDistance(This)	\
    ( (This)->lpVtbl -> GetDistance(This) ) 

#define IMateConstraint_Create(This)	\
    ( (This)->lpVtbl -> Create(This) ) 

#define IMateConstraint_GetFeature(This)	\
    ( (This)->lpVtbl -> GetFeature(This) ) 

#define IMateConstraint_GetEntityParams(This,number,params)	\
    ( (This)->lpVtbl -> GetEntityParams(This,number,params) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMateConstraint_INTERFACE_DEFINED__ */


#ifndef __IAdditionFormatParam_INTERFACE_DEFINED__
#define __IAdditionFormatParam_INTERFACE_DEFINED__

/* interface IAdditionFormatParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAdditionFormatParam,0x7AA0E540,0x0319,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0319-11D4-A30E-00C026EE094F")
    IAdditionFormatParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetFormat( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFormat( 
            short f) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFormatBinary( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFormatBinary( 
            BOOL direction) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTopolgyIncluded( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTopolgyIncluded( 
            BOOL direction) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Init( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetObjectsOptions( 
            long option) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObjectsOptions( 
            long option,
            BOOL set) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetTextExportForm( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTextExportForm( 
            long set) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCreateLocalComponents( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCreateLocalComponents( 
            BOOL set) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlacement( 
            LPPLACEMENT p) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetStepType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStepType( 
            long set) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep( 
            double set) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double set) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLength( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLength( 
            double set) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetMaxTeselationCellCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMaxTeselationCellCount( 
            long set) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetLengthUnits( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLengthUnits( 
            long set) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetStitchSurfaces( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStitchSurfaces( 
            BOOL set) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStitchPrecision( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStitchPrecision( 
            double set) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetAuthor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAuthor( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetOrganization( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetOrganization( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetComment( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetComment( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetPassword( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPassword( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNeedCreateComponentsFiles( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetNeedCreateComponentsFiles( 
            BOOL set) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSaveResultDocument( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSaveResultDocument( 
            BOOL set) = 0;
        
        virtual /* [helpstring] */ VARIANT STDMETHODCALLTYPE GetConfiguration( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetConfiguration( 
            VARIANT set) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetConfigurationFileName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetConfigurationFileName( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SaveConfigurationFile( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE LoadConfigurationFile( 
            LPOLESTR val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAdditionFormatParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAdditionFormatParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAdditionFormatParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetFormat )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFormat )( 
            IAdditionFormatParam * This,
            short f);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFormatBinary )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFormatBinary )( 
            IAdditionFormatParam * This,
            BOOL direction);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTopolgyIncluded )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTopolgyIncluded )( 
            IAdditionFormatParam * This,
            BOOL direction);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Init )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetObjectsOptions )( 
            IAdditionFormatParam * This,
            long option);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObjectsOptions )( 
            IAdditionFormatParam * This,
            long option,
            BOOL set);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetTextExportForm )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTextExportForm )( 
            IAdditionFormatParam * This,
            long set);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCreateLocalComponents )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCreateLocalComponents )( 
            IAdditionFormatParam * This,
            BOOL set);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlacement )( 
            IAdditionFormatParam * This,
            LPPLACEMENT p);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetStepType )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStepType )( 
            IAdditionFormatParam * This,
            long set);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep )( 
            IAdditionFormatParam * This,
            double set);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            IAdditionFormatParam * This,
            double set);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLength )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLength )( 
            IAdditionFormatParam * This,
            double set);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetMaxTeselationCellCount )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMaxTeselationCellCount )( 
            IAdditionFormatParam * This,
            long set);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetLengthUnits )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLengthUnits )( 
            IAdditionFormatParam * This,
            long set);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetStitchSurfaces )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStitchSurfaces )( 
            IAdditionFormatParam * This,
            BOOL set);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStitchPrecision )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStitchPrecision )( 
            IAdditionFormatParam * This,
            double set);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetAuthor )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAuthor )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetOrganization )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetOrganization )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetComment )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetComment )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetPassword )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPassword )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNeedCreateComponentsFiles )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetNeedCreateComponentsFiles )( 
            IAdditionFormatParam * This,
            BOOL set);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSaveResultDocument )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSaveResultDocument )( 
            IAdditionFormatParam * This,
            BOOL set);
        
        /* [helpstring] */ VARIANT ( STDMETHODCALLTYPE *GetConfiguration )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetConfiguration )( 
            IAdditionFormatParam * This,
            VARIANT set);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetConfigurationFileName )( 
            IAdditionFormatParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetConfigurationFileName )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SaveConfigurationFile )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *LoadConfigurationFile )( 
            IAdditionFormatParam * This,
            LPOLESTR val);
        
        END_INTERFACE
    } IAdditionFormatParamVtbl;

    interface IAdditionFormatParam
    {
        CONST_VTBL struct IAdditionFormatParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAdditionFormatParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAdditionFormatParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAdditionFormatParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAdditionFormatParam_GetFormat(This)	\
    ( (This)->lpVtbl -> GetFormat(This) ) 

#define IAdditionFormatParam_SetFormat(This,f)	\
    ( (This)->lpVtbl -> SetFormat(This,f) ) 

#define IAdditionFormatParam_GetFormatBinary(This)	\
    ( (This)->lpVtbl -> GetFormatBinary(This) ) 

#define IAdditionFormatParam_SetFormatBinary(This,direction)	\
    ( (This)->lpVtbl -> SetFormatBinary(This,direction) ) 

#define IAdditionFormatParam_GetTopolgyIncluded(This)	\
    ( (This)->lpVtbl -> GetTopolgyIncluded(This) ) 

#define IAdditionFormatParam_SetTopolgyIncluded(This,direction)	\
    ( (This)->lpVtbl -> SetTopolgyIncluded(This,direction) ) 

#define IAdditionFormatParam_Init(This)	\
    ( (This)->lpVtbl -> Init(This) ) 

#define IAdditionFormatParam_GetObjectsOptions(This,option)	\
    ( (This)->lpVtbl -> GetObjectsOptions(This,option) ) 

#define IAdditionFormatParam_SetObjectsOptions(This,option,set)	\
    ( (This)->lpVtbl -> SetObjectsOptions(This,option,set) ) 

#define IAdditionFormatParam_GetTextExportForm(This)	\
    ( (This)->lpVtbl -> GetTextExportForm(This) ) 

#define IAdditionFormatParam_SetTextExportForm(This,set)	\
    ( (This)->lpVtbl -> SetTextExportForm(This,set) ) 

#define IAdditionFormatParam_GetCreateLocalComponents(This)	\
    ( (This)->lpVtbl -> GetCreateLocalComponents(This) ) 

#define IAdditionFormatParam_SetCreateLocalComponents(This,set)	\
    ( (This)->lpVtbl -> SetCreateLocalComponents(This,set) ) 

#define IAdditionFormatParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IAdditionFormatParam_SetPlacement(This,p)	\
    ( (This)->lpVtbl -> SetPlacement(This,p) ) 

#define IAdditionFormatParam_GetStepType(This)	\
    ( (This)->lpVtbl -> GetStepType(This) ) 

#define IAdditionFormatParam_SetStepType(This,set)	\
    ( (This)->lpVtbl -> SetStepType(This,set) ) 

#define IAdditionFormatParam_GetStep(This)	\
    ( (This)->lpVtbl -> GetStep(This) ) 

#define IAdditionFormatParam_SetStep(This,set)	\
    ( (This)->lpVtbl -> SetStep(This,set) ) 

#define IAdditionFormatParam_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IAdditionFormatParam_SetAngle(This,set)	\
    ( (This)->lpVtbl -> SetAngle(This,set) ) 

#define IAdditionFormatParam_GetLength(This)	\
    ( (This)->lpVtbl -> GetLength(This) ) 

#define IAdditionFormatParam_SetLength(This,set)	\
    ( (This)->lpVtbl -> SetLength(This,set) ) 

#define IAdditionFormatParam_GetMaxTeselationCellCount(This)	\
    ( (This)->lpVtbl -> GetMaxTeselationCellCount(This) ) 

#define IAdditionFormatParam_SetMaxTeselationCellCount(This,set)	\
    ( (This)->lpVtbl -> SetMaxTeselationCellCount(This,set) ) 

#define IAdditionFormatParam_GetLengthUnits(This)	\
    ( (This)->lpVtbl -> GetLengthUnits(This) ) 

#define IAdditionFormatParam_SetLengthUnits(This,set)	\
    ( (This)->lpVtbl -> SetLengthUnits(This,set) ) 

#define IAdditionFormatParam_GetStitchSurfaces(This)	\
    ( (This)->lpVtbl -> GetStitchSurfaces(This) ) 

#define IAdditionFormatParam_SetStitchSurfaces(This,set)	\
    ( (This)->lpVtbl -> SetStitchSurfaces(This,set) ) 

#define IAdditionFormatParam_GetStitchPrecision(This)	\
    ( (This)->lpVtbl -> GetStitchPrecision(This) ) 

#define IAdditionFormatParam_SetStitchPrecision(This,set)	\
    ( (This)->lpVtbl -> SetStitchPrecision(This,set) ) 

#define IAdditionFormatParam_GetAuthor(This)	\
    ( (This)->lpVtbl -> GetAuthor(This) ) 

#define IAdditionFormatParam_SetAuthor(This,val)	\
    ( (This)->lpVtbl -> SetAuthor(This,val) ) 

#define IAdditionFormatParam_GetOrganization(This)	\
    ( (This)->lpVtbl -> GetOrganization(This) ) 

#define IAdditionFormatParam_SetOrganization(This,val)	\
    ( (This)->lpVtbl -> SetOrganization(This,val) ) 

#define IAdditionFormatParam_GetComment(This)	\
    ( (This)->lpVtbl -> GetComment(This) ) 

#define IAdditionFormatParam_SetComment(This,val)	\
    ( (This)->lpVtbl -> SetComment(This,val) ) 

#define IAdditionFormatParam_GetPassword(This)	\
    ( (This)->lpVtbl -> GetPassword(This) ) 

#define IAdditionFormatParam_SetPassword(This,val)	\
    ( (This)->lpVtbl -> SetPassword(This,val) ) 

#define IAdditionFormatParam_GetNeedCreateComponentsFiles(This)	\
    ( (This)->lpVtbl -> GetNeedCreateComponentsFiles(This) ) 

#define IAdditionFormatParam_SetNeedCreateComponentsFiles(This,set)	\
    ( (This)->lpVtbl -> SetNeedCreateComponentsFiles(This,set) ) 

#define IAdditionFormatParam_GetSaveResultDocument(This)	\
    ( (This)->lpVtbl -> GetSaveResultDocument(This) ) 

#define IAdditionFormatParam_SetSaveResultDocument(This,set)	\
    ( (This)->lpVtbl -> SetSaveResultDocument(This,set) ) 

#define IAdditionFormatParam_GetConfiguration(This)	\
    ( (This)->lpVtbl -> GetConfiguration(This) ) 

#define IAdditionFormatParam_SetConfiguration(This,set)	\
    ( (This)->lpVtbl -> SetConfiguration(This,set) ) 

#define IAdditionFormatParam_GetConfigurationFileName(This)	\
    ( (This)->lpVtbl -> GetConfigurationFileName(This) ) 

#define IAdditionFormatParam_SetConfigurationFileName(This,val)	\
    ( (This)->lpVtbl -> SetConfigurationFileName(This,val) ) 

#define IAdditionFormatParam_SaveConfigurationFile(This,val)	\
    ( (This)->lpVtbl -> SaveConfigurationFile(This,val) ) 

#define IAdditionFormatParam_LoadConfigurationFile(This,val)	\
    ( (This)->lpVtbl -> LoadConfigurationFile(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ VARIANT STDMETHODCALLTYPE IAdditionFormatParam_GetConfiguration_Proxy( 
    IAdditionFormatParam * This);


void __RPC_STUB IAdditionFormatParam_GetConfiguration_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IAdditionFormatParam_INTERFACE_DEFINED__ */


#ifndef __ISelectionMng_INTERFACE_DEFINED__
#define __ISelectionMng_INTERFACE_DEFINED__

/* interface ISelectionMng */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISelectionMng,0x974e5e66,0x7948,0x401d,0x8d,0xae,0xc4,0x97,0xa6,0xbf,0x1e,0xbd);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("974e5e66-7948-401d-8dae-c497a6bf1ebd")
    ISelectionMng : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Select( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Unselect( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UnselectAll( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSelected( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetObjectByIndex( 
            int index) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetObjectType( 
            int index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISelectionMngVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISelectionMng * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISelectionMng * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISelectionMng * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Select )( 
            ISelectionMng * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Unselect )( 
            ISelectionMng * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UnselectAll )( 
            ISelectionMng * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSelected )( 
            ISelectionMng * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetCount )( 
            ISelectionMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *First )( 
            ISelectionMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *Last )( 
            ISelectionMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *Next )( 
            ISelectionMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *Prev )( 
            ISelectionMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetObjectByIndex )( 
            ISelectionMng * This,
            int index);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetObjectType )( 
            ISelectionMng * This,
            int index);
        
        END_INTERFACE
    } ISelectionMngVtbl;

    interface ISelectionMng
    {
        CONST_VTBL struct ISelectionMngVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISelectionMng_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISelectionMng_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISelectionMng_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISelectionMng_Select(This,obj)	\
    ( (This)->lpVtbl -> Select(This,obj) ) 

#define ISelectionMng_Unselect(This,obj)	\
    ( (This)->lpVtbl -> Unselect(This,obj) ) 

#define ISelectionMng_UnselectAll(This)	\
    ( (This)->lpVtbl -> UnselectAll(This) ) 

#define ISelectionMng_IsSelected(This,obj)	\
    ( (This)->lpVtbl -> IsSelected(This,obj) ) 

#define ISelectionMng_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define ISelectionMng_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define ISelectionMng_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define ISelectionMng_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define ISelectionMng_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define ISelectionMng_GetObjectByIndex(This,index)	\
    ( (This)->lpVtbl -> GetObjectByIndex(This,index) ) 

#define ISelectionMng_GetObjectType(This,index)	\
    ( (This)->lpVtbl -> GetObjectType(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISelectionMng_INTERFACE_DEFINED__ */


#ifndef __IChooseMng_INTERFACE_DEFINED__
#define __IChooseMng_INTERFACE_DEFINED__

/* interface IChooseMng */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IChooseMng,0xbb679d6e,0x1c5a,0x4b90,0xa5,0x59,0xcb,0x37,0xba,0x1e,0x1f,0xa7);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bb679d6e-1c5a-4b90-a559-cb37ba1e1fa7")
    IChooseMng : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Choose( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UnChoose( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UnChooseAll( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsChoosen( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetObjectByIndex( 
            int index) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetObjectType( 
            int index) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetCurrentManagerType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCurrentManagerType( 
            int type) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetManagerIndex( 
            LPUNKNOWN obj) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChooseMngVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChooseMng * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChooseMng * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChooseMng * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Choose )( 
            IChooseMng * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UnChoose )( 
            IChooseMng * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UnChooseAll )( 
            IChooseMng * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsChoosen )( 
            IChooseMng * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetCount )( 
            IChooseMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *First )( 
            IChooseMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *Last )( 
            IChooseMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *Next )( 
            IChooseMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *Prev )( 
            IChooseMng * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetObjectByIndex )( 
            IChooseMng * This,
            int index);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetObjectType )( 
            IChooseMng * This,
            int index);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetCurrentManagerType )( 
            IChooseMng * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCurrentManagerType )( 
            IChooseMng * This,
            int type);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetManagerIndex )( 
            IChooseMng * This,
            LPUNKNOWN obj);
        
        END_INTERFACE
    } IChooseMngVtbl;

    interface IChooseMng
    {
        CONST_VTBL struct IChooseMngVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChooseMng_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChooseMng_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChooseMng_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChooseMng_Choose(This,obj)	\
    ( (This)->lpVtbl -> Choose(This,obj) ) 

#define IChooseMng_UnChoose(This,obj)	\
    ( (This)->lpVtbl -> UnChoose(This,obj) ) 

#define IChooseMng_UnChooseAll(This)	\
    ( (This)->lpVtbl -> UnChooseAll(This) ) 

#define IChooseMng_IsChoosen(This,obj)	\
    ( (This)->lpVtbl -> IsChoosen(This,obj) ) 

#define IChooseMng_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IChooseMng_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IChooseMng_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IChooseMng_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IChooseMng_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IChooseMng_GetObjectByIndex(This,index)	\
    ( (This)->lpVtbl -> GetObjectByIndex(This,index) ) 

#define IChooseMng_GetObjectType(This,index)	\
    ( (This)->lpVtbl -> GetObjectType(This,index) ) 

#define IChooseMng_GetCurrentManagerType(This)	\
    ( (This)->lpVtbl -> GetCurrentManagerType(This) ) 

#define IChooseMng_SetCurrentManagerType(This,type)	\
    ( (This)->lpVtbl -> SetCurrentManagerType(This,type) ) 

#define IChooseMng_GetManagerIndex(This,obj)	\
    ( (This)->lpVtbl -> GetManagerIndex(This,obj) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChooseMng_INTERFACE_DEFINED__ */


#ifndef __IFeature_INTERFACE_DEFINED__
#define __IFeature_INTERFACE_DEFINED__

/* interface IFeature */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IFeature,0x1d15245b,0x695e,0x4f9f,0xaf,0xca,0xea,0xcb,0xc3,0xa0,0x55,0xbb);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1d15245b-695e-4f9f-afca-eacbc3a055bb")
    IFeature : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetName( void) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE GetUpdateStamp( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsModified( 
            BOOL recursive) = 0;
        
        virtual /* [helpstring] */ LPFEATURECOLLECTION STDMETHODCALLTYPE SubFeatureCollection( 
            BOOL through,
            BOOL libObject) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetOwnerFeature( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsValid( void) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetType( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExcluded( 
            BOOL exclude) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetExcluded( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3DCOLLECTION STDMETHODCALLTYPE AttributeCollection( 
            long key1,
            long key2,
            long key3,
            long key4,
            double numb) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE EntityCollection( 
            short objType) = 0;
        
        virtual /* [helpstring] */ LPVARIABLECOLLECTION STDMETHODCALLTYPE VariableCollection( void) = 0;
        
        virtual /* [helpstring] */ LPBODYCOLLECTION STDMETHODCALLTYPE BodyCollection( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3DCOLLECTION STDMETHODCALLTYPE AttributeCollectionEx( 
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            LPPART sourcePart) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsRollBacked( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLECOLLECTION STDMETHODCALLTYPE VariableCollectionEx( 
            BOOL sourse) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetObjectError( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeature * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetName )( 
            IFeature * This);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *GetUpdateStamp )( 
            IFeature * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsModified )( 
            IFeature * This,
            BOOL recursive);
        
        /* [helpstring] */ LPFEATURECOLLECTION ( STDMETHODCALLTYPE *SubFeatureCollection )( 
            IFeature * This,
            BOOL through,
            BOOL libObject);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetOwnerFeature )( 
            IFeature * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsValid )( 
            IFeature * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetType )( 
            IFeature * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetObject )( 
            IFeature * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExcluded )( 
            IFeature * This,
            BOOL exclude);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetExcluded )( 
            IFeature * This);
        
        /* [helpstring] */ LPATTRIBUTE3DCOLLECTION ( STDMETHODCALLTYPE *AttributeCollection )( 
            IFeature * This,
            long key1,
            long key2,
            long key3,
            long key4,
            double numb);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *EntityCollection )( 
            IFeature * This,
            short objType);
        
        /* [helpstring] */ LPVARIABLECOLLECTION ( STDMETHODCALLTYPE *VariableCollection )( 
            IFeature * This);
        
        /* [helpstring] */ LPBODYCOLLECTION ( STDMETHODCALLTYPE *BodyCollection )( 
            IFeature * This);
        
        /* [helpstring] */ LPATTRIBUTE3DCOLLECTION ( STDMETHODCALLTYPE *AttributeCollectionEx )( 
            IFeature * This,
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            LPPART sourcePart);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsRollBacked )( 
            IFeature * This);
        
        /* [helpstring] */ LPVARIABLECOLLECTION ( STDMETHODCALLTYPE *VariableCollectionEx )( 
            IFeature * This,
            BOOL sourse);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetObjectError )( 
            IFeature * This);
        
        END_INTERFACE
    } IFeatureVtbl;

    interface IFeature
    {
        CONST_VTBL struct IFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeature_GetName(This)	\
    ( (This)->lpVtbl -> GetName(This) ) 

#define IFeature_GetUpdateStamp(This)	\
    ( (This)->lpVtbl -> GetUpdateStamp(This) ) 

#define IFeature_IsModified(This,recursive)	\
    ( (This)->lpVtbl -> IsModified(This,recursive) ) 

#define IFeature_SubFeatureCollection(This,through,libObject)	\
    ( (This)->lpVtbl -> SubFeatureCollection(This,through,libObject) ) 

#define IFeature_GetOwnerFeature(This)	\
    ( (This)->lpVtbl -> GetOwnerFeature(This) ) 

#define IFeature_IsValid(This)	\
    ( (This)->lpVtbl -> IsValid(This) ) 

#define IFeature_GetType(This)	\
    ( (This)->lpVtbl -> GetType(This) ) 

#define IFeature_GetObject(This)	\
    ( (This)->lpVtbl -> GetObject(This) ) 

#define IFeature_SetExcluded(This,exclude)	\
    ( (This)->lpVtbl -> SetExcluded(This,exclude) ) 

#define IFeature_GetExcluded(This)	\
    ( (This)->lpVtbl -> GetExcluded(This) ) 

#define IFeature_AttributeCollection(This,key1,key2,key3,key4,numb)	\
    ( (This)->lpVtbl -> AttributeCollection(This,key1,key2,key3,key4,numb) ) 

#define IFeature_EntityCollection(This,objType)	\
    ( (This)->lpVtbl -> EntityCollection(This,objType) ) 

#define IFeature_VariableCollection(This)	\
    ( (This)->lpVtbl -> VariableCollection(This) ) 

#define IFeature_BodyCollection(This)	\
    ( (This)->lpVtbl -> BodyCollection(This) ) 

#define IFeature_AttributeCollectionEx(This,key1,key2,key3,key4,numb,sourcePart)	\
    ( (This)->lpVtbl -> AttributeCollectionEx(This,key1,key2,key3,key4,numb,sourcePart) ) 

#define IFeature_IsRollBacked(This)	\
    ( (This)->lpVtbl -> IsRollBacked(This) ) 

#define IFeature_VariableCollectionEx(This,sourse)	\
    ( (This)->lpVtbl -> VariableCollectionEx(This,sourse) ) 

#define IFeature_GetObjectError(This)	\
    ( (This)->lpVtbl -> GetObjectError(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeature_INTERFACE_DEFINED__ */


#ifndef __IViewProjection_INTERFACE_DEFINED__
#define __IViewProjection_INTERFACE_DEFINED__

/* interface IViewProjection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IViewProjection,0x737d35af,0xc407,0x420d,0x92,0x50,0xa2,0xcb,0xb4,0x16,0xdc,0xb9);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("737d35af-c407-420d-9250-a2cbb416dcb9")
    IViewProjection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCurrent( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCurrent( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetName( 
            LPOLESTR projName) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetScale( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetScale( 
            double scale) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlacement( 
            LPPLACEMENT place) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUserProjectionIndex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetMatrix3D( 
            VARIANT Matrix3D) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetViewProjectonType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IViewProjectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewProjection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewProjection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewProjection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCurrent )( 
            IViewProjection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCurrent )( 
            IViewProjection * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetName )( 
            IViewProjection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetName )( 
            IViewProjection * This,
            LPOLESTR projName);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetScale )( 
            IViewProjection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetScale )( 
            IViewProjection * This,
            double scale);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IViewProjection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlacement )( 
            IViewProjection * This,
            LPPLACEMENT place);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUserProjectionIndex )( 
            IViewProjection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetMatrix3D )( 
            IViewProjection * This,
            VARIANT Matrix3D);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetViewProjectonType )( 
            IViewProjection * This);
        
        END_INTERFACE
    } IViewProjectionVtbl;

    interface IViewProjection
    {
        CONST_VTBL struct IViewProjectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewProjection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewProjection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewProjection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewProjection_IsCurrent(This)	\
    ( (This)->lpVtbl -> IsCurrent(This) ) 

#define IViewProjection_SetCurrent(This)	\
    ( (This)->lpVtbl -> SetCurrent(This) ) 

#define IViewProjection_GetName(This)	\
    ( (This)->lpVtbl -> GetName(This) ) 

#define IViewProjection_SetName(This,projName)	\
    ( (This)->lpVtbl -> SetName(This,projName) ) 

#define IViewProjection_GetScale(This)	\
    ( (This)->lpVtbl -> GetScale(This) ) 

#define IViewProjection_SetScale(This,scale)	\
    ( (This)->lpVtbl -> SetScale(This,scale) ) 

#define IViewProjection_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IViewProjection_SetPlacement(This,place)	\
    ( (This)->lpVtbl -> SetPlacement(This,place) ) 

#define IViewProjection_GetUserProjectionIndex(This)	\
    ( (This)->lpVtbl -> GetUserProjectionIndex(This) ) 

#define IViewProjection_SetMatrix3D(This,Matrix3D)	\
    ( (This)->lpVtbl -> SetMatrix3D(This,Matrix3D) ) 

#define IViewProjection_GetViewProjectonType(This)	\
    ( (This)->lpVtbl -> GetViewProjectonType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewProjection_INTERFACE_DEFINED__ */


#ifndef __IVariable_INTERFACE_DEFINED__
#define __IVariable_INTERFACE_DEFINED__

/* interface IVariable */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IVariable,0x7AA0E540,0x0312,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0312-11D4-A30E-00C026EE094F")
    IVariable : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetName( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetNote( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetNote( 
            LPOLESTR note) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetValue( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetValue( 
            double val) = 0;
        
        virtual /* [helpstring] */ void *STDMETHODCALLTYPE GetParam( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetPseudonym( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPseudonym( 
            LPOLESTR val) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetExpression( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExpression( 
            LPOLESTR exp) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetExternal( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExternal( 
            BOOL fVal) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetParameterNote( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetLinkVarName( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetLinkDocName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLink( 
            LPOLESTR doc,
            LPOLESTR name) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetDisplayName( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetInformation( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInformation( 
            BOOL fVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVariableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVariable * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVariable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVariable * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetName )( 
            IVariable * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetNote )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetNote )( 
            IVariable * This,
            LPOLESTR note);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetValue )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetValue )( 
            IVariable * This,
            double val);
        
        /* [helpstring] */ void *( STDMETHODCALLTYPE *GetParam )( 
            IVariable * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetPseudonym )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPseudonym )( 
            IVariable * This,
            LPOLESTR val);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetExpression )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExpression )( 
            IVariable * This,
            LPOLESTR exp);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetExternal )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExternal )( 
            IVariable * This,
            BOOL fVal);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetParameterNote )( 
            IVariable * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetLinkVarName )( 
            IVariable * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetLinkDocName )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLink )( 
            IVariable * This,
            LPOLESTR doc,
            LPOLESTR name);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetDisplayName )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetInformation )( 
            IVariable * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInformation )( 
            IVariable * This,
            BOOL fVal);
        
        END_INTERFACE
    } IVariableVtbl;

    interface IVariable
    {
        CONST_VTBL struct IVariableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVariable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVariable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVariable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVariable_GetName(This)	\
    ( (This)->lpVtbl -> GetName(This) ) 

#define IVariable_GetNote(This)	\
    ( (This)->lpVtbl -> GetNote(This) ) 

#define IVariable_SetNote(This,note)	\
    ( (This)->lpVtbl -> SetNote(This,note) ) 

#define IVariable_GetValue(This)	\
    ( (This)->lpVtbl -> GetValue(This) ) 

#define IVariable_SetValue(This,val)	\
    ( (This)->lpVtbl -> SetValue(This,val) ) 

#define IVariable_GetParam(This)	\
    ( (This)->lpVtbl -> GetParam(This) ) 

#define IVariable_GetPseudonym(This)	\
    ( (This)->lpVtbl -> GetPseudonym(This) ) 

#define IVariable_SetPseudonym(This,val)	\
    ( (This)->lpVtbl -> SetPseudonym(This,val) ) 

#define IVariable_GetExpression(This)	\
    ( (This)->lpVtbl -> GetExpression(This) ) 

#define IVariable_SetExpression(This,exp)	\
    ( (This)->lpVtbl -> SetExpression(This,exp) ) 

#define IVariable_GetExternal(This)	\
    ( (This)->lpVtbl -> GetExternal(This) ) 

#define IVariable_SetExternal(This,fVal)	\
    ( (This)->lpVtbl -> SetExternal(This,fVal) ) 

#define IVariable_GetParameterNote(This)	\
    ( (This)->lpVtbl -> GetParameterNote(This) ) 

#define IVariable_GetLinkVarName(This)	\
    ( (This)->lpVtbl -> GetLinkVarName(This) ) 

#define IVariable_GetLinkDocName(This)	\
    ( (This)->lpVtbl -> GetLinkDocName(This) ) 

#define IVariable_SetLink(This,doc,name)	\
    ( (This)->lpVtbl -> SetLink(This,doc,name) ) 

#define IVariable_GetDisplayName(This)	\
    ( (This)->lpVtbl -> GetDisplayName(This) ) 

#define IVariable_GetInformation(This)	\
    ( (This)->lpVtbl -> GetInformation(This) ) 

#define IVariable_SetInformation(This,fVal)	\
    ( (This)->lpVtbl -> SetInformation(This,fVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVariable_INTERFACE_DEFINED__ */


#ifndef __IModelLibrary_INTERFACE_DEFINED__
#define __IModelLibrary_INTERFACE_DEFINED__

/* interface IModelLibrary */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IModelLibrary,0x7AA0E540,0x0316,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0316-11D4-A30E-00C026EE094F")
    IModelLibrary : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE ModelLibraryOperation( 
            LPOLESTR libName,
            long type) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE ChoiceModelFromLib( 
            LPOLESTR libFile,
            long *type) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE AddD3DocumentToLibrary( 
            LPOLESTR libName,
            LPOLESTR fileName) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE CheckModelLibrary( 
            LPOLESTR libName,
            BOOL possibleMessage) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE ExistModelInLibrary( 
            LPOLESTR name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IModelLibraryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IModelLibrary * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IModelLibrary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IModelLibrary * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *ModelLibraryOperation )( 
            IModelLibrary * This,
            LPOLESTR libName,
            long type);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *ChoiceModelFromLib )( 
            IModelLibrary * This,
            LPOLESTR libFile,
            long *type);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *AddD3DocumentToLibrary )( 
            IModelLibrary * This,
            LPOLESTR libName,
            LPOLESTR fileName);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *CheckModelLibrary )( 
            IModelLibrary * This,
            LPOLESTR libName,
            BOOL possibleMessage);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *ExistModelInLibrary )( 
            IModelLibrary * This,
            LPOLESTR name);
        
        END_INTERFACE
    } IModelLibraryVtbl;

    interface IModelLibrary
    {
        CONST_VTBL struct IModelLibraryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IModelLibrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IModelLibrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IModelLibrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IModelLibrary_ModelLibraryOperation(This,libName,type)	\
    ( (This)->lpVtbl -> ModelLibraryOperation(This,libName,type) ) 

#define IModelLibrary_ChoiceModelFromLib(This,libFile,type)	\
    ( (This)->lpVtbl -> ChoiceModelFromLib(This,libFile,type) ) 

#define IModelLibrary_AddD3DocumentToLibrary(This,libName,fileName)	\
    ( (This)->lpVtbl -> AddD3DocumentToLibrary(This,libName,fileName) ) 

#define IModelLibrary_CheckModelLibrary(This,libName,possibleMessage)	\
    ( (This)->lpVtbl -> CheckModelLibrary(This,libName,possibleMessage) ) 

#define IModelLibrary_ExistModelInLibrary(This,name)	\
    ( (This)->lpVtbl -> ExistModelInLibrary(This,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IModelLibrary_INTERFACE_DEFINED__ */


#ifndef __IThinParam_INTERFACE_DEFINED__
#define __IThinParam_INTERFACE_DEFINED__

/* interface IThinParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IThinParam,0x7AA0E540,0x0306,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0306-11D4-A30E-00C026EE094F")
    IThinParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThin( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetThin( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BYTE STDMETHODCALLTYPE GetThinType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetThinType( 
            BYTE val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetNormalThickness( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetNormalThickness( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetReverseThickness( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetReverseThickness( 
            double val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IThinParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThinParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThinParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThinParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThin )( 
            IThinParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetThin )( 
            IThinParam * This,
            BOOL val);
        
        /* [helpstring] */ BYTE ( STDMETHODCALLTYPE *GetThinType )( 
            IThinParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetThinType )( 
            IThinParam * This,
            BYTE val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetNormalThickness )( 
            IThinParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetNormalThickness )( 
            IThinParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetReverseThickness )( 
            IThinParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetReverseThickness )( 
            IThinParam * This,
            double val);
        
        END_INTERFACE
    } IThinParamVtbl;

    interface IThinParam
    {
        CONST_VTBL struct IThinParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThinParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThinParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThinParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThinParam_GetThin(This)	\
    ( (This)->lpVtbl -> GetThin(This) ) 

#define IThinParam_SetThin(This,val)	\
    ( (This)->lpVtbl -> SetThin(This,val) ) 

#define IThinParam_GetThinType(This)	\
    ( (This)->lpVtbl -> GetThinType(This) ) 

#define IThinParam_SetThinType(This,val)	\
    ( (This)->lpVtbl -> SetThinType(This,val) ) 

#define IThinParam_GetNormalThickness(This)	\
    ( (This)->lpVtbl -> GetNormalThickness(This) ) 

#define IThinParam_SetNormalThickness(This,val)	\
    ( (This)->lpVtbl -> SetNormalThickness(This,val) ) 

#define IThinParam_GetReverseThickness(This)	\
    ( (This)->lpVtbl -> GetReverseThickness(This) ) 

#define IThinParam_SetReverseThickness(This,val)	\
    ( (This)->lpVtbl -> SetReverseThickness(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThinParam_INTERFACE_DEFINED__ */


#ifndef __IExtrusionParam_INTERFACE_DEFINED__
#define __IExtrusionParam_INTERFACE_DEFINED__

/* interface IExtrusionParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IExtrusionParam,0x7AA0E540,0x0307,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0307-11D4-A30E-00C026EE094F")
    IExtrusionParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BYTE STDMETHODCALLTYPE GetTypeNormal( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTypeNormal( 
            BYTE val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDepthNormal( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDepthNormal( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDraftValueNormal( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDraftValueNormal( 
            double val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDraftOutwardNormal( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDraftOutwardNormal( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BYTE STDMETHODCALLTYPE GetTypeReverse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTypeReverse( 
            BYTE val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDepthReverse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDepthReverse( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDraftValueReverse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDraftValueReverse( 
            double val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDraftOutwardReverse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDraftOutwardReverse( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            long val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtrusionParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtrusionParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtrusionParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BYTE ( STDMETHODCALLTYPE *GetTypeNormal )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTypeNormal )( 
            IExtrusionParam * This,
            BYTE val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDepthNormal )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDepthNormal )( 
            IExtrusionParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDraftValueNormal )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDraftValueNormal )( 
            IExtrusionParam * This,
            double val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDraftOutwardNormal )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDraftOutwardNormal )( 
            IExtrusionParam * This,
            BOOL val);
        
        /* [helpstring] */ BYTE ( STDMETHODCALLTYPE *GetTypeReverse )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTypeReverse )( 
            IExtrusionParam * This,
            BYTE val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDepthReverse )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDepthReverse )( 
            IExtrusionParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDraftValueReverse )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDraftValueReverse )( 
            IExtrusionParam * This,
            double val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDraftOutwardReverse )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDraftOutwardReverse )( 
            IExtrusionParam * This,
            BOOL val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirection )( 
            IExtrusionParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            IExtrusionParam * This,
            long val);
        
        END_INTERFACE
    } IExtrusionParamVtbl;

    interface IExtrusionParam
    {
        CONST_VTBL struct IExtrusionParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtrusionParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtrusionParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtrusionParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtrusionParam_GetTypeNormal(This)	\
    ( (This)->lpVtbl -> GetTypeNormal(This) ) 

#define IExtrusionParam_SetTypeNormal(This,val)	\
    ( (This)->lpVtbl -> SetTypeNormal(This,val) ) 

#define IExtrusionParam_GetDepthNormal(This)	\
    ( (This)->lpVtbl -> GetDepthNormal(This) ) 

#define IExtrusionParam_SetDepthNormal(This,val)	\
    ( (This)->lpVtbl -> SetDepthNormal(This,val) ) 

#define IExtrusionParam_GetDraftValueNormal(This)	\
    ( (This)->lpVtbl -> GetDraftValueNormal(This) ) 

#define IExtrusionParam_SetDraftValueNormal(This,val)	\
    ( (This)->lpVtbl -> SetDraftValueNormal(This,val) ) 

#define IExtrusionParam_GetDraftOutwardNormal(This)	\
    ( (This)->lpVtbl -> GetDraftOutwardNormal(This) ) 

#define IExtrusionParam_SetDraftOutwardNormal(This,val)	\
    ( (This)->lpVtbl -> SetDraftOutwardNormal(This,val) ) 

#define IExtrusionParam_GetTypeReverse(This)	\
    ( (This)->lpVtbl -> GetTypeReverse(This) ) 

#define IExtrusionParam_SetTypeReverse(This,val)	\
    ( (This)->lpVtbl -> SetTypeReverse(This,val) ) 

#define IExtrusionParam_GetDepthReverse(This)	\
    ( (This)->lpVtbl -> GetDepthReverse(This) ) 

#define IExtrusionParam_SetDepthReverse(This,val)	\
    ( (This)->lpVtbl -> SetDepthReverse(This,val) ) 

#define IExtrusionParam_GetDraftValueReverse(This)	\
    ( (This)->lpVtbl -> GetDraftValueReverse(This) ) 

#define IExtrusionParam_SetDraftValueReverse(This,val)	\
    ( (This)->lpVtbl -> SetDraftValueReverse(This,val) ) 

#define IExtrusionParam_GetDraftOutwardReverse(This)	\
    ( (This)->lpVtbl -> GetDraftOutwardReverse(This) ) 

#define IExtrusionParam_SetDraftOutwardReverse(This,val)	\
    ( (This)->lpVtbl -> SetDraftOutwardReverse(This,val) ) 

#define IExtrusionParam_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define IExtrusionParam_SetDirection(This,val)	\
    ( (This)->lpVtbl -> SetDirection(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtrusionParam_INTERFACE_DEFINED__ */


#ifndef __IRotatedParam_INTERFACE_DEFINED__
#define __IRotatedParam_INTERFACE_DEFINED__

/* interface IRotatedParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IRotatedParam,0x7AA0E540,0x0308,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0308-11D4-A30E-00C026EE094F")
    IRotatedParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngleNormal( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngleNormal( 
            double val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngleReverse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngleReverse( 
            double val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetToroidShape( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetToroidShape( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            long val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRotatedParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRotatedParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRotatedParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRotatedParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngleNormal )( 
            IRotatedParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngleNormal )( 
            IRotatedParam * This,
            double val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngleReverse )( 
            IRotatedParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngleReverse )( 
            IRotatedParam * This,
            double val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetToroidShape )( 
            IRotatedParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetToroidShape )( 
            IRotatedParam * This,
            BOOL val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirection )( 
            IRotatedParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            IRotatedParam * This,
            long val);
        
        END_INTERFACE
    } IRotatedParamVtbl;

    interface IRotatedParam
    {
        CONST_VTBL struct IRotatedParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRotatedParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRotatedParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRotatedParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRotatedParam_GetAngleNormal(This)	\
    ( (This)->lpVtbl -> GetAngleNormal(This) ) 

#define IRotatedParam_SetAngleNormal(This,val)	\
    ( (This)->lpVtbl -> SetAngleNormal(This,val) ) 

#define IRotatedParam_GetAngleReverse(This)	\
    ( (This)->lpVtbl -> GetAngleReverse(This) ) 

#define IRotatedParam_SetAngleReverse(This,val)	\
    ( (This)->lpVtbl -> SetAngleReverse(This,val) ) 

#define IRotatedParam_GetToroidShape(This)	\
    ( (This)->lpVtbl -> GetToroidShape(This) ) 

#define IRotatedParam_SetToroidShape(This,val)	\
    ( (This)->lpVtbl -> SetToroidShape(This,val) ) 

#define IRotatedParam_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define IRotatedParam_SetDirection(This,val)	\
    ( (This)->lpVtbl -> SetDirection(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRotatedParam_INTERFACE_DEFINED__ */


#ifndef __IAttribute3D_INTERFACE_DEFINED__
#define __IAttribute3D_INTERFACE_DEFINED__

/* interface IAttribute3D */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAttribute3D,0xF5529801,0xEDF2,0x42ae,0xB0,0xA4,0x8A,0xB6,0xF5,0x65,0x0A,0xE1);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F5529801-EDF2-42ae-B0A4-8AB6F5650AE1")
    IAttribute3D : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetReference( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURECOLLECTION STDMETHODCALLTYPE FeatureCollection( 
            int objType) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetNameType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAttribute3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAttribute3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAttribute3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAttribute3D * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetReference )( 
            IAttribute3D * This);
        
        /* [helpstring] */ LPFEATURECOLLECTION ( STDMETHODCALLTYPE *FeatureCollection )( 
            IAttribute3D * This,
            int objType);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetNameType )( 
            IAttribute3D * This);
        
        END_INTERFACE
    } IAttribute3DVtbl;

    interface IAttribute3D
    {
        CONST_VTBL struct IAttribute3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAttribute3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAttribute3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAttribute3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAttribute3D_GetReference(This)	\
    ( (This)->lpVtbl -> GetReference(This) ) 

#define IAttribute3D_FeatureCollection(This,objType)	\
    ( (This)->lpVtbl -> FeatureCollection(This,objType) ) 

#define IAttribute3D_GetNameType(This)	\
    ( (This)->lpVtbl -> GetNameType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAttribute3D_INTERFACE_DEFINED__ */


#ifndef __IComponentPositioner_INTERFACE_DEFINED__
#define __IComponentPositioner_INTERFACE_DEFINED__

/* interface IComponentPositioner */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IComponentPositioner,0x6B9D0CE9,0xC3E6,0x436b,0x9E,0xEE,0x02,0xF4,0x39,0xA4,0x5C,0x02);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B9D0CE9-C3E6-436b-9EEE-02F439A45C02")
    IComponentPositioner : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlaneByPlacement( 
            LPPLACEMENT plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPUNKNOWN plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlaneByPoints( 
            double x1,
            double y1,
            double z1,
            double x2,
            double y2,
            double z2,
            double x3,
            double y3,
            double z3) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDragPoint( 
            double x,
            double y,
            double z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis( 
            LPUNKNOWN axis) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxisByPoints( 
            double x1,
            double y1,
            double z1,
            double x2,
            double y2,
            double z2) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE Prepare( 
            LPPART part,
            long positionerType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE MoveComponent( 
            double x,
            double y,
            double z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RotateComponent( 
            double angl) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Finish( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IComponentPositionerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IComponentPositioner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IComponentPositioner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IComponentPositioner * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlaneByPlacement )( 
            IComponentPositioner * This,
            LPPLACEMENT plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IComponentPositioner * This,
            LPUNKNOWN plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlaneByPoints )( 
            IComponentPositioner * This,
            double x1,
            double y1,
            double z1,
            double x2,
            double y2,
            double z2,
            double x3,
            double y3,
            double z3);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDragPoint )( 
            IComponentPositioner * This,
            double x,
            double y,
            double z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis )( 
            IComponentPositioner * This,
            LPUNKNOWN axis);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxisByPoints )( 
            IComponentPositioner * This,
            double x1,
            double y1,
            double z1,
            double x2,
            double y2,
            double z2);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *Prepare )( 
            IComponentPositioner * This,
            LPPART part,
            long positionerType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *MoveComponent )( 
            IComponentPositioner * This,
            double x,
            double y,
            double z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RotateComponent )( 
            IComponentPositioner * This,
            double angl);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Finish )( 
            IComponentPositioner * This);
        
        END_INTERFACE
    } IComponentPositionerVtbl;

    interface IComponentPositioner
    {
        CONST_VTBL struct IComponentPositionerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IComponentPositioner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IComponentPositioner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IComponentPositioner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IComponentPositioner_SetPlaneByPlacement(This,plane)	\
    ( (This)->lpVtbl -> SetPlaneByPlacement(This,plane) ) 

#define IComponentPositioner_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#define IComponentPositioner_SetPlaneByPoints(This,x1,y1,z1,x2,y2,z2,x3,y3,z3)	\
    ( (This)->lpVtbl -> SetPlaneByPoints(This,x1,y1,z1,x2,y2,z2,x3,y3,z3) ) 

#define IComponentPositioner_SetDragPoint(This,x,y,z)	\
    ( (This)->lpVtbl -> SetDragPoint(This,x,y,z) ) 

#define IComponentPositioner_SetAxis(This,axis)	\
    ( (This)->lpVtbl -> SetAxis(This,axis) ) 

#define IComponentPositioner_SetAxisByPoints(This,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> SetAxisByPoints(This,x1,y1,z1,x2,y2,z2) ) 

#define IComponentPositioner_Prepare(This,part,positionerType)	\
    ( (This)->lpVtbl -> Prepare(This,part,positionerType) ) 

#define IComponentPositioner_MoveComponent(This,x,y,z)	\
    ( (This)->lpVtbl -> MoveComponent(This,x,y,z) ) 

#define IComponentPositioner_RotateComponent(This,angl)	\
    ( (This)->lpVtbl -> RotateComponent(This,angl) ) 

#define IComponentPositioner_Finish(This)	\
    ( (This)->lpVtbl -> Finish(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IComponentPositioner_INTERFACE_DEFINED__ */


#ifndef __IObjectsFilter3D_INTERFACE_DEFINED__
#define __IObjectsFilter3D_INTERFACE_DEFINED__

/* interface IObjectsFilter3D */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IObjectsFilter3D,0x16EAD9EF,0x671F,0x4557,0x99,0x54,0xBB,0x07,0x08,0x64,0xF6,0x38);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16EAD9EF-671F-4557-9954-BB070864F638")
    IObjectsFilter3D : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFilterAll( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetFilterAll( 
            BOOL all) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFilterFaces( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetFilterFaces( 
            BOOL value) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFilterEdges( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetFilterEdges( 
            BOOL value) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFilterVertexs( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetFilterVertexs( 
            BOOL value) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFilterCPlanes( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetFilterCPlanes( 
            BOOL value) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFilterCAxis( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetFilterCAxis( 
            BOOL value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObjectsFilter3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObjectsFilter3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObjectsFilter3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFilterAll )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetFilterAll )( 
            IObjectsFilter3D * This,
            BOOL all);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFilterFaces )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetFilterFaces )( 
            IObjectsFilter3D * This,
            BOOL value);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFilterEdges )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetFilterEdges )( 
            IObjectsFilter3D * This,
            BOOL value);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFilterVertexs )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetFilterVertexs )( 
            IObjectsFilter3D * This,
            BOOL value);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFilterCPlanes )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetFilterCPlanes )( 
            IObjectsFilter3D * This,
            BOOL value);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFilterCAxis )( 
            IObjectsFilter3D * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetFilterCAxis )( 
            IObjectsFilter3D * This,
            BOOL value);
        
        END_INTERFACE
    } IObjectsFilter3DVtbl;

    interface IObjectsFilter3D
    {
        CONST_VTBL struct IObjectsFilter3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObjectsFilter3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObjectsFilter3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObjectsFilter3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObjectsFilter3D_GetFilterAll(This)	\
    ( (This)->lpVtbl -> GetFilterAll(This) ) 

#define IObjectsFilter3D_SetFilterAll(This,all)	\
    ( (This)->lpVtbl -> SetFilterAll(This,all) ) 

#define IObjectsFilter3D_GetFilterFaces(This)	\
    ( (This)->lpVtbl -> GetFilterFaces(This) ) 

#define IObjectsFilter3D_SetFilterFaces(This,value)	\
    ( (This)->lpVtbl -> SetFilterFaces(This,value) ) 

#define IObjectsFilter3D_GetFilterEdges(This)	\
    ( (This)->lpVtbl -> GetFilterEdges(This) ) 

#define IObjectsFilter3D_SetFilterEdges(This,value)	\
    ( (This)->lpVtbl -> SetFilterEdges(This,value) ) 

#define IObjectsFilter3D_GetFilterVertexs(This)	\
    ( (This)->lpVtbl -> GetFilterVertexs(This) ) 

#define IObjectsFilter3D_SetFilterVertexs(This,value)	\
    ( (This)->lpVtbl -> SetFilterVertexs(This,value) ) 

#define IObjectsFilter3D_GetFilterCPlanes(This)	\
    ( (This)->lpVtbl -> GetFilterCPlanes(This) ) 

#define IObjectsFilter3D_SetFilterCPlanes(This,value)	\
    ( (This)->lpVtbl -> SetFilterCPlanes(This,value) ) 

#define IObjectsFilter3D_GetFilterCAxis(This)	\
    ( (This)->lpVtbl -> GetFilterCAxis(This) ) 

#define IObjectsFilter3D_SetFilterCAxis(This,value)	\
    ( (This)->lpVtbl -> SetFilterCAxis(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObjectsFilter3D_INTERFACE_DEFINED__ */


#ifndef __IChooseBodies_INTERFACE_DEFINED__
#define __IChooseBodies_INTERFACE_DEFINED__

/* interface IChooseBodies */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IChooseBodies,0x67B417BA,0xF248,0x4b56,0xAD,0x03,0xC4,0x05,0x7C,0x7F,0x2E,0xEE);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("67B417BA-F248-4b56-AD03-C4057C7F2EEE")
    IChooseBodies : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseBodiesType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseBodiesType( void) = 0;
        
        virtual /* [helpstring] */ LPBODYCOLLECTION STDMETHODCALLTYPE BodyCollection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChooseBodiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChooseBodies * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChooseBodies * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChooseBodies * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseBodiesType )( 
            IChooseBodies * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseBodiesType )( 
            IChooseBodies * This);
        
        /* [helpstring] */ LPBODYCOLLECTION ( STDMETHODCALLTYPE *BodyCollection )( 
            IChooseBodies * This);
        
        END_INTERFACE
    } IChooseBodiesVtbl;

    interface IChooseBodies
    {
        CONST_VTBL struct IChooseBodiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChooseBodies_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChooseBodies_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChooseBodies_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChooseBodies_SetChooseBodiesType(This,val)	\
    ( (This)->lpVtbl -> SetChooseBodiesType(This,val) ) 

#define IChooseBodies_GetChooseBodiesType(This)	\
    ( (This)->lpVtbl -> GetChooseBodiesType(This) ) 

#define IChooseBodies_BodyCollection(This)	\
    ( (This)->lpVtbl -> BodyCollection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChooseBodies_INTERFACE_DEFINED__ */


#ifndef __IChooseParts_INTERFACE_DEFINED__
#define __IChooseParts_INTERFACE_DEFINED__

/* interface IChooseParts */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IChooseParts,0x2920B89D,0x636E,0x4dcc,0x8E,0x62,0x34,0xD2,0xF4,0xB4,0xBB,0x00);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2920B89D-636E-4dcc-8E62-34D2F4B4BB00")
    IChooseParts : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChoosePartsType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChoosePartsType( void) = 0;
        
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartCollection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChoosePartsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChooseParts * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChooseParts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChooseParts * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChoosePartsType )( 
            IChooseParts * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChoosePartsType )( 
            IChooseParts * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartCollection )( 
            IChooseParts * This);
        
        END_INTERFACE
    } IChoosePartsVtbl;

    interface IChooseParts
    {
        CONST_VTBL struct IChoosePartsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChooseParts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChooseParts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChooseParts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChooseParts_SetChoosePartsType(This,val)	\
    ( (This)->lpVtbl -> SetChoosePartsType(This,val) ) 

#define IChooseParts_GetChoosePartsType(This)	\
    ( (This)->lpVtbl -> GetChoosePartsType(This) ) 

#define IChooseParts_PartCollection(This)	\
    ( (This)->lpVtbl -> PartCollection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChooseParts_INTERFACE_DEFINED__ */


#ifndef __IFaceDefinition_INTERFACE_DEFINED__
#define __IFaceDefinition_INTERFACE_DEFINED__

/* interface IFaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IFaceDefinition,0x7AA0E540,0x0322,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0322-11D4-A30E-00C026EE094F")
    IFaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPlanar( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCone( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCylinder( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCylinderParam( 
            double *h,
            double *r) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetOwnerEntity( void) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
        virtual /* [helpstring] */ LPLOOPCOLLECTION STDMETHODCALLTYPE LoopCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormalOrientation( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsConnectedWith( 
            LPFACEDEFINITION faceDefinition) = 0;
        
        virtual /* [helpstring] */ LPFACECOLLECTION STDMETHODCALLTYPE ConnectedFaceCollection( void) = 0;
        
        virtual /* [helpstring] */ LPEDGECOLLECTION STDMETHODCALLTYPE EdgeCollection( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE GetNextFace( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsTorus( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSphere( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsNurbsSurface( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsRevolved( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSwept( void) = 0;
        
        virtual /* [helpstring] */ LPTESSELLATION STDMETHODCALLTYPE GetTessellation( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetArea( 
            unsigned long bitVector) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEntity( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsValid( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAreaEx( 
            unsigned long bitVector,
            double AngleTolerance) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPlanar )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCone )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCylinder )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCylinderParam )( 
            IFaceDefinition * This,
            double *h,
            double *r);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetOwnerEntity )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ LPLOOPCOLLECTION ( STDMETHODCALLTYPE *LoopCollection )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormalOrientation )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsConnectedWith )( 
            IFaceDefinition * This,
            LPFACEDEFINITION faceDefinition);
        
        /* [helpstring] */ LPFACECOLLECTION ( STDMETHODCALLTYPE *ConnectedFaceCollection )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ LPEDGECOLLECTION ( STDMETHODCALLTYPE *EdgeCollection )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *GetNextFace )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsTorus )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSphere )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsNurbsSurface )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsRevolved )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSwept )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ LPTESSELLATION ( STDMETHODCALLTYPE *GetTessellation )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetArea )( 
            IFaceDefinition * This,
            unsigned long bitVector);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEntity )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsValid )( 
            IFaceDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAreaEx )( 
            IFaceDefinition * This,
            unsigned long bitVector,
            double AngleTolerance);
        
        END_INTERFACE
    } IFaceDefinitionVtbl;

    interface IFaceDefinition
    {
        CONST_VTBL struct IFaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFaceDefinition_IsPlanar(This)	\
    ( (This)->lpVtbl -> IsPlanar(This) ) 

#define IFaceDefinition_IsCone(This)	\
    ( (This)->lpVtbl -> IsCone(This) ) 

#define IFaceDefinition_IsCylinder(This)	\
    ( (This)->lpVtbl -> IsCylinder(This) ) 

#define IFaceDefinition_GetCylinderParam(This,h,r)	\
    ( (This)->lpVtbl -> GetCylinderParam(This,h,r) ) 

#define IFaceDefinition_GetOwnerEntity(This)	\
    ( (This)->lpVtbl -> GetOwnerEntity(This) ) 

#define IFaceDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#define IFaceDefinition_LoopCollection(This)	\
    ( (This)->lpVtbl -> LoopCollection(This) ) 

#define IFaceDefinition_GetNormalOrientation(This)	\
    ( (This)->lpVtbl -> GetNormalOrientation(This) ) 

#define IFaceDefinition_IsConnectedWith(This,faceDefinition)	\
    ( (This)->lpVtbl -> IsConnectedWith(This,faceDefinition) ) 

#define IFaceDefinition_ConnectedFaceCollection(This)	\
    ( (This)->lpVtbl -> ConnectedFaceCollection(This) ) 

#define IFaceDefinition_EdgeCollection(This)	\
    ( (This)->lpVtbl -> EdgeCollection(This) ) 

#define IFaceDefinition_GetNextFace(This)	\
    ( (This)->lpVtbl -> GetNextFace(This) ) 

#define IFaceDefinition_IsTorus(This)	\
    ( (This)->lpVtbl -> IsTorus(This) ) 

#define IFaceDefinition_IsSphere(This)	\
    ( (This)->lpVtbl -> IsSphere(This) ) 

#define IFaceDefinition_IsNurbsSurface(This)	\
    ( (This)->lpVtbl -> IsNurbsSurface(This) ) 

#define IFaceDefinition_IsRevolved(This)	\
    ( (This)->lpVtbl -> IsRevolved(This) ) 

#define IFaceDefinition_IsSwept(This)	\
    ( (This)->lpVtbl -> IsSwept(This) ) 

#define IFaceDefinition_GetTessellation(This)	\
    ( (This)->lpVtbl -> GetTessellation(This) ) 

#define IFaceDefinition_GetArea(This,bitVector)	\
    ( (This)->lpVtbl -> GetArea(This,bitVector) ) 

#define IFaceDefinition_GetEntity(This)	\
    ( (This)->lpVtbl -> GetEntity(This) ) 

#define IFaceDefinition_IsValid(This)	\
    ( (This)->lpVtbl -> IsValid(This) ) 

#define IFaceDefinition_GetAreaEx(This,bitVector,AngleTolerance)	\
    ( (This)->lpVtbl -> GetAreaEx(This,bitVector,AngleTolerance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IEdgeDefinition_INTERFACE_DEFINED__
#define __IEdgeDefinition_INTERFACE_DEFINED__

/* interface IEdgeDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEdgeDefinition,0x7AA0E540,0x0321,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0321-11D4-A30E-00C026EE094F")
    IEdgeDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsStraight( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetOwnerEntity( void) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE GetAdjacentFace( 
            BOOL facePlus) = 0;
        
        virtual /* [helpstring] */ LPVERTEXDEFINITION STDMETHODCALLTYPE GetVertex( 
            BOOL start) = 0;
        
        virtual /* [helpstring] */ LPEDGECOLLECTION STDMETHODCALLTYPE EdgeCollection( 
            BOOL begin) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGECOLLECTION STDMETHODCALLTYPE OrientedEdgeCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsArc( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCircle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsEllipse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsNurbs( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPeriodic( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLength( 
            unsigned int bitVector) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEntity( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsValid( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSketchEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsEllipseArc( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPlanar( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsLineSeg( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEdgeDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEdgeDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEdgeDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsStraight )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetOwnerEntity )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *GetAdjacentFace )( 
            IEdgeDefinition * This,
            BOOL facePlus);
        
        /* [helpstring] */ LPVERTEXDEFINITION ( STDMETHODCALLTYPE *GetVertex )( 
            IEdgeDefinition * This,
            BOOL start);
        
        /* [helpstring] */ LPEDGECOLLECTION ( STDMETHODCALLTYPE *EdgeCollection )( 
            IEdgeDefinition * This,
            BOOL begin);
        
        /* [helpstring] */ LPORIENTEDEDGECOLLECTION ( STDMETHODCALLTYPE *OrientedEdgeCollection )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsArc )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCircle )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsEllipse )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsNurbs )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPeriodic )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLength )( 
            IEdgeDefinition * This,
            unsigned int bitVector);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEntity )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsValid )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSketchEdge )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsEllipseArc )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPlanar )( 
            IEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsLineSeg )( 
            IEdgeDefinition * This);
        
        END_INTERFACE
    } IEdgeDefinitionVtbl;

    interface IEdgeDefinition
    {
        CONST_VTBL struct IEdgeDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEdgeDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEdgeDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEdgeDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEdgeDefinition_IsStraight(This)	\
    ( (This)->lpVtbl -> IsStraight(This) ) 

#define IEdgeDefinition_GetOwnerEntity(This)	\
    ( (This)->lpVtbl -> GetOwnerEntity(This) ) 

#define IEdgeDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#define IEdgeDefinition_GetAdjacentFace(This,facePlus)	\
    ( (This)->lpVtbl -> GetAdjacentFace(This,facePlus) ) 

#define IEdgeDefinition_GetVertex(This,start)	\
    ( (This)->lpVtbl -> GetVertex(This,start) ) 

#define IEdgeDefinition_EdgeCollection(This,begin)	\
    ( (This)->lpVtbl -> EdgeCollection(This,begin) ) 

#define IEdgeDefinition_OrientedEdgeCollection(This)	\
    ( (This)->lpVtbl -> OrientedEdgeCollection(This) ) 

#define IEdgeDefinition_IsArc(This)	\
    ( (This)->lpVtbl -> IsArc(This) ) 

#define IEdgeDefinition_IsCircle(This)	\
    ( (This)->lpVtbl -> IsCircle(This) ) 

#define IEdgeDefinition_IsEllipse(This)	\
    ( (This)->lpVtbl -> IsEllipse(This) ) 

#define IEdgeDefinition_IsNurbs(This)	\
    ( (This)->lpVtbl -> IsNurbs(This) ) 

#define IEdgeDefinition_IsPeriodic(This)	\
    ( (This)->lpVtbl -> IsPeriodic(This) ) 

#define IEdgeDefinition_GetLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetLength(This,bitVector) ) 

#define IEdgeDefinition_GetEntity(This)	\
    ( (This)->lpVtbl -> GetEntity(This) ) 

#define IEdgeDefinition_IsValid(This)	\
    ( (This)->lpVtbl -> IsValid(This) ) 

#define IEdgeDefinition_GetSketchEdge(This)	\
    ( (This)->lpVtbl -> GetSketchEdge(This) ) 

#define IEdgeDefinition_IsEllipseArc(This)	\
    ( (This)->lpVtbl -> IsEllipseArc(This) ) 

#define IEdgeDefinition_IsPlanar(This)	\
    ( (This)->lpVtbl -> IsPlanar(This) ) 

#define IEdgeDefinition_IsLineSeg(This)	\
    ( (This)->lpVtbl -> IsLineSeg(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEdgeDefinition_INTERFACE_DEFINED__ */


#ifndef __IVertexDefinition_INTERFACE_DEFINED__
#define __IVertexDefinition_INTERFACE_DEFINED__

/* interface IVertexDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IVertexDefinition,0x7AA0E540,0x0320,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0320-11D4-A30E-00C026EE094F")
    IVertexDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetOwnerEntity( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTopologyVertex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFreeVertex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSketchVertex( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVertexDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVertexDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVertexDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVertexDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            IVertexDefinition * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetOwnerEntity )( 
            IVertexDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTopologyVertex )( 
            IVertexDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFreeVertex )( 
            IVertexDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSketchVertex )( 
            IVertexDefinition * This);
        
        END_INTERFACE
    } IVertexDefinitionVtbl;

    interface IVertexDefinition
    {
        CONST_VTBL struct IVertexDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVertexDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVertexDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVertexDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVertexDefinition_GetPoint(This,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint(This,x,y,z) ) 

#define IVertexDefinition_GetOwnerEntity(This)	\
    ( (This)->lpVtbl -> GetOwnerEntity(This) ) 

#define IVertexDefinition_GetTopologyVertex(This)	\
    ( (This)->lpVtbl -> GetTopologyVertex(This) ) 

#define IVertexDefinition_GetFreeVertex(This)	\
    ( (This)->lpVtbl -> GetFreeVertex(This) ) 

#define IVertexDefinition_GetSketchVertex(This)	\
    ( (This)->lpVtbl -> GetSketchVertex(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVertexDefinition_INTERFACE_DEFINED__ */


#ifndef __ISketchDefinition_INTERFACE_DEFINED__
#define __ISketchDefinition_INTERFACE_DEFINED__

/* interface ISketchDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISketchDefinition,0x7AA0E540,0x0323,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0323-11D4-A30E-00C026EE094F")
    ISketchDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLocation( 
            double *x,
            double *y) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLocation( 
            double x,
            double y) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double ang) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UserSetPlacement( 
            LPOLESTR prompt) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE BeginEdit( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE EndEdit( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLoftPoint( 
            double *x,
            double *y) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLoftPoint( 
            double x,
            double y) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE AddProjectionOf( 
            LPENTITY entity) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE BeginEditEx( 
            BOOL readOnly) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE PointProjection( 
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [in] */ double ZIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE PointOn( 
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut,
            /* [out] */ double *ZOut) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISketchDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISketchDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISketchDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            ISketchDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            ISketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLocation )( 
            ISketchDefinition * This,
            double *x,
            double *y);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLocation )( 
            ISketchDefinition * This,
            double x,
            double y);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            ISketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            ISketchDefinition * This,
            double ang);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UserSetPlacement )( 
            ISketchDefinition * This,
            LPOLESTR prompt);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *BeginEdit )( 
            ISketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *EndEdit )( 
            ISketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLoftPoint )( 
            ISketchDefinition * This,
            double *x,
            double *y);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLoftPoint )( 
            ISketchDefinition * This,
            double x,
            double y);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *AddProjectionOf )( 
            ISketchDefinition * This,
            LPENTITY entity);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            ISketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *BeginEditEx )( 
            ISketchDefinition * This,
            BOOL readOnly);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *PointProjection )( 
            ISketchDefinition * This,
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [in] */ double ZIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *PointOn )( 
            ISketchDefinition * This,
            /* [in] */ double XIn,
            /* [in] */ double YIn,
            /* [out] */ double *XOut,
            /* [out] */ double *YOut,
            /* [out] */ double *ZOut);
        
        END_INTERFACE
    } ISketchDefinitionVtbl;

    interface ISketchDefinition
    {
        CONST_VTBL struct ISketchDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISketchDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISketchDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISketchDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISketchDefinition_SetPlane(This,name)	\
    ( (This)->lpVtbl -> SetPlane(This,name) ) 

#define ISketchDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define ISketchDefinition_GetLocation(This,x,y)	\
    ( (This)->lpVtbl -> GetLocation(This,x,y) ) 

#define ISketchDefinition_SetLocation(This,x,y)	\
    ( (This)->lpVtbl -> SetLocation(This,x,y) ) 

#define ISketchDefinition_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define ISketchDefinition_SetAngle(This,ang)	\
    ( (This)->lpVtbl -> SetAngle(This,ang) ) 

#define ISketchDefinition_UserSetPlacement(This,prompt)	\
    ( (This)->lpVtbl -> UserSetPlacement(This,prompt) ) 

#define ISketchDefinition_BeginEdit(This)	\
    ( (This)->lpVtbl -> BeginEdit(This) ) 

#define ISketchDefinition_EndEdit(This)	\
    ( (This)->lpVtbl -> EndEdit(This) ) 

#define ISketchDefinition_GetLoftPoint(This,x,y)	\
    ( (This)->lpVtbl -> GetLoftPoint(This,x,y) ) 

#define ISketchDefinition_SetLoftPoint(This,x,y)	\
    ( (This)->lpVtbl -> SetLoftPoint(This,x,y) ) 

#define ISketchDefinition_AddProjectionOf(This,entity)	\
    ( (This)->lpVtbl -> AddProjectionOf(This,entity) ) 

#define ISketchDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#define ISketchDefinition_BeginEditEx(This,readOnly)	\
    ( (This)->lpVtbl -> BeginEditEx(This,readOnly) ) 

#define ISketchDefinition_PointProjection(This,XIn,YIn,ZIn,XOut,YOut)	\
    ( (This)->lpVtbl -> PointProjection(This,XIn,YIn,ZIn,XOut,YOut) ) 

#define ISketchDefinition_PointOn(This,XIn,YIn,XOut,YOut,ZOut)	\
    ( (This)->lpVtbl -> PointOn(This,XIn,YIn,XOut,YOut,ZOut) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISketchDefinition_INTERFACE_DEFINED__ */


#ifndef __IThreadDefinition_INTERFACE_DEFINED__
#define __IThreadDefinition_INTERFACE_DEFINED__

/* interface IThreadDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IThreadDefinition,0x44abb63a,0xe6f2,0x47c5,0x94,0x5c,0x5c,0x17,0xd0,0x47,0x7c,0xe0);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44abb63a-e6f2-47c5-945c-5c17d0477ce0")
    IThreadDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDr( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDr( 
            double dr) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLength( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLength( 
            double length) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetP( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetP( 
            double p) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetOutside( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAutoDefinDr( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAutoDefinDr( 
            BOOL autoDefinDr) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAllLength( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAllLength( 
            BOOL allLength) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFaceValue( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFaceValue( 
            BOOL faceValue) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetBaseObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBaseObject( 
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetFaceBegin( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFaceBegin( 
            LPENTITY face) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetFaceEnd( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFaceEnd( 
            LPENTITY face) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IThreadDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThreadDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThreadDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDr )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDr )( 
            IThreadDefinition * This,
            double dr);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLength )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLength )( 
            IThreadDefinition * This,
            double length);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetP )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetP )( 
            IThreadDefinition * This,
            double p);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetOutside )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAutoDefinDr )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAutoDefinDr )( 
            IThreadDefinition * This,
            BOOL autoDefinDr);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAllLength )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAllLength )( 
            IThreadDefinition * This,
            BOOL allLength);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFaceValue )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFaceValue )( 
            IThreadDefinition * This,
            BOOL faceValue);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetBaseObject )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBaseObject )( 
            IThreadDefinition * This,
            LPENTITY obj);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetFaceBegin )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFaceBegin )( 
            IThreadDefinition * This,
            LPENTITY face);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetFaceEnd )( 
            IThreadDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFaceEnd )( 
            IThreadDefinition * This,
            LPENTITY face);
        
        END_INTERFACE
    } IThreadDefinitionVtbl;

    interface IThreadDefinition
    {
        CONST_VTBL struct IThreadDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThreadDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThreadDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThreadDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IThreadDefinition_GetDr(This)	\
    ( (This)->lpVtbl -> GetDr(This) ) 

#define IThreadDefinition_SetDr(This,dr)	\
    ( (This)->lpVtbl -> SetDr(This,dr) ) 

#define IThreadDefinition_GetLength(This)	\
    ( (This)->lpVtbl -> GetLength(This) ) 

#define IThreadDefinition_SetLength(This,length)	\
    ( (This)->lpVtbl -> SetLength(This,length) ) 

#define IThreadDefinition_GetP(This)	\
    ( (This)->lpVtbl -> GetP(This) ) 

#define IThreadDefinition_SetP(This,p)	\
    ( (This)->lpVtbl -> SetP(This,p) ) 

#define IThreadDefinition_GetOutside(This)	\
    ( (This)->lpVtbl -> GetOutside(This) ) 

#define IThreadDefinition_GetAutoDefinDr(This)	\
    ( (This)->lpVtbl -> GetAutoDefinDr(This) ) 

#define IThreadDefinition_SetAutoDefinDr(This,autoDefinDr)	\
    ( (This)->lpVtbl -> SetAutoDefinDr(This,autoDefinDr) ) 

#define IThreadDefinition_GetAllLength(This)	\
    ( (This)->lpVtbl -> GetAllLength(This) ) 

#define IThreadDefinition_SetAllLength(This,allLength)	\
    ( (This)->lpVtbl -> SetAllLength(This,allLength) ) 

#define IThreadDefinition_GetFaceValue(This)	\
    ( (This)->lpVtbl -> GetFaceValue(This) ) 

#define IThreadDefinition_SetFaceValue(This,faceValue)	\
    ( (This)->lpVtbl -> SetFaceValue(This,faceValue) ) 

#define IThreadDefinition_GetBaseObject(This)	\
    ( (This)->lpVtbl -> GetBaseObject(This) ) 

#define IThreadDefinition_SetBaseObject(This,obj)	\
    ( (This)->lpVtbl -> SetBaseObject(This,obj) ) 

#define IThreadDefinition_GetFaceBegin(This)	\
    ( (This)->lpVtbl -> GetFaceBegin(This) ) 

#define IThreadDefinition_SetFaceBegin(This,face)	\
    ( (This)->lpVtbl -> SetFaceBegin(This,face) ) 

#define IThreadDefinition_GetFaceEnd(This)	\
    ( (This)->lpVtbl -> GetFaceEnd(This) ) 

#define IThreadDefinition_SetFaceEnd(This,face)	\
    ( (This)->lpVtbl -> SetFaceEnd(This,face) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThreadDefinition_INTERFACE_DEFINED__ */


#ifndef __IAxis2PointsDefinition_INTERFACE_DEFINED__
#define __IAxis2PointsDefinition_INTERFACE_DEFINED__

/* interface IAxis2PointsDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAxis2PointsDefinition,0x7AA0E540,0x0335,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0335-11D4-A30E-00C026EE094F")
    IAxis2PointsDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPoint( 
            long number) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPoint( 
            long number,
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxis2PointsDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxis2PointsDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxis2PointsDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxis2PointsDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPoint )( 
            IAxis2PointsDefinition * This,
            long number);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPoint )( 
            IAxis2PointsDefinition * This,
            long number,
            LPENTITY val);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IAxis2PointsDefinition * This);
        
        END_INTERFACE
    } IAxis2PointsDefinitionVtbl;

    interface IAxis2PointsDefinition
    {
        CONST_VTBL struct IAxis2PointsDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxis2PointsDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxis2PointsDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxis2PointsDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxis2PointsDefinition_GetPoint(This,number)	\
    ( (This)->lpVtbl -> GetPoint(This,number) ) 

#define IAxis2PointsDefinition_SetPoint(This,number,val)	\
    ( (This)->lpVtbl -> SetPoint(This,number,val) ) 

#define IAxis2PointsDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxis2PointsDefinition_INTERFACE_DEFINED__ */


#ifndef __IAxis2PlanesDefinition_INTERFACE_DEFINED__
#define __IAxis2PlanesDefinition_INTERFACE_DEFINED__

/* interface IAxis2PlanesDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAxis2PlanesDefinition,0x7AA0E540,0x0336,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0336-11D4-A30E-00C026EE094F")
    IAxis2PlanesDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( 
            long number) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            long number,
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxis2PlanesDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxis2PlanesDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxis2PlanesDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxis2PlanesDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IAxis2PlanesDefinition * This,
            long number);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IAxis2PlanesDefinition * This,
            long number,
            LPENTITY plane);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IAxis2PlanesDefinition * This);
        
        END_INTERFACE
    } IAxis2PlanesDefinitionVtbl;

    interface IAxis2PlanesDefinition
    {
        CONST_VTBL struct IAxis2PlanesDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxis2PlanesDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxis2PlanesDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxis2PlanesDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxis2PlanesDefinition_GetPlane(This,number)	\
    ( (This)->lpVtbl -> GetPlane(This,number) ) 

#define IAxis2PlanesDefinition_SetPlane(This,number,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,number,plane) ) 

#define IAxis2PlanesDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxis2PlanesDefinition_INTERFACE_DEFINED__ */


#ifndef __IAxisOperationsDefinition_INTERFACE_DEFINED__
#define __IAxisOperationsDefinition_INTERFACE_DEFINED__

/* interface IAxisOperationsDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAxisOperationsDefinition,0x7AA0E540,0x0337,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0337-11D4-A30E-00C026EE094F")
    IAxisOperationsDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetOperation( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetOperation( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxisOperationsDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxisOperationsDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxisOperationsDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxisOperationsDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetOperation )( 
            IAxisOperationsDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetOperation )( 
            IAxisOperationsDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IAxisOperationsDefinition * This);
        
        END_INTERFACE
    } IAxisOperationsDefinitionVtbl;

    interface IAxisOperationsDefinition
    {
        CONST_VTBL struct IAxisOperationsDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxisOperationsDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxisOperationsDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxisOperationsDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxisOperationsDefinition_GetOperation(This)	\
    ( (This)->lpVtbl -> GetOperation(This) ) 

#define IAxisOperationsDefinition_SetOperation(This,val)	\
    ( (This)->lpVtbl -> SetOperation(This,val) ) 

#define IAxisOperationsDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxisOperationsDefinition_INTERFACE_DEFINED__ */


#ifndef __IAxisEdgeDefinition_INTERFACE_DEFINED__
#define __IAxisEdgeDefinition_INTERFACE_DEFINED__

/* interface IAxisEdgeDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAxisEdgeDefinition,0x7AA0E540,0x0339,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0339-11D4-A30E-00C026EE094F")
    IAxisEdgeDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdge( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxisEdgeDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxisEdgeDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxisEdgeDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxisEdgeDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdge )( 
            IAxisEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdge )( 
            IAxisEdgeDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IAxisEdgeDefinition * This);
        
        END_INTERFACE
    } IAxisEdgeDefinitionVtbl;

    interface IAxisEdgeDefinition
    {
        CONST_VTBL struct IAxisEdgeDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxisEdgeDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxisEdgeDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxisEdgeDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxisEdgeDefinition_GetEdge(This)	\
    ( (This)->lpVtbl -> GetEdge(This) ) 

#define IAxisEdgeDefinition_SetEdge(This,val)	\
    ( (This)->lpVtbl -> SetEdge(This,val) ) 

#define IAxisEdgeDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxisEdgeDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneOffsetDefinition_INTERFACE_DEFINED__
#define __IPlaneOffsetDefinition_INTERFACE_DEFINED__

/* interface IPlaneOffsetDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneOffsetDefinition,0x7AA0E540,0x0341,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0341-11D4-A30E-00C026EE094F")
    IPlaneOffsetDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetOffset( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetOffset( 
            double val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneOffsetDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneOffsetDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneOffsetDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneOffsetDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDirection )( 
            IPlaneOffsetDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            IPlaneOffsetDefinition * This,
            BOOL val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IPlaneOffsetDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IPlaneOffsetDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetOffset )( 
            IPlaneOffsetDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetOffset )( 
            IPlaneOffsetDefinition * This,
            double val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneOffsetDefinition * This);
        
        END_INTERFACE
    } IPlaneOffsetDefinitionVtbl;

    interface IPlaneOffsetDefinition
    {
        CONST_VTBL struct IPlaneOffsetDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneOffsetDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneOffsetDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneOffsetDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneOffsetDefinition_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define IPlaneOffsetDefinition_SetDirection(This,val)	\
    ( (This)->lpVtbl -> SetDirection(This,val) ) 

#define IPlaneOffsetDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IPlaneOffsetDefinition_SetPlane(This,val)	\
    ( (This)->lpVtbl -> SetPlane(This,val) ) 

#define IPlaneOffsetDefinition_GetOffset(This)	\
    ( (This)->lpVtbl -> GetOffset(This) ) 

#define IPlaneOffsetDefinition_SetOffset(This,val)	\
    ( (This)->lpVtbl -> SetOffset(This,val) ) 

#define IPlaneOffsetDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneOffsetDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlane3PointsDefinition_INTERFACE_DEFINED__
#define __IPlane3PointsDefinition_INTERFACE_DEFINED__

/* interface IPlane3PointsDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlane3PointsDefinition,0x7AA0E540,0x0342,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0342-11D4-A30E-00C026EE094F")
    IPlane3PointsDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPoint( 
            long number) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPoint( 
            long number,
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlane3PointsDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlane3PointsDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlane3PointsDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlane3PointsDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPoint )( 
            IPlane3PointsDefinition * This,
            long number);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPoint )( 
            IPlane3PointsDefinition * This,
            long number,
            LPENTITY val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlane3PointsDefinition * This);
        
        END_INTERFACE
    } IPlane3PointsDefinitionVtbl;

    interface IPlane3PointsDefinition
    {
        CONST_VTBL struct IPlane3PointsDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlane3PointsDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlane3PointsDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlane3PointsDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlane3PointsDefinition_GetPoint(This,number)	\
    ( (This)->lpVtbl -> GetPoint(This,number) ) 

#define IPlane3PointsDefinition_SetPoint(This,number,val)	\
    ( (This)->lpVtbl -> SetPoint(This,number,val) ) 

#define IPlane3PointsDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlane3PointsDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneAngleDefinition_INTERFACE_DEFINED__
#define __IPlaneAngleDefinition_INTERFACE_DEFINED__

/* interface IPlaneAngleDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneAngleDefinition,0x7AA0E540,0x0343,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0343-11D4-A30E-00C026EE094F")
    IPlaneAngleDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis( 
            LPENTITY axis) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneAngleDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneAngleDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneAngleDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneAngleDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IPlaneAngleDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IPlaneAngleDefinition * This,
            LPENTITY plane);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis )( 
            IPlaneAngleDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis )( 
            IPlaneAngleDefinition * This,
            LPENTITY axis);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IPlaneAngleDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            IPlaneAngleDefinition * This,
            double val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneAngleDefinition * This);
        
        END_INTERFACE
    } IPlaneAngleDefinitionVtbl;

    interface IPlaneAngleDefinition
    {
        CONST_VTBL struct IPlaneAngleDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneAngleDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneAngleDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneAngleDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneAngleDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IPlaneAngleDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#define IPlaneAngleDefinition_GetAxis(This)	\
    ( (This)->lpVtbl -> GetAxis(This) ) 

#define IPlaneAngleDefinition_SetAxis(This,axis)	\
    ( (This)->lpVtbl -> SetAxis(This,axis) ) 

#define IPlaneAngleDefinition_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IPlaneAngleDefinition_SetAngle(This,val)	\
    ( (This)->lpVtbl -> SetAngle(This,val) ) 

#define IPlaneAngleDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneAngleDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneEdgePointDefinition_INTERFACE_DEFINED__
#define __IPlaneEdgePointDefinition_INTERFACE_DEFINED__

/* interface IPlaneEdgePointDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneEdgePointDefinition,0x7AA0E540,0x0344,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0344-11D4-A30E-00C026EE094F")
    IPlaneEdgePointDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdge( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPoint( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPoint( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneEdgePointDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneEdgePointDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneEdgePointDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneEdgePointDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdge )( 
            IPlaneEdgePointDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdge )( 
            IPlaneEdgePointDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPoint )( 
            IPlaneEdgePointDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPoint )( 
            IPlaneEdgePointDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneEdgePointDefinition * This);
        
        END_INTERFACE
    } IPlaneEdgePointDefinitionVtbl;

    interface IPlaneEdgePointDefinition
    {
        CONST_VTBL struct IPlaneEdgePointDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneEdgePointDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneEdgePointDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneEdgePointDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneEdgePointDefinition_GetEdge(This)	\
    ( (This)->lpVtbl -> GetEdge(This) ) 

#define IPlaneEdgePointDefinition_SetEdge(This,val)	\
    ( (This)->lpVtbl -> SetEdge(This,val) ) 

#define IPlaneEdgePointDefinition_GetPoint(This)	\
    ( (This)->lpVtbl -> GetPoint(This) ) 

#define IPlaneEdgePointDefinition_SetPoint(This,val)	\
    ( (This)->lpVtbl -> SetPoint(This,val) ) 

#define IPlaneEdgePointDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneEdgePointDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneParallelDefinition_INTERFACE_DEFINED__
#define __IPlaneParallelDefinition_INTERFACE_DEFINED__

/* interface IPlaneParallelDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneParallelDefinition,0x7AA0E540,0x0345,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0345-11D4-A30E-00C026EE094F")
    IPlaneParallelDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPoint( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPoint( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneParallelDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneParallelDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneParallelDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneParallelDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IPlaneParallelDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IPlaneParallelDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPoint )( 
            IPlaneParallelDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPoint )( 
            IPlaneParallelDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneParallelDefinition * This);
        
        END_INTERFACE
    } IPlaneParallelDefinitionVtbl;

    interface IPlaneParallelDefinition
    {
        CONST_VTBL struct IPlaneParallelDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneParallelDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneParallelDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneParallelDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneParallelDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IPlaneParallelDefinition_SetPlane(This,val)	\
    ( (This)->lpVtbl -> SetPlane(This,val) ) 

#define IPlaneParallelDefinition_GetPoint(This)	\
    ( (This)->lpVtbl -> GetPoint(This) ) 

#define IPlaneParallelDefinition_SetPoint(This,val)	\
    ( (This)->lpVtbl -> SetPoint(This,val) ) 

#define IPlaneParallelDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneParallelDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlanePerpendicularDefinition_INTERFACE_DEFINED__
#define __IPlanePerpendicularDefinition_INTERFACE_DEFINED__

/* interface IPlanePerpendicularDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlanePerpendicularDefinition,0x7AA0E540,0x0346,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0346-11D4-A30E-00C026EE094F")
    IPlanePerpendicularDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdge( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPoint( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPoint( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlanePerpendicularDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlanePerpendicularDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlanePerpendicularDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlanePerpendicularDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdge )( 
            IPlanePerpendicularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdge )( 
            IPlanePerpendicularDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPoint )( 
            IPlanePerpendicularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPoint )( 
            IPlanePerpendicularDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlanePerpendicularDefinition * This);
        
        END_INTERFACE
    } IPlanePerpendicularDefinitionVtbl;

    interface IPlanePerpendicularDefinition
    {
        CONST_VTBL struct IPlanePerpendicularDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlanePerpendicularDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlanePerpendicularDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlanePerpendicularDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlanePerpendicularDefinition_GetEdge(This)	\
    ( (This)->lpVtbl -> GetEdge(This) ) 

#define IPlanePerpendicularDefinition_SetEdge(This,val)	\
    ( (This)->lpVtbl -> SetEdge(This,val) ) 

#define IPlanePerpendicularDefinition_GetPoint(This)	\
    ( (This)->lpVtbl -> GetPoint(This) ) 

#define IPlanePerpendicularDefinition_SetPoint(This,val)	\
    ( (This)->lpVtbl -> SetPoint(This,val) ) 

#define IPlanePerpendicularDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlanePerpendicularDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneNormalToSurfaceDefinition_INTERFACE_DEFINED__
#define __IPlaneNormalToSurfaceDefinition_INTERFACE_DEFINED__

/* interface IPlaneNormalToSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneNormalToSurfaceDefinition,0x7AA0E540,0x0347,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0347-11D4-A30E-00C026EE094F")
    IPlaneNormalToSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetFace( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFace( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double ang) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAutoBuilding( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAutoBuilding( 
            BOOL val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneNormalToSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneNormalToSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetFace )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFace )( 
            IPlaneNormalToSurfaceDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IPlaneNormalToSurfaceDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            IPlaneNormalToSurfaceDefinition * This,
            double ang);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAutoBuilding )( 
            IPlaneNormalToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAutoBuilding )( 
            IPlaneNormalToSurfaceDefinition * This,
            BOOL val);
        
        END_INTERFACE
    } IPlaneNormalToSurfaceDefinitionVtbl;

    interface IPlaneNormalToSurfaceDefinition
    {
        CONST_VTBL struct IPlaneNormalToSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneNormalToSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneNormalToSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneNormalToSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneNormalToSurfaceDefinition_GetFace(This)	\
    ( (This)->lpVtbl -> GetFace(This) ) 

#define IPlaneNormalToSurfaceDefinition_SetFace(This,val)	\
    ( (This)->lpVtbl -> SetFace(This,val) ) 

#define IPlaneNormalToSurfaceDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IPlaneNormalToSurfaceDefinition_SetPlane(This,val)	\
    ( (This)->lpVtbl -> SetPlane(This,val) ) 

#define IPlaneNormalToSurfaceDefinition_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IPlaneNormalToSurfaceDefinition_SetAngle(This,ang)	\
    ( (This)->lpVtbl -> SetAngle(This,ang) ) 

#define IPlaneNormalToSurfaceDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#define IPlaneNormalToSurfaceDefinition_GetAutoBuilding(This)	\
    ( (This)->lpVtbl -> GetAutoBuilding(This) ) 

#define IPlaneNormalToSurfaceDefinition_SetAutoBuilding(This,val)	\
    ( (This)->lpVtbl -> SetAutoBuilding(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneNormalToSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneTangentToSurfaceDefinition_INTERFACE_DEFINED__
#define __IPlaneTangentToSurfaceDefinition_INTERFACE_DEFINED__

/* interface IPlaneTangentToSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneTangentToSurfaceDefinition,0x7AA0E540,0x0348,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0348-11D4-A30E-00C026EE094F")
    IPlaneTangentToSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetFace( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFace( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetChoosePlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChoosePlane( 
            short choose) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double ang) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneTangentToSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneTangentToSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetFace )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFace )( 
            IPlaneTangentToSurfaceDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IPlaneTangentToSurfaceDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetChoosePlane )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChoosePlane )( 
            IPlaneTangentToSurfaceDefinition * This,
            short choose);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IPlaneTangentToSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            IPlaneTangentToSurfaceDefinition * This,
            double ang);
        
        END_INTERFACE
    } IPlaneTangentToSurfaceDefinitionVtbl;

    interface IPlaneTangentToSurfaceDefinition
    {
        CONST_VTBL struct IPlaneTangentToSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneTangentToSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneTangentToSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneTangentToSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneTangentToSurfaceDefinition_GetFace(This)	\
    ( (This)->lpVtbl -> GetFace(This) ) 

#define IPlaneTangentToSurfaceDefinition_SetFace(This,val)	\
    ( (This)->lpVtbl -> SetFace(This,val) ) 

#define IPlaneTangentToSurfaceDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IPlaneTangentToSurfaceDefinition_SetPlane(This,val)	\
    ( (This)->lpVtbl -> SetPlane(This,val) ) 

#define IPlaneTangentToSurfaceDefinition_GetChoosePlane(This)	\
    ( (This)->lpVtbl -> GetChoosePlane(This) ) 

#define IPlaneTangentToSurfaceDefinition_SetChoosePlane(This,choose)	\
    ( (This)->lpVtbl -> SetChoosePlane(This,choose) ) 

#define IPlaneTangentToSurfaceDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#define IPlaneTangentToSurfaceDefinition_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IPlaneTangentToSurfaceDefinition_SetAngle(This,ang)	\
    ( (This)->lpVtbl -> SetAngle(This,ang) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneTangentToSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneLineToEdgeDefinition_INTERFACE_DEFINED__
#define __IPlaneLineToEdgeDefinition_INTERFACE_DEFINED__

/* interface IPlaneLineToEdgeDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneLineToEdgeDefinition,0x7AA0E540,0x0349,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0349-11D4-A30E-00C026EE094F")
    IPlaneLineToEdgeDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdgeFirst( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdgeFirst( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdgeSecond( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdgeSecond( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetParallel( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetParallel( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneLineToEdgeDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneLineToEdgeDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneLineToEdgeDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneLineToEdgeDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdgeFirst )( 
            IPlaneLineToEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdgeFirst )( 
            IPlaneLineToEdgeDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdgeSecond )( 
            IPlaneLineToEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdgeSecond )( 
            IPlaneLineToEdgeDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetParallel )( 
            IPlaneLineToEdgeDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetParallel )( 
            IPlaneLineToEdgeDefinition * This,
            BOOL val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneLineToEdgeDefinition * This);
        
        END_INTERFACE
    } IPlaneLineToEdgeDefinitionVtbl;

    interface IPlaneLineToEdgeDefinition
    {
        CONST_VTBL struct IPlaneLineToEdgeDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneLineToEdgeDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneLineToEdgeDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneLineToEdgeDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneLineToEdgeDefinition_GetEdgeFirst(This)	\
    ( (This)->lpVtbl -> GetEdgeFirst(This) ) 

#define IPlaneLineToEdgeDefinition_SetEdgeFirst(This,val)	\
    ( (This)->lpVtbl -> SetEdgeFirst(This,val) ) 

#define IPlaneLineToEdgeDefinition_GetEdgeSecond(This)	\
    ( (This)->lpVtbl -> GetEdgeSecond(This) ) 

#define IPlaneLineToEdgeDefinition_SetEdgeSecond(This,val)	\
    ( (This)->lpVtbl -> SetEdgeSecond(This,val) ) 

#define IPlaneLineToEdgeDefinition_GetParallel(This)	\
    ( (This)->lpVtbl -> GetParallel(This) ) 

#define IPlaneLineToEdgeDefinition_SetParallel(This,val)	\
    ( (This)->lpVtbl -> SetParallel(This,val) ) 

#define IPlaneLineToEdgeDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneLineToEdgeDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneLineToPlaneDefinition_INTERFACE_DEFINED__
#define __IPlaneLineToPlaneDefinition_INTERFACE_DEFINED__

/* interface IPlaneLineToPlaneDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneLineToPlaneDefinition,0x7AA0E540,0x0350,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0350-11D4-A30E-00C026EE094F")
    IPlaneLineToPlaneDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdge( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetParallel( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetParallel( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneLineToPlaneDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneLineToPlaneDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneLineToPlaneDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneLineToPlaneDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdge )( 
            IPlaneLineToPlaneDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdge )( 
            IPlaneLineToPlaneDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IPlaneLineToPlaneDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IPlaneLineToPlaneDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetParallel )( 
            IPlaneLineToPlaneDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetParallel )( 
            IPlaneLineToPlaneDefinition * This,
            BOOL val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneLineToPlaneDefinition * This);
        
        END_INTERFACE
    } IPlaneLineToPlaneDefinitionVtbl;

    interface IPlaneLineToPlaneDefinition
    {
        CONST_VTBL struct IPlaneLineToPlaneDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneLineToPlaneDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneLineToPlaneDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneLineToPlaneDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneLineToPlaneDefinition_GetEdge(This)	\
    ( (This)->lpVtbl -> GetEdge(This) ) 

#define IPlaneLineToPlaneDefinition_SetEdge(This,val)	\
    ( (This)->lpVtbl -> SetEdge(This,val) ) 

#define IPlaneLineToPlaneDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IPlaneLineToPlaneDefinition_SetPlane(This,val)	\
    ( (This)->lpVtbl -> SetPlane(This,val) ) 

#define IPlaneLineToPlaneDefinition_GetParallel(This)	\
    ( (This)->lpVtbl -> GetParallel(This) ) 

#define IPlaneLineToPlaneDefinition_SetParallel(This,val)	\
    ( (This)->lpVtbl -> SetParallel(This,val) ) 

#define IPlaneLineToPlaneDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneLineToPlaneDefinition_INTERFACE_DEFINED__ */


#ifndef __IBaseExtrusionDefinition_INTERFACE_DEFINED__
#define __IBaseExtrusionDefinition_INTERFACE_DEFINED__

/* interface IBaseExtrusionDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBaseExtrusionDefinition,0x7AA0E540,0x0355,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0355-11D4-A30E-00C026EE094F")
    IBaseExtrusionDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            BYTE type,
            double depth,
            double draftValue,
            BOOL draftOutward) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPEXTRUSIONPARAM STDMETHODCALLTYPE ExtrusionParam( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDepthObject( 
            BOOL normal,
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ResetDepthObject( 
            BOOL normal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBaseExtrusionDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBaseExtrusionDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBaseExtrusionDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBaseExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IBaseExtrusionDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IBaseExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            IBaseExtrusionDefinition * This,
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            IBaseExtrusionDefinition * This,
            BOOL forward,
            BYTE type,
            double depth,
            double draftValue,
            BOOL draftOutward);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBaseExtrusionDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBaseExtrusionDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            IBaseExtrusionDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            IBaseExtrusionDefinition * This);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBaseExtrusionDefinition * This);
        
        /* [helpstring] */ LPEXTRUSIONPARAM ( STDMETHODCALLTYPE *ExtrusionParam )( 
            IBaseExtrusionDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDepthObject )( 
            IBaseExtrusionDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDepthObject )( 
            IBaseExtrusionDefinition * This,
            BOOL normal,
            LPENTITY obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ResetDepthObject )( 
            IBaseExtrusionDefinition * This,
            BOOL normal);
        
        END_INTERFACE
    } IBaseExtrusionDefinitionVtbl;

    interface IBaseExtrusionDefinition
    {
        CONST_VTBL struct IBaseExtrusionDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBaseExtrusionDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBaseExtrusionDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBaseExtrusionDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBaseExtrusionDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define IBaseExtrusionDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IBaseExtrusionDefinition_GetSideParam(This,forward,type,depth,draftValue,draftOutward)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,type,depth,draftValue,draftOutward) ) 

#define IBaseExtrusionDefinition_SetSideParam(This,forward,type,depth,draftValue,draftOutward)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,type,depth,draftValue,draftOutward) ) 

#define IBaseExtrusionDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseExtrusionDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseExtrusionDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define IBaseExtrusionDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define IBaseExtrusionDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBaseExtrusionDefinition_ExtrusionParam(This)	\
    ( (This)->lpVtbl -> ExtrusionParam(This) ) 

#define IBaseExtrusionDefinition_GetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> GetDepthObject(This,normal) ) 

#define IBaseExtrusionDefinition_SetDepthObject(This,normal,obj)	\
    ( (This)->lpVtbl -> SetDepthObject(This,normal,obj) ) 

#define IBaseExtrusionDefinition_ResetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> ResetDepthObject(This,normal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBaseExtrusionDefinition_INTERFACE_DEFINED__ */


#ifndef __IBossExtrusionDefinition_INTERFACE_DEFINED__
#define __IBossExtrusionDefinition_INTERFACE_DEFINED__

/* interface IBossExtrusionDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBossExtrusionDefinition,0x7AA0E540,0x0356,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0356-11D4-A30E-00C026EE094F")
    IBossExtrusionDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            BYTE type,
            double depth,
            double depthToObj,
            BOOL draftOutward) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPEXTRUSIONPARAM STDMETHODCALLTYPE ExtrusionParam( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDepthObject( 
            BOOL normal,
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ResetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBossExtrusionDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBossExtrusionDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBossExtrusionDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IBossExtrusionDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            IBossExtrusionDefinition * This,
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            IBossExtrusionDefinition * This,
            BOOL forward,
            BYTE type,
            double depth,
            double depthToObj,
            BOOL draftOutward);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBossExtrusionDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBossExtrusionDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            IBossExtrusionDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ LPEXTRUSIONPARAM ( STDMETHODCALLTYPE *ExtrusionParam )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDepthObject )( 
            IBossExtrusionDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDepthObject )( 
            IBossExtrusionDefinition * This,
            BOOL normal,
            LPENTITY obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ResetDepthObject )( 
            IBossExtrusionDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            IBossExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            IBossExtrusionDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            IBossExtrusionDefinition * This);
        
        END_INTERFACE
    } IBossExtrusionDefinitionVtbl;

    interface IBossExtrusionDefinition
    {
        CONST_VTBL struct IBossExtrusionDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBossExtrusionDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBossExtrusionDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBossExtrusionDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBossExtrusionDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define IBossExtrusionDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IBossExtrusionDefinition_GetSideParam(This,forward,type,depth,draftValue,draftOutward)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,type,depth,draftValue,draftOutward) ) 

#define IBossExtrusionDefinition_SetSideParam(This,forward,type,depth,depthToObj,draftOutward)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,type,depth,depthToObj,draftOutward) ) 

#define IBossExtrusionDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossExtrusionDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossExtrusionDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define IBossExtrusionDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define IBossExtrusionDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBossExtrusionDefinition_ExtrusionParam(This)	\
    ( (This)->lpVtbl -> ExtrusionParam(This) ) 

#define IBossExtrusionDefinition_GetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> GetDepthObject(This,normal) ) 

#define IBossExtrusionDefinition_SetDepthObject(This,normal,obj)	\
    ( (This)->lpVtbl -> SetDepthObject(This,normal,obj) ) 

#define IBossExtrusionDefinition_ResetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> ResetDepthObject(This,normal) ) 

#define IBossExtrusionDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define IBossExtrusionDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define IBossExtrusionDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define IBossExtrusionDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBossExtrusionDefinition_INTERFACE_DEFINED__ */


#ifndef __ICutExtrusionDefinition_INTERFACE_DEFINED__
#define __ICutExtrusionDefinition_INTERFACE_DEFINED__

/* interface ICutExtrusionDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICutExtrusionDefinition,0x7AA0E540,0x0357,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0357-11D4-A30E-00C026EE094F")
    ICutExtrusionDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            BYTE type,
            double depth,
            double depthToObj,
            BOOL draftOutward) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPEXTRUSIONPARAM STDMETHODCALLTYPE ExtrusionParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCut( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCut( 
            BOOL cut) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDepthObject( 
            BOOL normal,
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ResetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICutExtrusionDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICutExtrusionDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICutExtrusionDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            ICutExtrusionDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            ICutExtrusionDefinition * This,
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            ICutExtrusionDefinition * This,
            BOOL forward,
            BYTE type,
            double depth,
            double depthToObj,
            BOOL draftOutward);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            ICutExtrusionDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            ICutExtrusionDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            ICutExtrusionDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ LPEXTRUSIONPARAM ( STDMETHODCALLTYPE *ExtrusionParam )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCut )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCut )( 
            ICutExtrusionDefinition * This,
            BOOL cut);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDepthObject )( 
            ICutExtrusionDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDepthObject )( 
            ICutExtrusionDefinition * This,
            BOOL normal,
            LPENTITY obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ResetDepthObject )( 
            ICutExtrusionDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            ICutExtrusionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            ICutExtrusionDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            ICutExtrusionDefinition * This);
        
        END_INTERFACE
    } ICutExtrusionDefinitionVtbl;

    interface ICutExtrusionDefinition
    {
        CONST_VTBL struct ICutExtrusionDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICutExtrusionDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICutExtrusionDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICutExtrusionDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICutExtrusionDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define ICutExtrusionDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define ICutExtrusionDefinition_GetSideParam(This,forward,type,depth,draftValue,draftOutward)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,type,depth,draftValue,draftOutward) ) 

#define ICutExtrusionDefinition_SetSideParam(This,forward,type,depth,depthToObj,draftOutward)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,type,depth,depthToObj,draftOutward) ) 

#define ICutExtrusionDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutExtrusionDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutExtrusionDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define ICutExtrusionDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define ICutExtrusionDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define ICutExtrusionDefinition_ExtrusionParam(This)	\
    ( (This)->lpVtbl -> ExtrusionParam(This) ) 

#define ICutExtrusionDefinition_GetCut(This)	\
    ( (This)->lpVtbl -> GetCut(This) ) 

#define ICutExtrusionDefinition_SetCut(This,cut)	\
    ( (This)->lpVtbl -> SetCut(This,cut) ) 

#define ICutExtrusionDefinition_GetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> GetDepthObject(This,normal) ) 

#define ICutExtrusionDefinition_SetDepthObject(This,normal,obj)	\
    ( (This)->lpVtbl -> SetDepthObject(This,normal,obj) ) 

#define ICutExtrusionDefinition_ResetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> ResetDepthObject(This,normal) ) 

#define ICutExtrusionDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define ICutExtrusionDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define ICutExtrusionDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define ICutExtrusionDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICutExtrusionDefinition_INTERFACE_DEFINED__ */


#ifndef __IBaseRotatedDefinition_INTERFACE_DEFINED__
#define __IBaseRotatedDefinition_INTERFACE_DEFINED__

/* interface IBaseRotatedDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBaseRotatedDefinition,0x7AA0E540,0x0358,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0358-11D4-A30E-00C026EE094F")
    IBaseRotatedDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            double *angle) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            double angle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetToroidShapeType( 
            BOOL dirType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetToroidShapeType( void) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPROTATEDPARAM STDMETHODCALLTYPE RotatedParam( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBaseRotatedDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBaseRotatedDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBaseRotatedDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBaseRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IBaseRotatedDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IBaseRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            IBaseRotatedDefinition * This,
            BOOL forward,
            double *angle);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            IBaseRotatedDefinition * This,
            BOOL forward,
            double angle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBaseRotatedDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBaseRotatedDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            IBaseRotatedDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            IBaseRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetToroidShapeType )( 
            IBaseRotatedDefinition * This,
            BOOL dirType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetToroidShapeType )( 
            IBaseRotatedDefinition * This);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBaseRotatedDefinition * This);
        
        /* [helpstring] */ LPROTATEDPARAM ( STDMETHODCALLTYPE *RotatedParam )( 
            IBaseRotatedDefinition * This);
        
        END_INTERFACE
    } IBaseRotatedDefinitionVtbl;

    interface IBaseRotatedDefinition
    {
        CONST_VTBL struct IBaseRotatedDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBaseRotatedDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBaseRotatedDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBaseRotatedDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBaseRotatedDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define IBaseRotatedDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IBaseRotatedDefinition_GetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,angle) ) 

#define IBaseRotatedDefinition_SetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,angle) ) 

#define IBaseRotatedDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseRotatedDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseRotatedDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define IBaseRotatedDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define IBaseRotatedDefinition_SetToroidShapeType(This,dirType)	\
    ( (This)->lpVtbl -> SetToroidShapeType(This,dirType) ) 

#define IBaseRotatedDefinition_GetToroidShapeType(This)	\
    ( (This)->lpVtbl -> GetToroidShapeType(This) ) 

#define IBaseRotatedDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBaseRotatedDefinition_RotatedParam(This)	\
    ( (This)->lpVtbl -> RotatedParam(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBaseRotatedDefinition_INTERFACE_DEFINED__ */


#ifndef __IBossRotatedDefinition_INTERFACE_DEFINED__
#define __IBossRotatedDefinition_INTERFACE_DEFINED__

/* interface IBossRotatedDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBossRotatedDefinition,0x7AA0E540,0x0359,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0359-11D4-A30E-00C026EE094F")
    IBossRotatedDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            double *angle) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            double angle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetToroidShapeType( 
            BOOL dirType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetToroidShapeType( void) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPROTATEDPARAM STDMETHODCALLTYPE RotatedParam( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBossRotatedDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBossRotatedDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBossRotatedDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IBossRotatedDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            IBossRotatedDefinition * This,
            BOOL forward,
            double *angle);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            IBossRotatedDefinition * This,
            BOOL forward,
            double angle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBossRotatedDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBossRotatedDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            IBossRotatedDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetToroidShapeType )( 
            IBossRotatedDefinition * This,
            BOOL dirType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetToroidShapeType )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ LPROTATEDPARAM ( STDMETHODCALLTYPE *RotatedParam )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            IBossRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            IBossRotatedDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            IBossRotatedDefinition * This);
        
        END_INTERFACE
    } IBossRotatedDefinitionVtbl;

    interface IBossRotatedDefinition
    {
        CONST_VTBL struct IBossRotatedDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBossRotatedDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBossRotatedDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBossRotatedDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBossRotatedDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define IBossRotatedDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IBossRotatedDefinition_GetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,angle) ) 

#define IBossRotatedDefinition_SetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,angle) ) 

#define IBossRotatedDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossRotatedDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossRotatedDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define IBossRotatedDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define IBossRotatedDefinition_SetToroidShapeType(This,dirType)	\
    ( (This)->lpVtbl -> SetToroidShapeType(This,dirType) ) 

#define IBossRotatedDefinition_GetToroidShapeType(This)	\
    ( (This)->lpVtbl -> GetToroidShapeType(This) ) 

#define IBossRotatedDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBossRotatedDefinition_RotatedParam(This)	\
    ( (This)->lpVtbl -> RotatedParam(This) ) 

#define IBossRotatedDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define IBossRotatedDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define IBossRotatedDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define IBossRotatedDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBossRotatedDefinition_INTERFACE_DEFINED__ */


#ifndef __ICutRotatedDefinition_INTERFACE_DEFINED__
#define __ICutRotatedDefinition_INTERFACE_DEFINED__

/* interface ICutRotatedDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICutRotatedDefinition,0x7AA0E540,0x0360,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0360-11D4-A30E-00C026EE094F")
    ICutRotatedDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            double *angle) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            double angle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetToroidShapeType( 
            BOOL dirType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetToroidShapeType( void) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPROTATEDPARAM STDMETHODCALLTYPE RotatedParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCut( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCut( 
            BOOL cut) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICutRotatedDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICutRotatedDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICutRotatedDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            ICutRotatedDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            ICutRotatedDefinition * This,
            BOOL forward,
            double *angle);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            ICutRotatedDefinition * This,
            BOOL forward,
            double angle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            ICutRotatedDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            ICutRotatedDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            ICutRotatedDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetToroidShapeType )( 
            ICutRotatedDefinition * This,
            BOOL dirType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetToroidShapeType )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ LPROTATEDPARAM ( STDMETHODCALLTYPE *RotatedParam )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCut )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCut )( 
            ICutRotatedDefinition * This,
            BOOL cut);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            ICutRotatedDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            ICutRotatedDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            ICutRotatedDefinition * This);
        
        END_INTERFACE
    } ICutRotatedDefinitionVtbl;

    interface ICutRotatedDefinition
    {
        CONST_VTBL struct ICutRotatedDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICutRotatedDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICutRotatedDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICutRotatedDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICutRotatedDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define ICutRotatedDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define ICutRotatedDefinition_GetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,angle) ) 

#define ICutRotatedDefinition_SetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,angle) ) 

#define ICutRotatedDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutRotatedDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutRotatedDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define ICutRotatedDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define ICutRotatedDefinition_SetToroidShapeType(This,dirType)	\
    ( (This)->lpVtbl -> SetToroidShapeType(This,dirType) ) 

#define ICutRotatedDefinition_GetToroidShapeType(This)	\
    ( (This)->lpVtbl -> GetToroidShapeType(This) ) 

#define ICutRotatedDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define ICutRotatedDefinition_RotatedParam(This)	\
    ( (This)->lpVtbl -> RotatedParam(This) ) 

#define ICutRotatedDefinition_GetCut(This)	\
    ( (This)->lpVtbl -> GetCut(This) ) 

#define ICutRotatedDefinition_SetCut(This,cut)	\
    ( (This)->lpVtbl -> SetCut(This,cut) ) 

#define ICutRotatedDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define ICutRotatedDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define ICutRotatedDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define ICutRotatedDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICutRotatedDefinition_INTERFACE_DEFINED__ */


#ifndef __IBaseLoftDefinition_INTERFACE_DEFINED__
#define __IBaseLoftDefinition_INTERFACE_DEFINED__

/* interface IBaseLoftDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBaseLoftDefinition,0x7AA0E540,0x0361,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0361-11D4-A30E-00C026EE094F")
    IBaseLoftDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLoftParam( 
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetLoftParam( 
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE Sketchs( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBaseLoftDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBaseLoftDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBaseLoftDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBaseLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLoftParam )( 
            IBaseLoftDefinition * This,
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetLoftParam )( 
            IBaseLoftDefinition * This,
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBaseLoftDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBaseLoftDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBaseLoftDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *Sketchs )( 
            IBaseLoftDefinition * This);
        
        END_INTERFACE
    } IBaseLoftDefinitionVtbl;

    interface IBaseLoftDefinition
    {
        CONST_VTBL struct IBaseLoftDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBaseLoftDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBaseLoftDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBaseLoftDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBaseLoftDefinition_GetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> GetLoftParam(This,closed,flipVertex,autoPath) ) 

#define IBaseLoftDefinition_SetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> SetLoftParam(This,closed,flipVertex,autoPath) ) 

#define IBaseLoftDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseLoftDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseLoftDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBaseLoftDefinition_Sketchs(This)	\
    ( (This)->lpVtbl -> Sketchs(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBaseLoftDefinition_INTERFACE_DEFINED__ */


#ifndef __IBossLoftDefinition_INTERFACE_DEFINED__
#define __IBossLoftDefinition_INTERFACE_DEFINED__

/* interface IBossLoftDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBossLoftDefinition,0x7AA0E540,0x0362,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0362-11D4-A30E-00C026EE094F")
    IBossLoftDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLoftParam( 
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetLoftParam( 
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE Sketchs( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDirectionalLine( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionalLine( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBossLoftDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBossLoftDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBossLoftDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBossLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLoftParam )( 
            IBossLoftDefinition * This,
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetLoftParam )( 
            IBossLoftDefinition * This,
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBossLoftDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBossLoftDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBossLoftDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *Sketchs )( 
            IBossLoftDefinition * This);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            IBossLoftDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDirectionalLine )( 
            IBossLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionalLine )( 
            IBossLoftDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            IBossLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            IBossLoftDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            IBossLoftDefinition * This);
        
        END_INTERFACE
    } IBossLoftDefinitionVtbl;

    interface IBossLoftDefinition
    {
        CONST_VTBL struct IBossLoftDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBossLoftDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBossLoftDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBossLoftDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBossLoftDefinition_GetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> GetLoftParam(This,closed,flipVertex,autoPath) ) 

#define IBossLoftDefinition_SetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> SetLoftParam(This,closed,flipVertex,autoPath) ) 

#define IBossLoftDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossLoftDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossLoftDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBossLoftDefinition_Sketchs(This)	\
    ( (This)->lpVtbl -> Sketchs(This) ) 

#define IBossLoftDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define IBossLoftDefinition_GetDirectionalLine(This)	\
    ( (This)->lpVtbl -> GetDirectionalLine(This) ) 

#define IBossLoftDefinition_SetDirectionalLine(This,sketch)	\
    ( (This)->lpVtbl -> SetDirectionalLine(This,sketch) ) 

#define IBossLoftDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define IBossLoftDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define IBossLoftDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBossLoftDefinition_INTERFACE_DEFINED__ */


#ifndef __ICutLoftDefinition_INTERFACE_DEFINED__
#define __ICutLoftDefinition_INTERFACE_DEFINED__

/* interface ICutLoftDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICutLoftDefinition,0x7AA0E540,0x0363,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0363-11D4-A30E-00C026EE094F")
    ICutLoftDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLoftParam( 
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetLoftParam( 
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE Sketchs( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCut( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCut( 
            BOOL cut) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDirectionalLine( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionalLine( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICutLoftDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICutLoftDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICutLoftDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLoftParam )( 
            ICutLoftDefinition * This,
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetLoftParam )( 
            ICutLoftDefinition * This,
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            ICutLoftDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            ICutLoftDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *Sketchs )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCut )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCut )( 
            ICutLoftDefinition * This,
            BOOL cut);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDirectionalLine )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionalLine )( 
            ICutLoftDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            ICutLoftDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            ICutLoftDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            ICutLoftDefinition * This);
        
        END_INTERFACE
    } ICutLoftDefinitionVtbl;

    interface ICutLoftDefinition
    {
        CONST_VTBL struct ICutLoftDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICutLoftDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICutLoftDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICutLoftDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICutLoftDefinition_GetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> GetLoftParam(This,closed,flipVertex,autoPath) ) 

#define ICutLoftDefinition_SetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> SetLoftParam(This,closed,flipVertex,autoPath) ) 

#define ICutLoftDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutLoftDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutLoftDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define ICutLoftDefinition_Sketchs(This)	\
    ( (This)->lpVtbl -> Sketchs(This) ) 

#define ICutLoftDefinition_GetCut(This)	\
    ( (This)->lpVtbl -> GetCut(This) ) 

#define ICutLoftDefinition_SetCut(This,cut)	\
    ( (This)->lpVtbl -> SetCut(This,cut) ) 

#define ICutLoftDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define ICutLoftDefinition_GetDirectionalLine(This)	\
    ( (This)->lpVtbl -> GetDirectionalLine(This) ) 

#define ICutLoftDefinition_SetDirectionalLine(This,sketch)	\
    ( (This)->lpVtbl -> SetDirectionalLine(This,sketch) ) 

#define ICutLoftDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define ICutLoftDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define ICutLoftDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICutLoftDefinition_INTERFACE_DEFINED__ */


#ifndef __IBaseEvolutionDefinition_INTERFACE_DEFINED__
#define __IBaseEvolutionDefinition_INTERFACE_DEFINED__

/* interface IBaseEvolutionDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBaseEvolutionDefinition,0x7AA0E540,0x0364,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0364-11D4-A30E-00C026EE094F")
    IBaseEvolutionDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE PathPartArray( void) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetSketchShiftType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketchShiftType( 
            short s) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetPathLength( 
            unsigned int bitVector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBaseEvolutionDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBaseEvolutionDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBaseEvolutionDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBaseEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IBaseEvolutionDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IBaseEvolutionDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *PathPartArray )( 
            IBaseEvolutionDefinition * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetSketchShiftType )( 
            IBaseEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketchShiftType )( 
            IBaseEvolutionDefinition * This,
            short s);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBaseEvolutionDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBaseEvolutionDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBaseEvolutionDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetPathLength )( 
            IBaseEvolutionDefinition * This,
            unsigned int bitVector);
        
        END_INTERFACE
    } IBaseEvolutionDefinitionVtbl;

    interface IBaseEvolutionDefinition
    {
        CONST_VTBL struct IBaseEvolutionDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBaseEvolutionDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBaseEvolutionDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBaseEvolutionDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBaseEvolutionDefinition_SetSketch(This,sketch)	\
    ( (This)->lpVtbl -> SetSketch(This,sketch) ) 

#define IBaseEvolutionDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IBaseEvolutionDefinition_PathPartArray(This)	\
    ( (This)->lpVtbl -> PathPartArray(This) ) 

#define IBaseEvolutionDefinition_GetSketchShiftType(This)	\
    ( (This)->lpVtbl -> GetSketchShiftType(This) ) 

#define IBaseEvolutionDefinition_SetSketchShiftType(This,s)	\
    ( (This)->lpVtbl -> SetSketchShiftType(This,s) ) 

#define IBaseEvolutionDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseEvolutionDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBaseEvolutionDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBaseEvolutionDefinition_GetPathLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetPathLength(This,bitVector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBaseEvolutionDefinition_INTERFACE_DEFINED__ */


#ifndef __IBossEvolutionDefinition_INTERFACE_DEFINED__
#define __IBossEvolutionDefinition_INTERFACE_DEFINED__

/* interface IBossEvolutionDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBossEvolutionDefinition,0x7AA0E540,0x0365,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0365-11D4-A30E-00C026EE094F")
    IBossEvolutionDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE PathPartArray( void) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetSketchShiftType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketchShiftType( 
            short sketchShiftType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetPathLength( 
            unsigned int bitVector) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBossEvolutionDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBossEvolutionDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBossEvolutionDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IBossEvolutionDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *PathPartArray )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetSketchShiftType )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketchShiftType )( 
            IBossEvolutionDefinition * This,
            short sketchShiftType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IBossEvolutionDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IBossEvolutionDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetPathLength )( 
            IBossEvolutionDefinition * This,
            unsigned int bitVector);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            IBossEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            IBossEvolutionDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            IBossEvolutionDefinition * This);
        
        END_INTERFACE
    } IBossEvolutionDefinitionVtbl;

    interface IBossEvolutionDefinition
    {
        CONST_VTBL struct IBossEvolutionDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBossEvolutionDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBossEvolutionDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBossEvolutionDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBossEvolutionDefinition_SetSketch(This,sketch)	\
    ( (This)->lpVtbl -> SetSketch(This,sketch) ) 

#define IBossEvolutionDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IBossEvolutionDefinition_PathPartArray(This)	\
    ( (This)->lpVtbl -> PathPartArray(This) ) 

#define IBossEvolutionDefinition_GetSketchShiftType(This)	\
    ( (This)->lpVtbl -> GetSketchShiftType(This) ) 

#define IBossEvolutionDefinition_SetSketchShiftType(This,sketchShiftType)	\
    ( (This)->lpVtbl -> SetSketchShiftType(This,sketchShiftType) ) 

#define IBossEvolutionDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossEvolutionDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define IBossEvolutionDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define IBossEvolutionDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define IBossEvolutionDefinition_GetPathLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetPathLength(This,bitVector) ) 

#define IBossEvolutionDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define IBossEvolutionDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define IBossEvolutionDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBossEvolutionDefinition_INTERFACE_DEFINED__ */


#ifndef __ICutEvolutionDefinition_INTERFACE_DEFINED__
#define __ICutEvolutionDefinition_INTERFACE_DEFINED__

/* interface ICutEvolutionDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICutEvolutionDefinition,0x7AA0E540,0x0366,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0366-11D4-A30E-00C026EE094F")
    ICutEvolutionDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE PathPartArray( void) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetSketchShiftType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketchShiftType( 
            short sketchShiftType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCut( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCut( 
            BOOL cut) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetPathLength( 
            unsigned int bitVector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICutEvolutionDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICutEvolutionDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICutEvolutionDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            ICutEvolutionDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *PathPartArray )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetSketchShiftType )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketchShiftType )( 
            ICutEvolutionDefinition * This,
            short sketchShiftType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCut )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCut )( 
            ICutEvolutionDefinition * This,
            BOOL cut);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            ICutEvolutionDefinition * This,
            BOOL *thin,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            ICutEvolutionDefinition * This,
            BOOL thin,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            ICutEvolutionDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            ICutEvolutionDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetPathLength )( 
            ICutEvolutionDefinition * This,
            unsigned int bitVector);
        
        END_INTERFACE
    } ICutEvolutionDefinitionVtbl;

    interface ICutEvolutionDefinition
    {
        CONST_VTBL struct ICutEvolutionDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICutEvolutionDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICutEvolutionDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICutEvolutionDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICutEvolutionDefinition_SetSketch(This,sketch)	\
    ( (This)->lpVtbl -> SetSketch(This,sketch) ) 

#define ICutEvolutionDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define ICutEvolutionDefinition_PathPartArray(This)	\
    ( (This)->lpVtbl -> PathPartArray(This) ) 

#define ICutEvolutionDefinition_GetSketchShiftType(This)	\
    ( (This)->lpVtbl -> GetSketchShiftType(This) ) 

#define ICutEvolutionDefinition_SetSketchShiftType(This,sketchShiftType)	\
    ( (This)->lpVtbl -> SetSketchShiftType(This,sketchShiftType) ) 

#define ICutEvolutionDefinition_GetCut(This)	\
    ( (This)->lpVtbl -> GetCut(This) ) 

#define ICutEvolutionDefinition_SetCut(This,cut)	\
    ( (This)->lpVtbl -> SetCut(This,cut) ) 

#define ICutEvolutionDefinition_GetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutEvolutionDefinition_SetThinParam(This,thin,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thin,thinType,normalThickness,reverseThickness) ) 

#define ICutEvolutionDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#define ICutEvolutionDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define ICutEvolutionDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define ICutEvolutionDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define ICutEvolutionDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#define ICutEvolutionDefinition_GetPathLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetPathLength(This,bitVector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICutEvolutionDefinition_INTERFACE_DEFINED__ */


#ifndef __IFilletDefinition_INTERFACE_DEFINED__
#define __IFilletDefinition_INTERFACE_DEFINED__

/* interface IFilletDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IFilletDefinition,0x7AA0E540,0x0367,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0367-11D4-A30E-00C026EE094F")
    IFilletDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetRadius( 
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTangent( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetTangent( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE Array( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFilletDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFilletDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFilletDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFilletDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            IFilletDefinition * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetRadius )( 
            IFilletDefinition * This,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTangent )( 
            IFilletDefinition * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetTangent )( 
            IFilletDefinition * This,
            BOOL val);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *Array )( 
            IFilletDefinition * This);
        
        END_INTERFACE
    } IFilletDefinitionVtbl;

    interface IFilletDefinition
    {
        CONST_VTBL struct IFilletDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFilletDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFilletDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFilletDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFilletDefinition_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#define IFilletDefinition_SetRadius(This,radius)	\
    ( (This)->lpVtbl -> SetRadius(This,radius) ) 

#define IFilletDefinition_GetTangent(This)	\
    ( (This)->lpVtbl -> GetTangent(This) ) 

#define IFilletDefinition_SetTangent(This,val)	\
    ( (This)->lpVtbl -> SetTangent(This,val) ) 

#define IFilletDefinition_Array(This)	\
    ( (This)->lpVtbl -> Array(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFilletDefinition_INTERFACE_DEFINED__ */


#ifndef __IChamferDefinition_INTERFACE_DEFINED__
#define __IChamferDefinition_INTERFACE_DEFINED__

/* interface IChamferDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IChamferDefinition,0x7AA0E540,0x0368,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0368-11D4-A30E-00C026EE094F")
    IChamferDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetChamferParam( 
            BOOL *transfer,
            double *distance1,
            double *distance2) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetChamferParam( 
            BOOL transfer,
            double distance1,
            double distance2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTangent( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetTangent( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE Array( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IChamferDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IChamferDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IChamferDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IChamferDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetChamferParam )( 
            IChamferDefinition * This,
            BOOL *transfer,
            double *distance1,
            double *distance2);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetChamferParam )( 
            IChamferDefinition * This,
            BOOL transfer,
            double distance1,
            double distance2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTangent )( 
            IChamferDefinition * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetTangent )( 
            IChamferDefinition * This,
            BOOL val);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *Array )( 
            IChamferDefinition * This);
        
        END_INTERFACE
    } IChamferDefinitionVtbl;

    interface IChamferDefinition
    {
        CONST_VTBL struct IChamferDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IChamferDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IChamferDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IChamferDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IChamferDefinition_GetChamferParam(This,transfer,distance1,distance2)	\
    ( (This)->lpVtbl -> GetChamferParam(This,transfer,distance1,distance2) ) 

#define IChamferDefinition_SetChamferParam(This,transfer,distance1,distance2)	\
    ( (This)->lpVtbl -> SetChamferParam(This,transfer,distance1,distance2) ) 

#define IChamferDefinition_GetTangent(This)	\
    ( (This)->lpVtbl -> GetTangent(This) ) 

#define IChamferDefinition_SetTangent(This,val)	\
    ( (This)->lpVtbl -> SetTangent(This,val) ) 

#define IChamferDefinition_Array(This)	\
    ( (This)->lpVtbl -> Array(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IChamferDefinition_INTERFACE_DEFINED__ */


#ifndef __IShellDefinition_INTERFACE_DEFINED__
#define __IShellDefinition_INTERFACE_DEFINED__

/* interface IShellDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IShellDefinition,0x7AA0E540,0x0369,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0369-11D4-A30E-00C026EE094F")
    IShellDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE FaceArray( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetThinType( 
            BOOL thinType) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetThickness( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetThickness( 
            double thickness) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShellDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *FaceArray )( 
            IShellDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinType )( 
            IShellDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetThinType )( 
            IShellDefinition * This,
            BOOL thinType);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetThickness )( 
            IShellDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetThickness )( 
            IShellDefinition * This,
            double thickness);
        
        END_INTERFACE
    } IShellDefinitionVtbl;

    interface IShellDefinition
    {
        CONST_VTBL struct IShellDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShellDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShellDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShellDefinition_FaceArray(This)	\
    ( (This)->lpVtbl -> FaceArray(This) ) 

#define IShellDefinition_GetThinType(This)	\
    ( (This)->lpVtbl -> GetThinType(This) ) 

#define IShellDefinition_SetThinType(This,thinType)	\
    ( (This)->lpVtbl -> SetThinType(This,thinType) ) 

#define IShellDefinition_GetThickness(This)	\
    ( (This)->lpVtbl -> GetThickness(This) ) 

#define IShellDefinition_SetThickness(This,thickness)	\
    ( (This)->lpVtbl -> SetThickness(This,thickness) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShellDefinition_INTERFACE_DEFINED__ */


#ifndef __ICopyMeshDefinition_INTERFACE_DEFINED__
#define __ICopyMeshDefinition_INTERFACE_DEFINED__

/* interface ICopyMeshDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICopyMeshDefinition,0x7AA0E540,0x0370,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0370-11D4-A30E-00C026EE094F")
    ICopyMeshDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE OperationArray( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle1( 
            double angle) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount1( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep1( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor1( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle2( 
            double angle) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount2( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep2( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor2( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetInsideFlag( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInsideFlag( 
            BOOL flag) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCopyParamAlongAxis( 
            BOOL firstAxis,
            double *angle,
            long *count,
            double *step,
            BOOL *factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCopyParamAlongAxis( 
            BOOL firstAxis,
            double angle,
            long count,
            double step,
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGeomArray( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetGeomArray( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis1( 
            LPENTITY axis) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis2( 
            LPENTITY axis) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICopyMeshDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICopyMeshDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICopyMeshDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *OperationArray )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle1 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle1 )( 
            ICopyMeshDefinition * This,
            double angle);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount1 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount1 )( 
            ICopyMeshDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep1 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep1 )( 
            ICopyMeshDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor1 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor1 )( 
            ICopyMeshDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle2 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle2 )( 
            ICopyMeshDefinition * This,
            double angle);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount2 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount2 )( 
            ICopyMeshDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep2 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep2 )( 
            ICopyMeshDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor2 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor2 )( 
            ICopyMeshDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetInsideFlag )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInsideFlag )( 
            ICopyMeshDefinition * This,
            BOOL flag);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCopyParamAlongAxis )( 
            ICopyMeshDefinition * This,
            BOOL firstAxis,
            double *angle,
            long *count,
            double *step,
            BOOL *factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCopyParamAlongAxis )( 
            ICopyMeshDefinition * This,
            BOOL firstAxis,
            double angle,
            long count,
            double step,
            BOOL factor);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGeomArray )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetGeomArray )( 
            ICopyMeshDefinition * This,
            BOOL val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis1 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis1 )( 
            ICopyMeshDefinition * This,
            LPENTITY axis);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis2 )( 
            ICopyMeshDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis2 )( 
            ICopyMeshDefinition * This,
            LPENTITY axis);
        
        END_INTERFACE
    } ICopyMeshDefinitionVtbl;

    interface ICopyMeshDefinition
    {
        CONST_VTBL struct ICopyMeshDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICopyMeshDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICopyMeshDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICopyMeshDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICopyMeshDefinition_OperationArray(This)	\
    ( (This)->lpVtbl -> OperationArray(This) ) 

#define ICopyMeshDefinition_GetAngle1(This)	\
    ( (This)->lpVtbl -> GetAngle1(This) ) 

#define ICopyMeshDefinition_SetAngle1(This,angle)	\
    ( (This)->lpVtbl -> SetAngle1(This,angle) ) 

#define ICopyMeshDefinition_GetCount1(This)	\
    ( (This)->lpVtbl -> GetCount1(This) ) 

#define ICopyMeshDefinition_SetCount1(This,count)	\
    ( (This)->lpVtbl -> SetCount1(This,count) ) 

#define ICopyMeshDefinition_GetStep1(This)	\
    ( (This)->lpVtbl -> GetStep1(This) ) 

#define ICopyMeshDefinition_SetStep1(This,step)	\
    ( (This)->lpVtbl -> SetStep1(This,step) ) 

#define ICopyMeshDefinition_GetFactor1(This)	\
    ( (This)->lpVtbl -> GetFactor1(This) ) 

#define ICopyMeshDefinition_SetFactor1(This,factor)	\
    ( (This)->lpVtbl -> SetFactor1(This,factor) ) 

#define ICopyMeshDefinition_GetAngle2(This)	\
    ( (This)->lpVtbl -> GetAngle2(This) ) 

#define ICopyMeshDefinition_SetAngle2(This,angle)	\
    ( (This)->lpVtbl -> SetAngle2(This,angle) ) 

#define ICopyMeshDefinition_GetCount2(This)	\
    ( (This)->lpVtbl -> GetCount2(This) ) 

#define ICopyMeshDefinition_SetCount2(This,count)	\
    ( (This)->lpVtbl -> SetCount2(This,count) ) 

#define ICopyMeshDefinition_GetStep2(This)	\
    ( (This)->lpVtbl -> GetStep2(This) ) 

#define ICopyMeshDefinition_SetStep2(This,step)	\
    ( (This)->lpVtbl -> SetStep2(This,step) ) 

#define ICopyMeshDefinition_GetFactor2(This)	\
    ( (This)->lpVtbl -> GetFactor2(This) ) 

#define ICopyMeshDefinition_SetFactor2(This,factor)	\
    ( (This)->lpVtbl -> SetFactor2(This,factor) ) 

#define ICopyMeshDefinition_GetInsideFlag(This)	\
    ( (This)->lpVtbl -> GetInsideFlag(This) ) 

#define ICopyMeshDefinition_SetInsideFlag(This,flag)	\
    ( (This)->lpVtbl -> SetInsideFlag(This,flag) ) 

#define ICopyMeshDefinition_GetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor)	\
    ( (This)->lpVtbl -> GetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor) ) 

#define ICopyMeshDefinition_SetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor)	\
    ( (This)->lpVtbl -> SetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor) ) 

#define ICopyMeshDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#define ICopyMeshDefinition_GetGeomArray(This)	\
    ( (This)->lpVtbl -> GetGeomArray(This) ) 

#define ICopyMeshDefinition_SetGeomArray(This,val)	\
    ( (This)->lpVtbl -> SetGeomArray(This,val) ) 

#define ICopyMeshDefinition_GetAxis1(This)	\
    ( (This)->lpVtbl -> GetAxis1(This) ) 

#define ICopyMeshDefinition_SetAxis1(This,axis)	\
    ( (This)->lpVtbl -> SetAxis1(This,axis) ) 

#define ICopyMeshDefinition_GetAxis2(This)	\
    ( (This)->lpVtbl -> GetAxis2(This) ) 

#define ICopyMeshDefinition_SetAxis2(This,axis)	\
    ( (This)->lpVtbl -> SetAxis2(This,axis) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICopyMeshDefinition_INTERFACE_DEFINED__ */


#ifndef __ICopyCircularDefinition_INTERFACE_DEFINED__
#define __ICopyCircularDefinition_INTERFACE_DEFINED__

/* interface ICopyCircularDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICopyCircularDefinition,0x7AA0E540,0x0371,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0371-11D4-A30E-00C026EE094F")
    ICopyCircularDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE GetOperationArray( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis( 
            LPENTITY axis) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount1( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep1( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor1( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount2( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep2( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor2( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetInverce( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInverce( 
            BOOL inverce) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCopyParamAlongDir( 
            long *count,
            double *step,
            BOOL *factor,
            BOOL dir) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCopyParamAlongDir( 
            long count,
            double step,
            BOOL factor,
            BOOL dir) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGeomArray( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetGeomArray( 
            BOOL val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICopyCircularDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICopyCircularDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICopyCircularDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *GetOperationArray )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis )( 
            ICopyCircularDefinition * This,
            LPENTITY axis);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount1 )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount1 )( 
            ICopyCircularDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep1 )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep1 )( 
            ICopyCircularDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor1 )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor1 )( 
            ICopyCircularDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount2 )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount2 )( 
            ICopyCircularDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep2 )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep2 )( 
            ICopyCircularDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor2 )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor2 )( 
            ICopyCircularDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetInverce )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInverce )( 
            ICopyCircularDefinition * This,
            BOOL inverce);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCopyParamAlongDir )( 
            ICopyCircularDefinition * This,
            long *count,
            double *step,
            BOOL *factor,
            BOOL dir);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCopyParamAlongDir )( 
            ICopyCircularDefinition * This,
            long count,
            double step,
            BOOL factor,
            BOOL dir);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGeomArray )( 
            ICopyCircularDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetGeomArray )( 
            ICopyCircularDefinition * This,
            BOOL val);
        
        END_INTERFACE
    } ICopyCircularDefinitionVtbl;

    interface ICopyCircularDefinition
    {
        CONST_VTBL struct ICopyCircularDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICopyCircularDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICopyCircularDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICopyCircularDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICopyCircularDefinition_GetOperationArray(This)	\
    ( (This)->lpVtbl -> GetOperationArray(This) ) 

#define ICopyCircularDefinition_GetAxis(This)	\
    ( (This)->lpVtbl -> GetAxis(This) ) 

#define ICopyCircularDefinition_SetAxis(This,axis)	\
    ( (This)->lpVtbl -> SetAxis(This,axis) ) 

#define ICopyCircularDefinition_GetCount1(This)	\
    ( (This)->lpVtbl -> GetCount1(This) ) 

#define ICopyCircularDefinition_SetCount1(This,count)	\
    ( (This)->lpVtbl -> SetCount1(This,count) ) 

#define ICopyCircularDefinition_GetStep1(This)	\
    ( (This)->lpVtbl -> GetStep1(This) ) 

#define ICopyCircularDefinition_SetStep1(This,step)	\
    ( (This)->lpVtbl -> SetStep1(This,step) ) 

#define ICopyCircularDefinition_GetFactor1(This)	\
    ( (This)->lpVtbl -> GetFactor1(This) ) 

#define ICopyCircularDefinition_SetFactor1(This,factor)	\
    ( (This)->lpVtbl -> SetFactor1(This,factor) ) 

#define ICopyCircularDefinition_GetCount2(This)	\
    ( (This)->lpVtbl -> GetCount2(This) ) 

#define ICopyCircularDefinition_SetCount2(This,count)	\
    ( (This)->lpVtbl -> SetCount2(This,count) ) 

#define ICopyCircularDefinition_GetStep2(This)	\
    ( (This)->lpVtbl -> GetStep2(This) ) 

#define ICopyCircularDefinition_SetStep2(This,step)	\
    ( (This)->lpVtbl -> SetStep2(This,step) ) 

#define ICopyCircularDefinition_GetFactor2(This)	\
    ( (This)->lpVtbl -> GetFactor2(This) ) 

#define ICopyCircularDefinition_SetFactor2(This,factor)	\
    ( (This)->lpVtbl -> SetFactor2(This,factor) ) 

#define ICopyCircularDefinition_GetInverce(This)	\
    ( (This)->lpVtbl -> GetInverce(This) ) 

#define ICopyCircularDefinition_SetInverce(This,inverce)	\
    ( (This)->lpVtbl -> SetInverce(This,inverce) ) 

#define ICopyCircularDefinition_GetCopyParamAlongDir(This,count,step,factor,dir)	\
    ( (This)->lpVtbl -> GetCopyParamAlongDir(This,count,step,factor,dir) ) 

#define ICopyCircularDefinition_SetCopyParamAlongDir(This,count,step,factor,dir)	\
    ( (This)->lpVtbl -> SetCopyParamAlongDir(This,count,step,factor,dir) ) 

#define ICopyCircularDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#define ICopyCircularDefinition_GetGeomArray(This)	\
    ( (This)->lpVtbl -> GetGeomArray(This) ) 

#define ICopyCircularDefinition_SetGeomArray(This,val)	\
    ( (This)->lpVtbl -> SetGeomArray(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICopyCircularDefinition_INTERFACE_DEFINED__ */


#ifndef __ICopyCurveDefinition_INTERFACE_DEFINED__
#define __ICopyCurveDefinition_INTERFACE_DEFINED__

/* interface ICopyCurveDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICopyCurveDefinition,0x7AA0E540,0x0372,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0372-11D4-A30E-00C026EE094F")
    ICopyCurveDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE OperationArray( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE CurveArray( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep( 
            double step) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount( 
            long count) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSence( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSence( 
            BOOL sence) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetKeepAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetKeepAngle( 
            BOOL keepAngle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFullCurve( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFullCurve( 
            BOOL fullCurve) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGeomArray( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetGeomArray( 
            BOOL val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICopyCurveDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICopyCurveDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICopyCurveDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *OperationArray )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *CurveArray )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep )( 
            ICopyCurveDefinition * This,
            double step);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount )( 
            ICopyCurveDefinition * This,
            long count);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor )( 
            ICopyCurveDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSence )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSence )( 
            ICopyCurveDefinition * This,
            BOOL sence);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetKeepAngle )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetKeepAngle )( 
            ICopyCurveDefinition * This,
            BOOL keepAngle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFullCurve )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFullCurve )( 
            ICopyCurveDefinition * This,
            BOOL fullCurve);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGeomArray )( 
            ICopyCurveDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetGeomArray )( 
            ICopyCurveDefinition * This,
            BOOL val);
        
        END_INTERFACE
    } ICopyCurveDefinitionVtbl;

    interface ICopyCurveDefinition
    {
        CONST_VTBL struct ICopyCurveDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICopyCurveDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICopyCurveDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICopyCurveDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICopyCurveDefinition_OperationArray(This)	\
    ( (This)->lpVtbl -> OperationArray(This) ) 

#define ICopyCurveDefinition_CurveArray(This)	\
    ( (This)->lpVtbl -> CurveArray(This) ) 

#define ICopyCurveDefinition_GetStep(This)	\
    ( (This)->lpVtbl -> GetStep(This) ) 

#define ICopyCurveDefinition_SetStep(This,step)	\
    ( (This)->lpVtbl -> SetStep(This,step) ) 

#define ICopyCurveDefinition_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define ICopyCurveDefinition_SetCount(This,count)	\
    ( (This)->lpVtbl -> SetCount(This,count) ) 

#define ICopyCurveDefinition_GetFactor(This)	\
    ( (This)->lpVtbl -> GetFactor(This) ) 

#define ICopyCurveDefinition_SetFactor(This,factor)	\
    ( (This)->lpVtbl -> SetFactor(This,factor) ) 

#define ICopyCurveDefinition_GetSence(This)	\
    ( (This)->lpVtbl -> GetSence(This) ) 

#define ICopyCurveDefinition_SetSence(This,sence)	\
    ( (This)->lpVtbl -> SetSence(This,sence) ) 

#define ICopyCurveDefinition_GetKeepAngle(This)	\
    ( (This)->lpVtbl -> GetKeepAngle(This) ) 

#define ICopyCurveDefinition_SetKeepAngle(This,keepAngle)	\
    ( (This)->lpVtbl -> SetKeepAngle(This,keepAngle) ) 

#define ICopyCurveDefinition_GetFullCurve(This)	\
    ( (This)->lpVtbl -> GetFullCurve(This) ) 

#define ICopyCurveDefinition_SetFullCurve(This,fullCurve)	\
    ( (This)->lpVtbl -> SetFullCurve(This,fullCurve) ) 

#define ICopyCurveDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#define ICopyCurveDefinition_GetGeomArray(This)	\
    ( (This)->lpVtbl -> GetGeomArray(This) ) 

#define ICopyCurveDefinition_SetGeomArray(This,val)	\
    ( (This)->lpVtbl -> SetGeomArray(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICopyCurveDefinition_INTERFACE_DEFINED__ */


#ifndef __IMirrorDefinition_INTERFACE_DEFINED__
#define __IMirrorDefinition_INTERFACE_DEFINED__

/* interface IMirrorDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMirrorDefinition,0x7AA0E540,0x0373,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0373-11D4-A30E-00C026EE094F")
    IMirrorDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE GetOperationArray( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMirrorDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMirrorDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMirrorDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMirrorDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *GetOperationArray )( 
            IMirrorDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IMirrorDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IMirrorDefinition * This,
            LPENTITY plane);
        
        END_INTERFACE
    } IMirrorDefinitionVtbl;

    interface IMirrorDefinition
    {
        CONST_VTBL struct IMirrorDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMirrorDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMirrorDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMirrorDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMirrorDefinition_GetOperationArray(This)	\
    ( (This)->lpVtbl -> GetOperationArray(This) ) 

#define IMirrorDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IMirrorDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMirrorDefinition_INTERFACE_DEFINED__ */


#ifndef __IMirrorAllDefinition_INTERFACE_DEFINED__
#define __IMirrorAllDefinition_INTERFACE_DEFINED__

/* interface IMirrorAllDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMirrorAllDefinition,0x7AA0E540,0x0374,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0374-11D4-A30E-00C026EE094F")
    IMirrorAllDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMirrorAllDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMirrorAllDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMirrorAllDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMirrorAllDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IMirrorAllDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IMirrorAllDefinition * This,
            LPENTITY plane);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            IMirrorAllDefinition * This);
        
        END_INTERFACE
    } IMirrorAllDefinitionVtbl;

    interface IMirrorAllDefinition
    {
        CONST_VTBL struct IMirrorAllDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMirrorAllDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMirrorAllDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMirrorAllDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMirrorAllDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IMirrorAllDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#define IMirrorAllDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMirrorAllDefinition_INTERFACE_DEFINED__ */


#ifndef __ICutByPlaneDefinition_INTERFACE_DEFINED__
#define __ICutByPlaneDefinition_INTERFACE_DEFINED__

/* interface ICutByPlaneDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICutByPlaneDefinition,0x7AA0E540,0x0375,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0375-11D4-A30E-00C026EE094F")
    ICutByPlaneDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            BOOL direction) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICutByPlaneDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICutByPlaneDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICutByPlaneDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICutByPlaneDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            ICutByPlaneDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            ICutByPlaneDefinition * This,
            LPENTITY plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDirection )( 
            ICutByPlaneDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            ICutByPlaneDefinition * This,
            BOOL direction);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            ICutByPlaneDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            ICutByPlaneDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            ICutByPlaneDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            ICutByPlaneDefinition * This);
        
        END_INTERFACE
    } ICutByPlaneDefinitionVtbl;

    interface ICutByPlaneDefinition
    {
        CONST_VTBL struct ICutByPlaneDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICutByPlaneDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICutByPlaneDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICutByPlaneDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICutByPlaneDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define ICutByPlaneDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#define ICutByPlaneDefinition_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define ICutByPlaneDefinition_SetDirection(This,direction)	\
    ( (This)->lpVtbl -> SetDirection(This,direction) ) 

#define ICutByPlaneDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define ICutByPlaneDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define ICutByPlaneDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define ICutByPlaneDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICutByPlaneDefinition_INTERFACE_DEFINED__ */


#ifndef __ICutBySketchDefinition_INTERFACE_DEFINED__
#define __ICutBySketchDefinition_INTERFACE_DEFINED__

/* interface ICutBySketchDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICutBySketchDefinition,0x7AA0E540,0x0376,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0376-11D4-A30E-00C026EE094F")
    ICutBySketchDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            BOOL direction) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEBODIES STDMETHODCALLTYPE ChooseBodies( void) = 0;
        
        virtual /* [helpstring] */ LPCHOOSEPARTS STDMETHODCALLTYPE ChooseParts( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetChooseType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetChooseType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICutBySketchDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICutBySketchDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICutBySketchDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICutBySketchDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            ICutBySketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            ICutBySketchDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDirection )( 
            ICutBySketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            ICutBySketchDefinition * This,
            BOOL direction);
        
        /* [helpstring] */ LPCHOOSEBODIES ( STDMETHODCALLTYPE *ChooseBodies )( 
            ICutBySketchDefinition * This);
        
        /* [helpstring] */ LPCHOOSEPARTS ( STDMETHODCALLTYPE *ChooseParts )( 
            ICutBySketchDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetChooseType )( 
            ICutBySketchDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetChooseType )( 
            ICutBySketchDefinition * This);
        
        END_INTERFACE
    } ICutBySketchDefinitionVtbl;

    interface ICutBySketchDefinition
    {
        CONST_VTBL struct ICutBySketchDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICutBySketchDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICutBySketchDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICutBySketchDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICutBySketchDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define ICutBySketchDefinition_SetSketch(This,sketch)	\
    ( (This)->lpVtbl -> SetSketch(This,sketch) ) 

#define ICutBySketchDefinition_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define ICutBySketchDefinition_SetDirection(This,direction)	\
    ( (This)->lpVtbl -> SetDirection(This,direction) ) 

#define ICutBySketchDefinition_ChooseBodies(This)	\
    ( (This)->lpVtbl -> ChooseBodies(This) ) 

#define ICutBySketchDefinition_ChooseParts(This)	\
    ( (This)->lpVtbl -> ChooseParts(This) ) 

#define ICutBySketchDefinition_SetChooseType(This,val)	\
    ( (This)->lpVtbl -> SetChooseType(This,val) ) 

#define ICutBySketchDefinition_GetChooseType(This)	\
    ( (This)->lpVtbl -> GetChooseType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICutBySketchDefinition_INTERFACE_DEFINED__ */


#ifndef __IMeshPartArrayDefinition_INTERFACE_DEFINED__
#define __IMeshPartArrayDefinition_INTERFACE_DEFINED__

/* interface IMeshPartArrayDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMeshPartArrayDefinition,0x7AA0E540,0x0377,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0377-11D4-A30E-00C026EE094F")
    IMeshPartArrayDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartArray( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle1( 
            double angle) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount1( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep1( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor1( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle2( 
            double angle) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount2( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep2( 
            double step) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis1( 
            LPENTITY axis) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis2( 
            LPENTITY axis) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor2( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetInsideFlag( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInsideFlag( 
            BOOL flag) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCopyParamAlongAxis( 
            BOOL firstAxis,
            double *angle,
            long *count,
            double *step,
            BOOL *factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCopyParamAlongAxis( 
            BOOL firstAxis,
            double angle,
            long count,
            double step,
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMeshPartArrayDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMeshPartArrayDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMeshPartArrayDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartArray )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle1 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle1 )( 
            IMeshPartArrayDefinition * This,
            double angle);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount1 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount1 )( 
            IMeshPartArrayDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep1 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep1 )( 
            IMeshPartArrayDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor1 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor1 )( 
            IMeshPartArrayDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle2 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle2 )( 
            IMeshPartArrayDefinition * This,
            double angle);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount2 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount2 )( 
            IMeshPartArrayDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep2 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep2 )( 
            IMeshPartArrayDefinition * This,
            double step);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis1 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis1 )( 
            IMeshPartArrayDefinition * This,
            LPENTITY axis);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis2 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis2 )( 
            IMeshPartArrayDefinition * This,
            LPENTITY axis);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor2 )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor2 )( 
            IMeshPartArrayDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetInsideFlag )( 
            IMeshPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInsideFlag )( 
            IMeshPartArrayDefinition * This,
            BOOL flag);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCopyParamAlongAxis )( 
            IMeshPartArrayDefinition * This,
            BOOL firstAxis,
            double *angle,
            long *count,
            double *step,
            BOOL *factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCopyParamAlongAxis )( 
            IMeshPartArrayDefinition * This,
            BOOL firstAxis,
            double angle,
            long count,
            double step,
            BOOL factor);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            IMeshPartArrayDefinition * This);
        
        END_INTERFACE
    } IMeshPartArrayDefinitionVtbl;

    interface IMeshPartArrayDefinition
    {
        CONST_VTBL struct IMeshPartArrayDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMeshPartArrayDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMeshPartArrayDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMeshPartArrayDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMeshPartArrayDefinition_PartArray(This)	\
    ( (This)->lpVtbl -> PartArray(This) ) 

#define IMeshPartArrayDefinition_GetAngle1(This)	\
    ( (This)->lpVtbl -> GetAngle1(This) ) 

#define IMeshPartArrayDefinition_SetAngle1(This,angle)	\
    ( (This)->lpVtbl -> SetAngle1(This,angle) ) 

#define IMeshPartArrayDefinition_GetCount1(This)	\
    ( (This)->lpVtbl -> GetCount1(This) ) 

#define IMeshPartArrayDefinition_SetCount1(This,count)	\
    ( (This)->lpVtbl -> SetCount1(This,count) ) 

#define IMeshPartArrayDefinition_GetStep1(This)	\
    ( (This)->lpVtbl -> GetStep1(This) ) 

#define IMeshPartArrayDefinition_SetStep1(This,step)	\
    ( (This)->lpVtbl -> SetStep1(This,step) ) 

#define IMeshPartArrayDefinition_GetFactor1(This)	\
    ( (This)->lpVtbl -> GetFactor1(This) ) 

#define IMeshPartArrayDefinition_SetFactor1(This,factor)	\
    ( (This)->lpVtbl -> SetFactor1(This,factor) ) 

#define IMeshPartArrayDefinition_GetAngle2(This)	\
    ( (This)->lpVtbl -> GetAngle2(This) ) 

#define IMeshPartArrayDefinition_SetAngle2(This,angle)	\
    ( (This)->lpVtbl -> SetAngle2(This,angle) ) 

#define IMeshPartArrayDefinition_GetCount2(This)	\
    ( (This)->lpVtbl -> GetCount2(This) ) 

#define IMeshPartArrayDefinition_SetCount2(This,count)	\
    ( (This)->lpVtbl -> SetCount2(This,count) ) 

#define IMeshPartArrayDefinition_GetStep2(This)	\
    ( (This)->lpVtbl -> GetStep2(This) ) 

#define IMeshPartArrayDefinition_SetStep2(This,step)	\
    ( (This)->lpVtbl -> SetStep2(This,step) ) 

#define IMeshPartArrayDefinition_GetAxis1(This)	\
    ( (This)->lpVtbl -> GetAxis1(This) ) 

#define IMeshPartArrayDefinition_SetAxis1(This,axis)	\
    ( (This)->lpVtbl -> SetAxis1(This,axis) ) 

#define IMeshPartArrayDefinition_GetAxis2(This)	\
    ( (This)->lpVtbl -> GetAxis2(This) ) 

#define IMeshPartArrayDefinition_SetAxis2(This,axis)	\
    ( (This)->lpVtbl -> SetAxis2(This,axis) ) 

#define IMeshPartArrayDefinition_GetFactor2(This)	\
    ( (This)->lpVtbl -> GetFactor2(This) ) 

#define IMeshPartArrayDefinition_SetFactor2(This,factor)	\
    ( (This)->lpVtbl -> SetFactor2(This,factor) ) 

#define IMeshPartArrayDefinition_GetInsideFlag(This)	\
    ( (This)->lpVtbl -> GetInsideFlag(This) ) 

#define IMeshPartArrayDefinition_SetInsideFlag(This,flag)	\
    ( (This)->lpVtbl -> SetInsideFlag(This,flag) ) 

#define IMeshPartArrayDefinition_GetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor)	\
    ( (This)->lpVtbl -> GetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor) ) 

#define IMeshPartArrayDefinition_SetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor)	\
    ( (This)->lpVtbl -> SetCopyParamAlongAxis(This,firstAxis,angle,count,step,factor) ) 

#define IMeshPartArrayDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMeshPartArrayDefinition_INTERFACE_DEFINED__ */


#ifndef __ICircularPartArrayDefinition_INTERFACE_DEFINED__
#define __ICircularPartArrayDefinition_INTERFACE_DEFINED__

/* interface ICircularPartArrayDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICircularPartArrayDefinition,0x7AA0E540,0x0378,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0378-11D4-A30E-00C026EE094F")
    ICircularPartArrayDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartArray( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAxis( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAxis( 
            LPENTITY axis) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount1( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep1( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor1( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount2( 
            long count) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep2( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor2( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetInverce( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInverce( 
            BOOL inverce) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetCopyParamAlongDir( 
            long *count,
            double *step,
            BOOL *factor,
            BOOL dir) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCopyParamAlongDir( 
            long count,
            double step,
            BOOL factor,
            BOOL dir) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetKeepAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetKeepAngle( 
            BOOL keepAngle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICircularPartArrayDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICircularPartArrayDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICircularPartArrayDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartArray )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAxis )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAxis )( 
            ICircularPartArrayDefinition * This,
            LPENTITY axis);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount1 )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount1 )( 
            ICircularPartArrayDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep1 )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep1 )( 
            ICircularPartArrayDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor1 )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor1 )( 
            ICircularPartArrayDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount2 )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount2 )( 
            ICircularPartArrayDefinition * This,
            long count);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep2 )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep2 )( 
            ICircularPartArrayDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor2 )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor2 )( 
            ICircularPartArrayDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetInverce )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInverce )( 
            ICircularPartArrayDefinition * This,
            BOOL inverce);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetCopyParamAlongDir )( 
            ICircularPartArrayDefinition * This,
            long *count,
            double *step,
            BOOL *factor,
            BOOL dir);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCopyParamAlongDir )( 
            ICircularPartArrayDefinition * This,
            long count,
            double step,
            BOOL factor,
            BOOL dir);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetKeepAngle )( 
            ICircularPartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetKeepAngle )( 
            ICircularPartArrayDefinition * This,
            BOOL keepAngle);
        
        END_INTERFACE
    } ICircularPartArrayDefinitionVtbl;

    interface ICircularPartArrayDefinition
    {
        CONST_VTBL struct ICircularPartArrayDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICircularPartArrayDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICircularPartArrayDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICircularPartArrayDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICircularPartArrayDefinition_PartArray(This)	\
    ( (This)->lpVtbl -> PartArray(This) ) 

#define ICircularPartArrayDefinition_GetAxis(This)	\
    ( (This)->lpVtbl -> GetAxis(This) ) 

#define ICircularPartArrayDefinition_SetAxis(This,axis)	\
    ( (This)->lpVtbl -> SetAxis(This,axis) ) 

#define ICircularPartArrayDefinition_GetCount1(This)	\
    ( (This)->lpVtbl -> GetCount1(This) ) 

#define ICircularPartArrayDefinition_SetCount1(This,count)	\
    ( (This)->lpVtbl -> SetCount1(This,count) ) 

#define ICircularPartArrayDefinition_GetStep1(This)	\
    ( (This)->lpVtbl -> GetStep1(This) ) 

#define ICircularPartArrayDefinition_SetStep1(This,step)	\
    ( (This)->lpVtbl -> SetStep1(This,step) ) 

#define ICircularPartArrayDefinition_GetFactor1(This)	\
    ( (This)->lpVtbl -> GetFactor1(This) ) 

#define ICircularPartArrayDefinition_SetFactor1(This,factor)	\
    ( (This)->lpVtbl -> SetFactor1(This,factor) ) 

#define ICircularPartArrayDefinition_GetCount2(This)	\
    ( (This)->lpVtbl -> GetCount2(This) ) 

#define ICircularPartArrayDefinition_SetCount2(This,count)	\
    ( (This)->lpVtbl -> SetCount2(This,count) ) 

#define ICircularPartArrayDefinition_GetStep2(This)	\
    ( (This)->lpVtbl -> GetStep2(This) ) 

#define ICircularPartArrayDefinition_SetStep2(This,step)	\
    ( (This)->lpVtbl -> SetStep2(This,step) ) 

#define ICircularPartArrayDefinition_GetFactor2(This)	\
    ( (This)->lpVtbl -> GetFactor2(This) ) 

#define ICircularPartArrayDefinition_SetFactor2(This,factor)	\
    ( (This)->lpVtbl -> SetFactor2(This,factor) ) 

#define ICircularPartArrayDefinition_GetInverce(This)	\
    ( (This)->lpVtbl -> GetInverce(This) ) 

#define ICircularPartArrayDefinition_SetInverce(This,inverce)	\
    ( (This)->lpVtbl -> SetInverce(This,inverce) ) 

#define ICircularPartArrayDefinition_GetCopyParamAlongDir(This,count,step,factor,dir)	\
    ( (This)->lpVtbl -> GetCopyParamAlongDir(This,count,step,factor,dir) ) 

#define ICircularPartArrayDefinition_SetCopyParamAlongDir(This,count,step,factor,dir)	\
    ( (This)->lpVtbl -> SetCopyParamAlongDir(This,count,step,factor,dir) ) 

#define ICircularPartArrayDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#define ICircularPartArrayDefinition_GetKeepAngle(This)	\
    ( (This)->lpVtbl -> GetKeepAngle(This) ) 

#define ICircularPartArrayDefinition_SetKeepAngle(This,keepAngle)	\
    ( (This)->lpVtbl -> SetKeepAngle(This,keepAngle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICircularPartArrayDefinition_INTERFACE_DEFINED__ */


#ifndef __ICurvePartArrayDefinition_INTERFACE_DEFINED__
#define __ICurvePartArrayDefinition_INTERFACE_DEFINED__

/* interface ICurvePartArrayDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICurvePartArrayDefinition,0x7AA0E540,0x0379,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0379-11D4-A30E-00C026EE094F")
    ICurvePartArrayDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartArray( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE CurveArray( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep( 
            double step) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetCount( 
            long count) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFactor( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFactor( 
            BOOL factor) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSence( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSence( 
            BOOL sence) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetKeepAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetKeepAngle( 
            BOOL keepAngle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFullCurve( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFullCurve( 
            BOOL fullCurve) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICurvePartArrayDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICurvePartArrayDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICurvePartArrayDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartArray )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *CurveArray )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep )( 
            ICurvePartArrayDefinition * This,
            double step);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetCount )( 
            ICurvePartArrayDefinition * This,
            long count);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFactor )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFactor )( 
            ICurvePartArrayDefinition * This,
            BOOL factor);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSence )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSence )( 
            ICurvePartArrayDefinition * This,
            BOOL sence);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetKeepAngle )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetKeepAngle )( 
            ICurvePartArrayDefinition * This,
            BOOL keepAngle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFullCurve )( 
            ICurvePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFullCurve )( 
            ICurvePartArrayDefinition * This,
            BOOL fullCurve);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            ICurvePartArrayDefinition * This);
        
        END_INTERFACE
    } ICurvePartArrayDefinitionVtbl;

    interface ICurvePartArrayDefinition
    {
        CONST_VTBL struct ICurvePartArrayDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICurvePartArrayDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICurvePartArrayDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICurvePartArrayDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICurvePartArrayDefinition_PartArray(This)	\
    ( (This)->lpVtbl -> PartArray(This) ) 

#define ICurvePartArrayDefinition_CurveArray(This)	\
    ( (This)->lpVtbl -> CurveArray(This) ) 

#define ICurvePartArrayDefinition_GetStep(This)	\
    ( (This)->lpVtbl -> GetStep(This) ) 

#define ICurvePartArrayDefinition_SetStep(This,step)	\
    ( (This)->lpVtbl -> SetStep(This,step) ) 

#define ICurvePartArrayDefinition_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define ICurvePartArrayDefinition_SetCount(This,count)	\
    ( (This)->lpVtbl -> SetCount(This,count) ) 

#define ICurvePartArrayDefinition_GetFactor(This)	\
    ( (This)->lpVtbl -> GetFactor(This) ) 

#define ICurvePartArrayDefinition_SetFactor(This,factor)	\
    ( (This)->lpVtbl -> SetFactor(This,factor) ) 

#define ICurvePartArrayDefinition_GetSence(This)	\
    ( (This)->lpVtbl -> GetSence(This) ) 

#define ICurvePartArrayDefinition_SetSence(This,sence)	\
    ( (This)->lpVtbl -> SetSence(This,sence) ) 

#define ICurvePartArrayDefinition_GetKeepAngle(This)	\
    ( (This)->lpVtbl -> GetKeepAngle(This) ) 

#define ICurvePartArrayDefinition_SetKeepAngle(This,keepAngle)	\
    ( (This)->lpVtbl -> SetKeepAngle(This,keepAngle) ) 

#define ICurvePartArrayDefinition_GetFullCurve(This)	\
    ( (This)->lpVtbl -> GetFullCurve(This) ) 

#define ICurvePartArrayDefinition_SetFullCurve(This,fullCurve)	\
    ( (This)->lpVtbl -> SetFullCurve(This,fullCurve) ) 

#define ICurvePartArrayDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICurvePartArrayDefinition_INTERFACE_DEFINED__ */


#ifndef __IDerivativePartArrayDefinition_INTERFACE_DEFINED__
#define __IDerivativePartArrayDefinition_INTERFACE_DEFINED__

/* interface IDerivativePartArrayDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDerivativePartArrayDefinition,0x7AA0E540,0x0380,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0380-11D4-A30E-00C026EE094F")
    IDerivativePartArrayDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartArray( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDeriv( 
            LPENTITY deriv) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDeriv( void) = 0;
        
        virtual /* [helpstring] */ LPDELETEDCOPYCOLLECTION STDMETHODCALLTYPE DeletedCollection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDerivativePartArrayDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDerivativePartArrayDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDerivativePartArrayDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDerivativePartArrayDefinition * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartArray )( 
            IDerivativePartArrayDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDeriv )( 
            IDerivativePartArrayDefinition * This,
            LPENTITY deriv);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDeriv )( 
            IDerivativePartArrayDefinition * This);
        
        /* [helpstring] */ LPDELETEDCOPYCOLLECTION ( STDMETHODCALLTYPE *DeletedCollection )( 
            IDerivativePartArrayDefinition * This);
        
        END_INTERFACE
    } IDerivativePartArrayDefinitionVtbl;

    interface IDerivativePartArrayDefinition
    {
        CONST_VTBL struct IDerivativePartArrayDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDerivativePartArrayDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDerivativePartArrayDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDerivativePartArrayDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDerivativePartArrayDefinition_PartArray(This)	\
    ( (This)->lpVtbl -> PartArray(This) ) 

#define IDerivativePartArrayDefinition_SetDeriv(This,deriv)	\
    ( (This)->lpVtbl -> SetDeriv(This,deriv) ) 

#define IDerivativePartArrayDefinition_GetDeriv(This)	\
    ( (This)->lpVtbl -> GetDeriv(This) ) 

#define IDerivativePartArrayDefinition_DeletedCollection(This)	\
    ( (This)->lpVtbl -> DeletedCollection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDerivativePartArrayDefinition_INTERFACE_DEFINED__ */


#ifndef __IInclineDefinition_INTERFACE_DEFINED__
#define __IInclineDefinition_INTERFACE_DEFINED__

/* interface IInclineDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IInclineDefinition,0x7AA0E540,0x0381,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0381-11D4-A30E-00C026EE094F")
    IInclineDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE FaceArray( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double angle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            BOOL direction) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IInclineDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IInclineDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IInclineDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IInclineDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *FaceArray )( 
            IInclineDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IInclineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            IInclineDefinition * This,
            double angle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDirection )( 
            IInclineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            IInclineDefinition * This,
            BOOL direction);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IInclineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IInclineDefinition * This,
            LPENTITY plane);
        
        END_INTERFACE
    } IInclineDefinitionVtbl;

    interface IInclineDefinition
    {
        CONST_VTBL struct IInclineDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IInclineDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IInclineDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IInclineDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IInclineDefinition_FaceArray(This)	\
    ( (This)->lpVtbl -> FaceArray(This) ) 

#define IInclineDefinition_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IInclineDefinition_SetAngle(This,angle)	\
    ( (This)->lpVtbl -> SetAngle(This,angle) ) 

#define IInclineDefinition_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define IInclineDefinition_SetDirection(This,direction)	\
    ( (This)->lpVtbl -> SetDirection(This,direction) ) 

#define IInclineDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IInclineDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IInclineDefinition_INTERFACE_DEFINED__ */


#ifndef __IRibDefinition_INTERFACE_DEFINED__
#define __IRibDefinition_INTERFACE_DEFINED__

/* interface IRibDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IRibDefinition,0x7AA0E540,0x0382,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0382-11D4-A30E-00C026EE094F")
    IRibDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetIndexSegmentBySketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetIndexSegmentBySketch( 
            int index) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAngle( 
            double angle) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetSide( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSide( 
            int side) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetThinParam( 
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetThinParam( 
            BYTE thinType,
            double normalThickness,
            double reverseThickness) = 0;
        
        virtual /* [helpstring] */ LPTHINPARAM STDMETHODCALLTYPE ThinParam( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRibDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRibDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRibDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRibDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IRibDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IRibDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetIndexSegmentBySketch )( 
            IRibDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetIndexSegmentBySketch )( 
            IRibDefinition * This,
            int index);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IRibDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAngle )( 
            IRibDefinition * This,
            double angle);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetSide )( 
            IRibDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSide )( 
            IRibDefinition * This,
            int side);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetThinParam )( 
            IRibDefinition * This,
            BYTE *thinType,
            double *normalThickness,
            double *reverseThickness);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetThinParam )( 
            IRibDefinition * This,
            BYTE thinType,
            double normalThickness,
            double reverseThickness);
        
        /* [helpstring] */ LPTHINPARAM ( STDMETHODCALLTYPE *ThinParam )( 
            IRibDefinition * This);
        
        END_INTERFACE
    } IRibDefinitionVtbl;

    interface IRibDefinition
    {
        CONST_VTBL struct IRibDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRibDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRibDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRibDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRibDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IRibDefinition_SetSketch(This,sketch)	\
    ( (This)->lpVtbl -> SetSketch(This,sketch) ) 

#define IRibDefinition_GetIndexSegmentBySketch(This)	\
    ( (This)->lpVtbl -> GetIndexSegmentBySketch(This) ) 

#define IRibDefinition_SetIndexSegmentBySketch(This,index)	\
    ( (This)->lpVtbl -> SetIndexSegmentBySketch(This,index) ) 

#define IRibDefinition_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IRibDefinition_SetAngle(This,angle)	\
    ( (This)->lpVtbl -> SetAngle(This,angle) ) 

#define IRibDefinition_GetSide(This)	\
    ( (This)->lpVtbl -> GetSide(This) ) 

#define IRibDefinition_SetSide(This,side)	\
    ( (This)->lpVtbl -> SetSide(This,side) ) 

#define IRibDefinition_GetThinParam(This,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> GetThinParam(This,thinType,normalThickness,reverseThickness) ) 

#define IRibDefinition_SetThinParam(This,thinType,normalThickness,reverseThickness)	\
    ( (This)->lpVtbl -> SetThinParam(This,thinType,normalThickness,reverseThickness) ) 

#define IRibDefinition_ThinParam(This)	\
    ( (This)->lpVtbl -> ThinParam(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRibDefinition_INTERFACE_DEFINED__ */


#ifndef __IImportedSurfaceDefinition_INTERFACE_DEFINED__
#define __IImportedSurfaceDefinition_INTERFACE_DEFINED__

/* interface IImportedSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IImportedSurfaceDefinition,0x7AA0E540,0x0384,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0384-11D4-A30E-00C026EE094F")
    IImportedSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE BeginCurve( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddPoint( 
            double x,
            double y,
            double z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE EndCurve( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddCurve( 
            VARIANT arr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IImportedSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IImportedSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IImportedSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IImportedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IImportedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *BeginCurve )( 
            IImportedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddPoint )( 
            IImportedSurfaceDefinition * This,
            double x,
            double y,
            double z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *EndCurve )( 
            IImportedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddCurve )( 
            IImportedSurfaceDefinition * This,
            VARIANT arr);
        
        END_INTERFACE
    } IImportedSurfaceDefinitionVtbl;

    interface IImportedSurfaceDefinition
    {
        CONST_VTBL struct IImportedSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IImportedSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IImportedSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IImportedSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IImportedSurfaceDefinition_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IImportedSurfaceDefinition_BeginCurve(This)	\
    ( (This)->lpVtbl -> BeginCurve(This) ) 

#define IImportedSurfaceDefinition_AddPoint(This,x,y,z)	\
    ( (This)->lpVtbl -> AddPoint(This,x,y,z) ) 

#define IImportedSurfaceDefinition_EndCurve(This)	\
    ( (This)->lpVtbl -> EndCurve(This) ) 

#define IImportedSurfaceDefinition_AddCurve(This,arr)	\
    ( (This)->lpVtbl -> AddCurve(This,arr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IImportedSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IPolygonalLineDefinition_INTERFACE_DEFINED__
#define __IPolygonalLineDefinition_INTERFACE_DEFINED__

/* interface IPolygonalLineDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPolygonalLineDefinition,0x7AA0E540,0x0400,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0400-11D4-A30E-00C026EE094F")
    IPolygonalLineDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCountVertex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddVertex( 
            double x,
            double y,
            double z,
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE InsertVertex( 
            long index,
            double x,
            double y,
            double z,
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DeleteVertex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetParamVertex( 
            long index,
            double *x,
            double *y,
            double *z,
            double *radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetClosed( 
            BOOL cls) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClosed( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ReadFromFile( 
            LPOLESTR fileName) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE WriteToFile( 
            LPOLESTR fileName) = 0;
        
        virtual /* [helpstring] */ LPEDGECOLLECTION STDMETHODCALLTYPE EdgeCollection( void) = 0;
        
        virtual /* [helpstring] */ LPPOLYGONALLINEVERTEXPARAM STDMETHODCALLTYPE AddPointWithParams( 
            int index) = 0;
        
        virtual /* [helpstring] */ LPPOLYGONALLINEVERTEXPARAM STDMETHODCALLTYPE GetPointParams( 
            int index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetVertexVisible( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetVertexVisible( 
            BOOL visible) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPolygonalLineDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPolygonalLineDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPolygonalLineDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPolygonalLineDefinition * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCountVertex )( 
            IPolygonalLineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddVertex )( 
            IPolygonalLineDefinition * This,
            double x,
            double y,
            double z,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *InsertVertex )( 
            IPolygonalLineDefinition * This,
            long index,
            double x,
            double y,
            double z,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DeleteVertex )( 
            IPolygonalLineDefinition * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetParamVertex )( 
            IPolygonalLineDefinition * This,
            long index,
            double *x,
            double *y,
            double *z,
            double *radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Flush )( 
            IPolygonalLineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetClosed )( 
            IPolygonalLineDefinition * This,
            BOOL cls);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClosed )( 
            IPolygonalLineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ReadFromFile )( 
            IPolygonalLineDefinition * This,
            LPOLESTR fileName);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *WriteToFile )( 
            IPolygonalLineDefinition * This,
            LPOLESTR fileName);
        
        /* [helpstring] */ LPEDGECOLLECTION ( STDMETHODCALLTYPE *EdgeCollection )( 
            IPolygonalLineDefinition * This);
        
        /* [helpstring] */ LPPOLYGONALLINEVERTEXPARAM ( STDMETHODCALLTYPE *AddPointWithParams )( 
            IPolygonalLineDefinition * This,
            int index);
        
        /* [helpstring] */ LPPOLYGONALLINEVERTEXPARAM ( STDMETHODCALLTYPE *GetPointParams )( 
            IPolygonalLineDefinition * This,
            int index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetVertexVisible )( 
            IPolygonalLineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetVertexVisible )( 
            IPolygonalLineDefinition * This,
            BOOL visible);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IPolygonalLineDefinition * This);
        
        END_INTERFACE
    } IPolygonalLineDefinitionVtbl;

    interface IPolygonalLineDefinition
    {
        CONST_VTBL struct IPolygonalLineDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolygonalLineDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolygonalLineDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolygonalLineDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolygonalLineDefinition_GetCountVertex(This)	\
    ( (This)->lpVtbl -> GetCountVertex(This) ) 

#define IPolygonalLineDefinition_AddVertex(This,x,y,z,radius)	\
    ( (This)->lpVtbl -> AddVertex(This,x,y,z,radius) ) 

#define IPolygonalLineDefinition_InsertVertex(This,index,x,y,z,radius)	\
    ( (This)->lpVtbl -> InsertVertex(This,index,x,y,z,radius) ) 

#define IPolygonalLineDefinition_DeleteVertex(This,index)	\
    ( (This)->lpVtbl -> DeleteVertex(This,index) ) 

#define IPolygonalLineDefinition_GetParamVertex(This,index,x,y,z,radius)	\
    ( (This)->lpVtbl -> GetParamVertex(This,index,x,y,z,radius) ) 

#define IPolygonalLineDefinition_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define IPolygonalLineDefinition_SetClosed(This,cls)	\
    ( (This)->lpVtbl -> SetClosed(This,cls) ) 

#define IPolygonalLineDefinition_GetClosed(This)	\
    ( (This)->lpVtbl -> GetClosed(This) ) 

#define IPolygonalLineDefinition_ReadFromFile(This,fileName)	\
    ( (This)->lpVtbl -> ReadFromFile(This,fileName) ) 

#define IPolygonalLineDefinition_WriteToFile(This,fileName)	\
    ( (This)->lpVtbl -> WriteToFile(This,fileName) ) 

#define IPolygonalLineDefinition_EdgeCollection(This)	\
    ( (This)->lpVtbl -> EdgeCollection(This) ) 

#define IPolygonalLineDefinition_AddPointWithParams(This,index)	\
    ( (This)->lpVtbl -> AddPointWithParams(This,index) ) 

#define IPolygonalLineDefinition_GetPointParams(This,index)	\
    ( (This)->lpVtbl -> GetPointParams(This,index) ) 

#define IPolygonalLineDefinition_GetVertexVisible(This)	\
    ( (This)->lpVtbl -> GetVertexVisible(This) ) 

#define IPolygonalLineDefinition_SetVertexVisible(This,visible)	\
    ( (This)->lpVtbl -> SetVertexVisible(This,visible) ) 

#define IPolygonalLineDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolygonalLineDefinition_INTERFACE_DEFINED__ */


#ifndef __IConicSpiralDefinition_INTERFACE_DEFINED__
#define __IConicSpiralDefinition_INTERFACE_DEFINED__

/* interface IConicSpiralDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IConicSpiralDefinition,0x7AA0E540,0x0401,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0401-11D4-A30E-00C026EE094F")
    IConicSpiralDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetTurn( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTurn( 
            double turn) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTurnDir( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTurnDir( 
            BOOL turnDir) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLocation( 
            double *x,
            double *y) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLocation( 
            double x,
            double y) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetBuildMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBuildMode( 
            short buildMode) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetBuildDir( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBuildDir( 
            BOOL buildDir) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetHeight( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeight( 
            double height) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetHeightType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightType( 
            short heightType) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetHeightAdd( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightAdd( 
            double heightAdd) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHeightAddHow( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightAddHow( 
            BOOL heightAddHow) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightObject( 
            LPENTITY heightObject) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetHeightObject( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetInitialDiam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInitialDiam( 
            double diam1Type) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetInitialDiamType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInitialDiamType( 
            short diam1Type) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetInitialDiamObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetInitialDiamObject( 
            LPENTITY diam1Object) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetTerminalDiam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTerminalDiam( 
            double diam2) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetTerminalDiamType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTerminalDiamType( 
            short diam2Type) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetTerminalDiamObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTerminalDiamObject( 
            LPENTITY diam2Object) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetTiltAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTiltAngle( 
            double tiltAngle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTiltAngleHow( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTiltAngleHow( 
            BOOL tiltAngleHow) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetFirstAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFirstAngle( 
            double firstAngle) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConicSpiralDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConicSpiralDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConicSpiralDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetTurn )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTurn )( 
            IConicSpiralDefinition * This,
            double turn);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep )( 
            IConicSpiralDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTurnDir )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTurnDir )( 
            IConicSpiralDefinition * This,
            BOOL turnDir);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            IConicSpiralDefinition * This,
            LPENTITY plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLocation )( 
            IConicSpiralDefinition * This,
            double *x,
            double *y);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLocation )( 
            IConicSpiralDefinition * This,
            double x,
            double y);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetBuildMode )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBuildMode )( 
            IConicSpiralDefinition * This,
            short buildMode);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetBuildDir )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBuildDir )( 
            IConicSpiralDefinition * This,
            BOOL buildDir);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetHeight )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeight )( 
            IConicSpiralDefinition * This,
            double height);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetHeightType )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightType )( 
            IConicSpiralDefinition * This,
            short heightType);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetHeightAdd )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightAdd )( 
            IConicSpiralDefinition * This,
            double heightAdd);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHeightAddHow )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightAddHow )( 
            IConicSpiralDefinition * This,
            BOOL heightAddHow);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightObject )( 
            IConicSpiralDefinition * This,
            LPENTITY heightObject);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetHeightObject )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetInitialDiam )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInitialDiam )( 
            IConicSpiralDefinition * This,
            double diam1Type);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetInitialDiamType )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInitialDiamType )( 
            IConicSpiralDefinition * This,
            short diam1Type);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetInitialDiamObject )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetInitialDiamObject )( 
            IConicSpiralDefinition * This,
            LPENTITY diam1Object);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetTerminalDiam )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTerminalDiam )( 
            IConicSpiralDefinition * This,
            double diam2);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetTerminalDiamType )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTerminalDiamType )( 
            IConicSpiralDefinition * This,
            short diam2Type);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetTerminalDiamObject )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTerminalDiamObject )( 
            IConicSpiralDefinition * This,
            LPENTITY diam2Object);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetTiltAngle )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTiltAngle )( 
            IConicSpiralDefinition * This,
            double tiltAngle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTiltAngleHow )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTiltAngleHow )( 
            IConicSpiralDefinition * This,
            BOOL tiltAngleHow);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetFirstAngle )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFirstAngle )( 
            IConicSpiralDefinition * This,
            double firstAngle);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IConicSpiralDefinition * This);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IConicSpiralDefinition * This);
        
        END_INTERFACE
    } IConicSpiralDefinitionVtbl;

    interface IConicSpiralDefinition
    {
        CONST_VTBL struct IConicSpiralDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConicSpiralDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConicSpiralDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConicSpiralDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConicSpiralDefinition_GetTurn(This)	\
    ( (This)->lpVtbl -> GetTurn(This) ) 

#define IConicSpiralDefinition_SetTurn(This,turn)	\
    ( (This)->lpVtbl -> SetTurn(This,turn) ) 

#define IConicSpiralDefinition_GetStep(This)	\
    ( (This)->lpVtbl -> GetStep(This) ) 

#define IConicSpiralDefinition_SetStep(This,step)	\
    ( (This)->lpVtbl -> SetStep(This,step) ) 

#define IConicSpiralDefinition_GetTurnDir(This)	\
    ( (This)->lpVtbl -> GetTurnDir(This) ) 

#define IConicSpiralDefinition_SetTurnDir(This,turnDir)	\
    ( (This)->lpVtbl -> SetTurnDir(This,turnDir) ) 

#define IConicSpiralDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define IConicSpiralDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#define IConicSpiralDefinition_GetLocation(This,x,y)	\
    ( (This)->lpVtbl -> GetLocation(This,x,y) ) 

#define IConicSpiralDefinition_SetLocation(This,x,y)	\
    ( (This)->lpVtbl -> SetLocation(This,x,y) ) 

#define IConicSpiralDefinition_GetBuildMode(This)	\
    ( (This)->lpVtbl -> GetBuildMode(This) ) 

#define IConicSpiralDefinition_SetBuildMode(This,buildMode)	\
    ( (This)->lpVtbl -> SetBuildMode(This,buildMode) ) 

#define IConicSpiralDefinition_GetBuildDir(This)	\
    ( (This)->lpVtbl -> GetBuildDir(This) ) 

#define IConicSpiralDefinition_SetBuildDir(This,buildDir)	\
    ( (This)->lpVtbl -> SetBuildDir(This,buildDir) ) 

#define IConicSpiralDefinition_GetHeight(This)	\
    ( (This)->lpVtbl -> GetHeight(This) ) 

#define IConicSpiralDefinition_SetHeight(This,height)	\
    ( (This)->lpVtbl -> SetHeight(This,height) ) 

#define IConicSpiralDefinition_GetHeightType(This)	\
    ( (This)->lpVtbl -> GetHeightType(This) ) 

#define IConicSpiralDefinition_SetHeightType(This,heightType)	\
    ( (This)->lpVtbl -> SetHeightType(This,heightType) ) 

#define IConicSpiralDefinition_GetHeightAdd(This)	\
    ( (This)->lpVtbl -> GetHeightAdd(This) ) 

#define IConicSpiralDefinition_SetHeightAdd(This,heightAdd)	\
    ( (This)->lpVtbl -> SetHeightAdd(This,heightAdd) ) 

#define IConicSpiralDefinition_GetHeightAddHow(This)	\
    ( (This)->lpVtbl -> GetHeightAddHow(This) ) 

#define IConicSpiralDefinition_SetHeightAddHow(This,heightAddHow)	\
    ( (This)->lpVtbl -> SetHeightAddHow(This,heightAddHow) ) 

#define IConicSpiralDefinition_SetHeightObject(This,heightObject)	\
    ( (This)->lpVtbl -> SetHeightObject(This,heightObject) ) 

#define IConicSpiralDefinition_GetHeightObject(This)	\
    ( (This)->lpVtbl -> GetHeightObject(This) ) 

#define IConicSpiralDefinition_GetInitialDiam(This)	\
    ( (This)->lpVtbl -> GetInitialDiam(This) ) 

#define IConicSpiralDefinition_SetInitialDiam(This,diam1Type)	\
    ( (This)->lpVtbl -> SetInitialDiam(This,diam1Type) ) 

#define IConicSpiralDefinition_GetInitialDiamType(This)	\
    ( (This)->lpVtbl -> GetInitialDiamType(This) ) 

#define IConicSpiralDefinition_SetInitialDiamType(This,diam1Type)	\
    ( (This)->lpVtbl -> SetInitialDiamType(This,diam1Type) ) 

#define IConicSpiralDefinition_GetInitialDiamObject(This)	\
    ( (This)->lpVtbl -> GetInitialDiamObject(This) ) 

#define IConicSpiralDefinition_SetInitialDiamObject(This,diam1Object)	\
    ( (This)->lpVtbl -> SetInitialDiamObject(This,diam1Object) ) 

#define IConicSpiralDefinition_GetTerminalDiam(This)	\
    ( (This)->lpVtbl -> GetTerminalDiam(This) ) 

#define IConicSpiralDefinition_SetTerminalDiam(This,diam2)	\
    ( (This)->lpVtbl -> SetTerminalDiam(This,diam2) ) 

#define IConicSpiralDefinition_GetTerminalDiamType(This)	\
    ( (This)->lpVtbl -> GetTerminalDiamType(This) ) 

#define IConicSpiralDefinition_SetTerminalDiamType(This,diam2Type)	\
    ( (This)->lpVtbl -> SetTerminalDiamType(This,diam2Type) ) 

#define IConicSpiralDefinition_GetTerminalDiamObject(This)	\
    ( (This)->lpVtbl -> GetTerminalDiamObject(This) ) 

#define IConicSpiralDefinition_SetTerminalDiamObject(This,diam2Object)	\
    ( (This)->lpVtbl -> SetTerminalDiamObject(This,diam2Object) ) 

#define IConicSpiralDefinition_GetTiltAngle(This)	\
    ( (This)->lpVtbl -> GetTiltAngle(This) ) 

#define IConicSpiralDefinition_SetTiltAngle(This,tiltAngle)	\
    ( (This)->lpVtbl -> SetTiltAngle(This,tiltAngle) ) 

#define IConicSpiralDefinition_GetTiltAngleHow(This)	\
    ( (This)->lpVtbl -> GetTiltAngleHow(This) ) 

#define IConicSpiralDefinition_SetTiltAngleHow(This,tiltAngleHow)	\
    ( (This)->lpVtbl -> SetTiltAngleHow(This,tiltAngleHow) ) 

#define IConicSpiralDefinition_GetFirstAngle(This)	\
    ( (This)->lpVtbl -> GetFirstAngle(This) ) 

#define IConicSpiralDefinition_SetFirstAngle(This,firstAngle)	\
    ( (This)->lpVtbl -> SetFirstAngle(This,firstAngle) ) 

#define IConicSpiralDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IConicSpiralDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConicSpiralDefinition_INTERFACE_DEFINED__ */


#ifndef __ISplineDefinition_INTERFACE_DEFINED__
#define __ISplineDefinition_INTERFACE_DEFINED__

/* interface ISplineDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISplineDefinition,0x7AA0E540,0x0402,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0402-11D4-A30E-00C026EE094F")
    ISplineDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCountVertex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddVertex( 
            double x,
            double y,
            double z,
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE InsertVertex( 
            long index,
            double x,
            double y,
            double z,
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DeleteVertex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetParamVertex( 
            long index,
            double *x,
            double *y,
            double *z,
            double *weight) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Flush( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetClosed( 
            BOOL cls) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClosed( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ReadFromFile( 
            LPOLESTR fileName) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE WriteToFile( 
            LPOLESTR fileName) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSplineOnPoles( 
            BOOL splineOnPoles) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSplineOnPoles( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDegree( 
            long degree) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDegree( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddVertexAndAssociation( 
            long index,
            LPENTITY obj,
            double weight) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAssociation( 
            long index,
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAssociation( 
            long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISplineDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISplineDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISplineDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISplineDefinition * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCountVertex )( 
            ISplineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddVertex )( 
            ISplineDefinition * This,
            double x,
            double y,
            double z,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *InsertVertex )( 
            ISplineDefinition * This,
            long index,
            double x,
            double y,
            double z,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DeleteVertex )( 
            ISplineDefinition * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetParamVertex )( 
            ISplineDefinition * This,
            long index,
            double *x,
            double *y,
            double *z,
            double *weight);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Flush )( 
            ISplineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetClosed )( 
            ISplineDefinition * This,
            BOOL cls);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClosed )( 
            ISplineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ReadFromFile )( 
            ISplineDefinition * This,
            LPOLESTR fileName);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *WriteToFile )( 
            ISplineDefinition * This,
            LPOLESTR fileName);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSplineOnPoles )( 
            ISplineDefinition * This,
            BOOL splineOnPoles);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSplineOnPoles )( 
            ISplineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDegree )( 
            ISplineDefinition * This,
            long degree);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDegree )( 
            ISplineDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddVertexAndAssociation )( 
            ISplineDefinition * This,
            long index,
            LPENTITY obj,
            double weight);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAssociation )( 
            ISplineDefinition * This,
            long index,
            LPENTITY obj);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAssociation )( 
            ISplineDefinition * This,
            long index);
        
        END_INTERFACE
    } ISplineDefinitionVtbl;

    interface ISplineDefinition
    {
        CONST_VTBL struct ISplineDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISplineDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISplineDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISplineDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISplineDefinition_GetCountVertex(This)	\
    ( (This)->lpVtbl -> GetCountVertex(This) ) 

#define ISplineDefinition_AddVertex(This,x,y,z,radius)	\
    ( (This)->lpVtbl -> AddVertex(This,x,y,z,radius) ) 

#define ISplineDefinition_InsertVertex(This,index,x,y,z,radius)	\
    ( (This)->lpVtbl -> InsertVertex(This,index,x,y,z,radius) ) 

#define ISplineDefinition_DeleteVertex(This,index)	\
    ( (This)->lpVtbl -> DeleteVertex(This,index) ) 

#define ISplineDefinition_GetParamVertex(This,index,x,y,z,weight)	\
    ( (This)->lpVtbl -> GetParamVertex(This,index,x,y,z,weight) ) 

#define ISplineDefinition_Flush(This)	\
    ( (This)->lpVtbl -> Flush(This) ) 

#define ISplineDefinition_SetClosed(This,cls)	\
    ( (This)->lpVtbl -> SetClosed(This,cls) ) 

#define ISplineDefinition_GetClosed(This)	\
    ( (This)->lpVtbl -> GetClosed(This) ) 

#define ISplineDefinition_ReadFromFile(This,fileName)	\
    ( (This)->lpVtbl -> ReadFromFile(This,fileName) ) 

#define ISplineDefinition_WriteToFile(This,fileName)	\
    ( (This)->lpVtbl -> WriteToFile(This,fileName) ) 

#define ISplineDefinition_SetSplineOnPoles(This,splineOnPoles)	\
    ( (This)->lpVtbl -> SetSplineOnPoles(This,splineOnPoles) ) 

#define ISplineDefinition_GetSplineOnPoles(This)	\
    ( (This)->lpVtbl -> GetSplineOnPoles(This) ) 

#define ISplineDefinition_SetDegree(This,degree)	\
    ( (This)->lpVtbl -> SetDegree(This,degree) ) 

#define ISplineDefinition_GetDegree(This)	\
    ( (This)->lpVtbl -> GetDegree(This) ) 

#define ISplineDefinition_AddVertexAndAssociation(This,index,obj,weight)	\
    ( (This)->lpVtbl -> AddVertexAndAssociation(This,index,obj,weight) ) 

#define ISplineDefinition_SetAssociation(This,index,obj)	\
    ( (This)->lpVtbl -> SetAssociation(This,index,obj) ) 

#define ISplineDefinition_GetAssociation(This,index)	\
    ( (This)->lpVtbl -> GetAssociation(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISplineDefinition_INTERFACE_DEFINED__ */


#ifndef __ICylindricSpiralDefinition_INTERFACE_DEFINED__
#define __ICylindricSpiralDefinition_INTERFACE_DEFINED__

/* interface ICylindricSpiralDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICylindricSpiralDefinition,0x7AA0E540,0x0403,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0403-11D4-A30E-00C026EE094F")
    ICylindricSpiralDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetTurn( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTurn( 
            double turn) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetStep( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStep( 
            double step) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTurnDir( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetTurnDir( 
            BOOL turnDir) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPlane( 
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLocation( 
            double *x,
            double *y) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetLocation( 
            double x,
            double y) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetBuildMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBuildMode( 
            short buildMode) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetBuildDir( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBuildDir( 
            BOOL buildDir) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetHeight( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeight( 
            double height) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetHeightType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightType( 
            short heightType) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetHeightAdd( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightAdd( 
            double heightAdd) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetHeightAddHow( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightAddHow( 
            BOOL heightAddHow) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetHeightObject( 
            LPENTITY heightObject) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetHeightObject( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDiam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDiam( 
            double diamType) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetDiamType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDiamType( 
            short diamType) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDiamObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDiamObject( 
            LPENTITY diamObject) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetFirstAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFirstAngle( 
            double firstAngle) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICylindricSpiralDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICylindricSpiralDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICylindricSpiralDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetTurn )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTurn )( 
            ICylindricSpiralDefinition * This,
            double turn);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetStep )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStep )( 
            ICylindricSpiralDefinition * This,
            double step);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTurnDir )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetTurnDir )( 
            ICylindricSpiralDefinition * This,
            BOOL turnDir);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetPlane )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPlane )( 
            ICylindricSpiralDefinition * This,
            LPENTITY plane);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLocation )( 
            ICylindricSpiralDefinition * This,
            double *x,
            double *y);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetLocation )( 
            ICylindricSpiralDefinition * This,
            double x,
            double y);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetBuildMode )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBuildMode )( 
            ICylindricSpiralDefinition * This,
            short buildMode);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetBuildDir )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBuildDir )( 
            ICylindricSpiralDefinition * This,
            BOOL buildDir);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetHeight )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeight )( 
            ICylindricSpiralDefinition * This,
            double height);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetHeightType )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightType )( 
            ICylindricSpiralDefinition * This,
            short heightType);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetHeightAdd )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightAdd )( 
            ICylindricSpiralDefinition * This,
            double heightAdd);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetHeightAddHow )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightAddHow )( 
            ICylindricSpiralDefinition * This,
            BOOL heightAddHow);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetHeightObject )( 
            ICylindricSpiralDefinition * This,
            LPENTITY heightObject);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetHeightObject )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDiam )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDiam )( 
            ICylindricSpiralDefinition * This,
            double diamType);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetDiamType )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDiamType )( 
            ICylindricSpiralDefinition * This,
            short diamType);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDiamObject )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDiamObject )( 
            ICylindricSpiralDefinition * This,
            LPENTITY diamObject);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetFirstAngle )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFirstAngle )( 
            ICylindricSpiralDefinition * This,
            double firstAngle);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            ICylindricSpiralDefinition * This);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            ICylindricSpiralDefinition * This);
        
        END_INTERFACE
    } ICylindricSpiralDefinitionVtbl;

    interface ICylindricSpiralDefinition
    {
        CONST_VTBL struct ICylindricSpiralDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICylindricSpiralDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICylindricSpiralDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICylindricSpiralDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICylindricSpiralDefinition_GetTurn(This)	\
    ( (This)->lpVtbl -> GetTurn(This) ) 

#define ICylindricSpiralDefinition_SetTurn(This,turn)	\
    ( (This)->lpVtbl -> SetTurn(This,turn) ) 

#define ICylindricSpiralDefinition_GetStep(This)	\
    ( (This)->lpVtbl -> GetStep(This) ) 

#define ICylindricSpiralDefinition_SetStep(This,step)	\
    ( (This)->lpVtbl -> SetStep(This,step) ) 

#define ICylindricSpiralDefinition_GetTurnDir(This)	\
    ( (This)->lpVtbl -> GetTurnDir(This) ) 

#define ICylindricSpiralDefinition_SetTurnDir(This,turnDir)	\
    ( (This)->lpVtbl -> SetTurnDir(This,turnDir) ) 

#define ICylindricSpiralDefinition_GetPlane(This)	\
    ( (This)->lpVtbl -> GetPlane(This) ) 

#define ICylindricSpiralDefinition_SetPlane(This,plane)	\
    ( (This)->lpVtbl -> SetPlane(This,plane) ) 

#define ICylindricSpiralDefinition_GetLocation(This,x,y)	\
    ( (This)->lpVtbl -> GetLocation(This,x,y) ) 

#define ICylindricSpiralDefinition_SetLocation(This,x,y)	\
    ( (This)->lpVtbl -> SetLocation(This,x,y) ) 

#define ICylindricSpiralDefinition_GetBuildMode(This)	\
    ( (This)->lpVtbl -> GetBuildMode(This) ) 

#define ICylindricSpiralDefinition_SetBuildMode(This,buildMode)	\
    ( (This)->lpVtbl -> SetBuildMode(This,buildMode) ) 

#define ICylindricSpiralDefinition_GetBuildDir(This)	\
    ( (This)->lpVtbl -> GetBuildDir(This) ) 

#define ICylindricSpiralDefinition_SetBuildDir(This,buildDir)	\
    ( (This)->lpVtbl -> SetBuildDir(This,buildDir) ) 

#define ICylindricSpiralDefinition_GetHeight(This)	\
    ( (This)->lpVtbl -> GetHeight(This) ) 

#define ICylindricSpiralDefinition_SetHeight(This,height)	\
    ( (This)->lpVtbl -> SetHeight(This,height) ) 

#define ICylindricSpiralDefinition_GetHeightType(This)	\
    ( (This)->lpVtbl -> GetHeightType(This) ) 

#define ICylindricSpiralDefinition_SetHeightType(This,heightType)	\
    ( (This)->lpVtbl -> SetHeightType(This,heightType) ) 

#define ICylindricSpiralDefinition_GetHeightAdd(This)	\
    ( (This)->lpVtbl -> GetHeightAdd(This) ) 

#define ICylindricSpiralDefinition_SetHeightAdd(This,heightAdd)	\
    ( (This)->lpVtbl -> SetHeightAdd(This,heightAdd) ) 

#define ICylindricSpiralDefinition_GetHeightAddHow(This)	\
    ( (This)->lpVtbl -> GetHeightAddHow(This) ) 

#define ICylindricSpiralDefinition_SetHeightAddHow(This,heightAddHow)	\
    ( (This)->lpVtbl -> SetHeightAddHow(This,heightAddHow) ) 

#define ICylindricSpiralDefinition_SetHeightObject(This,heightObject)	\
    ( (This)->lpVtbl -> SetHeightObject(This,heightObject) ) 

#define ICylindricSpiralDefinition_GetHeightObject(This)	\
    ( (This)->lpVtbl -> GetHeightObject(This) ) 

#define ICylindricSpiralDefinition_GetDiam(This)	\
    ( (This)->lpVtbl -> GetDiam(This) ) 

#define ICylindricSpiralDefinition_SetDiam(This,diamType)	\
    ( (This)->lpVtbl -> SetDiam(This,diamType) ) 

#define ICylindricSpiralDefinition_GetDiamType(This)	\
    ( (This)->lpVtbl -> GetDiamType(This) ) 

#define ICylindricSpiralDefinition_SetDiamType(This,diamType)	\
    ( (This)->lpVtbl -> SetDiamType(This,diamType) ) 

#define ICylindricSpiralDefinition_GetDiamObject(This)	\
    ( (This)->lpVtbl -> GetDiamObject(This) ) 

#define ICylindricSpiralDefinition_SetDiamObject(This,diamObject)	\
    ( (This)->lpVtbl -> SetDiamObject(This,diamObject) ) 

#define ICylindricSpiralDefinition_GetFirstAngle(This)	\
    ( (This)->lpVtbl -> GetFirstAngle(This) ) 

#define ICylindricSpiralDefinition_SetFirstAngle(This,firstAngle)	\
    ( (This)->lpVtbl -> SetFirstAngle(This,firstAngle) ) 

#define ICylindricSpiralDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define ICylindricSpiralDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICylindricSpiralDefinition_INTERFACE_DEFINED__ */


#ifndef __IEvolutionSurfaceDefinition_INTERFACE_DEFINED__
#define __IEvolutionSurfaceDefinition_INTERFACE_DEFINED__

/* interface IEvolutionSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEvolutionSurfaceDefinition,0x45702BE9,0x1505,0x40ab,0xBF,0x0C,0x7F,0xE8,0x6D,0x53,0x73,0xE2);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45702BE9-1505-40ab-BF0C-7FE86D5373E2")
    IEvolutionSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY sketch) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE PathPartArray( void) = 0;
        
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetSketchShiftType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketchShiftType( 
            short s) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClosedShell( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetClosedShell( 
            BOOL closed) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetPathLength( 
            unsigned int bitVector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEvolutionSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEvolutionSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEvolutionSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEvolutionSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IEvolutionSurfaceDefinition * This,
            LPENTITY sketch);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IEvolutionSurfaceDefinition * This);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *PathPartArray )( 
            IEvolutionSurfaceDefinition * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetSketchShiftType )( 
            IEvolutionSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketchShiftType )( 
            IEvolutionSurfaceDefinition * This,
            short s);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClosedShell )( 
            IEvolutionSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetClosedShell )( 
            IEvolutionSurfaceDefinition * This,
            BOOL closed);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetPathLength )( 
            IEvolutionSurfaceDefinition * This,
            unsigned int bitVector);
        
        END_INTERFACE
    } IEvolutionSurfaceDefinitionVtbl;

    interface IEvolutionSurfaceDefinition
    {
        CONST_VTBL struct IEvolutionSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEvolutionSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEvolutionSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEvolutionSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEvolutionSurfaceDefinition_SetSketch(This,sketch)	\
    ( (This)->lpVtbl -> SetSketch(This,sketch) ) 

#define IEvolutionSurfaceDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IEvolutionSurfaceDefinition_PathPartArray(This)	\
    ( (This)->lpVtbl -> PathPartArray(This) ) 

#define IEvolutionSurfaceDefinition_GetSketchShiftType(This)	\
    ( (This)->lpVtbl -> GetSketchShiftType(This) ) 

#define IEvolutionSurfaceDefinition_SetSketchShiftType(This,s)	\
    ( (This)->lpVtbl -> SetSketchShiftType(This,s) ) 

#define IEvolutionSurfaceDefinition_GetClosedShell(This)	\
    ( (This)->lpVtbl -> GetClosedShell(This) ) 

#define IEvolutionSurfaceDefinition_SetClosedShell(This,closed)	\
    ( (This)->lpVtbl -> SetClosedShell(This,closed) ) 

#define IEvolutionSurfaceDefinition_GetPathLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetPathLength(This,bitVector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEvolutionSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IExtrusionSurfaceDefinition_INTERFACE_DEFINED__
#define __IExtrusionSurfaceDefinition_INTERFACE_DEFINED__

/* interface IExtrusionSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IExtrusionSurfaceDefinition,0x6D87BCE9,0x5D07,0x41ad,0xA1,0x37,0x42,0x95,0x7D,0xAF,0x0A,0x6F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D87BCE9-5D07-41ad-A137-42957DAF0A6F")
    IExtrusionSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            BYTE type,
            double depth,
            double draftValue,
            BOOL draftOutward) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ LPEXTRUSIONPARAM STDMETHODCALLTYPE ExtrusionParam( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDepthObject( 
            BOOL normal,
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ResetDepthObject( 
            BOOL normal) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClosedShell( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetClosedShell( 
            BOOL closed) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExtrusionSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExtrusionSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExtrusionSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExtrusionSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IExtrusionSurfaceDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IExtrusionSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            IExtrusionSurfaceDefinition * This,
            BOOL forward,
            BYTE *type,
            double *depth,
            double *draftValue,
            BOOL *draftOutward);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            IExtrusionSurfaceDefinition * This,
            BOOL forward,
            BYTE type,
            double depth,
            double draftValue,
            BOOL draftOutward);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            IExtrusionSurfaceDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            IExtrusionSurfaceDefinition * This);
        
        /* [helpstring] */ LPEXTRUSIONPARAM ( STDMETHODCALLTYPE *ExtrusionParam )( 
            IExtrusionSurfaceDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDepthObject )( 
            IExtrusionSurfaceDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDepthObject )( 
            IExtrusionSurfaceDefinition * This,
            BOOL normal,
            LPENTITY obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ResetDepthObject )( 
            IExtrusionSurfaceDefinition * This,
            BOOL normal);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClosedShell )( 
            IExtrusionSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetClosedShell )( 
            IExtrusionSurfaceDefinition * This,
            BOOL closed);
        
        END_INTERFACE
    } IExtrusionSurfaceDefinitionVtbl;

    interface IExtrusionSurfaceDefinition
    {
        CONST_VTBL struct IExtrusionSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExtrusionSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExtrusionSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExtrusionSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExtrusionSurfaceDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define IExtrusionSurfaceDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IExtrusionSurfaceDefinition_GetSideParam(This,forward,type,depth,draftValue,draftOutward)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,type,depth,draftValue,draftOutward) ) 

#define IExtrusionSurfaceDefinition_SetSideParam(This,forward,type,depth,draftValue,draftOutward)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,type,depth,draftValue,draftOutward) ) 

#define IExtrusionSurfaceDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define IExtrusionSurfaceDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define IExtrusionSurfaceDefinition_ExtrusionParam(This)	\
    ( (This)->lpVtbl -> ExtrusionParam(This) ) 

#define IExtrusionSurfaceDefinition_GetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> GetDepthObject(This,normal) ) 

#define IExtrusionSurfaceDefinition_SetDepthObject(This,normal,obj)	\
    ( (This)->lpVtbl -> SetDepthObject(This,normal,obj) ) 

#define IExtrusionSurfaceDefinition_ResetDepthObject(This,normal)	\
    ( (This)->lpVtbl -> ResetDepthObject(This,normal) ) 

#define IExtrusionSurfaceDefinition_GetClosedShell(This)	\
    ( (This)->lpVtbl -> GetClosedShell(This) ) 

#define IExtrusionSurfaceDefinition_SetClosedShell(This,closed)	\
    ( (This)->lpVtbl -> SetClosedShell(This,closed) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExtrusionSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IRotatedSurfaceDefinition_INTERFACE_DEFINED__
#define __IRotatedSurfaceDefinition_INTERFACE_DEFINED__

/* interface IRotatedSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IRotatedSurfaceDefinition,0xFD27841D,0x1374,0x4f7f,0xAE,0x8A,0xC2,0xA4,0x4F,0x89,0x12,0x0D);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD27841D-1374-4f7f-AE8A-C2A44F89120D")
    IRotatedSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetSketch( 
            LPENTITY name) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetSketch( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSideParam( 
            BOOL forward,
            double *angle) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetSideParam( 
            BOOL forward,
            double angle) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetToroidShapeType( 
            BOOL dirType) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetToroidShapeType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionType( 
            long dirType) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetDirectionType( void) = 0;
        
        virtual /* [helpstring] */ LPROTATEDPARAM STDMETHODCALLTYPE RotatedParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClosedShell( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetClosedShell( 
            BOOL closed) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRotatedSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRotatedSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRotatedSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRotatedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetSketch )( 
            IRotatedSurfaceDefinition * This,
            LPENTITY name);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetSketch )( 
            IRotatedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSideParam )( 
            IRotatedSurfaceDefinition * This,
            BOOL forward,
            double *angle);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetSideParam )( 
            IRotatedSurfaceDefinition * This,
            BOOL forward,
            double angle);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetToroidShapeType )( 
            IRotatedSurfaceDefinition * This,
            BOOL dirType);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetToroidShapeType )( 
            IRotatedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionType )( 
            IRotatedSurfaceDefinition * This,
            long dirType);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetDirectionType )( 
            IRotatedSurfaceDefinition * This);
        
        /* [helpstring] */ LPROTATEDPARAM ( STDMETHODCALLTYPE *RotatedParam )( 
            IRotatedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClosedShell )( 
            IRotatedSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetClosedShell )( 
            IRotatedSurfaceDefinition * This,
            BOOL closed);
        
        END_INTERFACE
    } IRotatedSurfaceDefinitionVtbl;

    interface IRotatedSurfaceDefinition
    {
        CONST_VTBL struct IRotatedSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRotatedSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRotatedSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRotatedSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRotatedSurfaceDefinition_SetSketch(This,name)	\
    ( (This)->lpVtbl -> SetSketch(This,name) ) 

#define IRotatedSurfaceDefinition_GetSketch(This)	\
    ( (This)->lpVtbl -> GetSketch(This) ) 

#define IRotatedSurfaceDefinition_GetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> GetSideParam(This,forward,angle) ) 

#define IRotatedSurfaceDefinition_SetSideParam(This,forward,angle)	\
    ( (This)->lpVtbl -> SetSideParam(This,forward,angle) ) 

#define IRotatedSurfaceDefinition_SetToroidShapeType(This,dirType)	\
    ( (This)->lpVtbl -> SetToroidShapeType(This,dirType) ) 

#define IRotatedSurfaceDefinition_GetToroidShapeType(This)	\
    ( (This)->lpVtbl -> GetToroidShapeType(This) ) 

#define IRotatedSurfaceDefinition_SetDirectionType(This,dirType)	\
    ( (This)->lpVtbl -> SetDirectionType(This,dirType) ) 

#define IRotatedSurfaceDefinition_GetDirectionType(This)	\
    ( (This)->lpVtbl -> GetDirectionType(This) ) 

#define IRotatedSurfaceDefinition_RotatedParam(This)	\
    ( (This)->lpVtbl -> RotatedParam(This) ) 

#define IRotatedSurfaceDefinition_GetClosedShell(This)	\
    ( (This)->lpVtbl -> GetClosedShell(This) ) 

#define IRotatedSurfaceDefinition_SetClosedShell(This,closed)	\
    ( (This)->lpVtbl -> SetClosedShell(This,closed) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRotatedSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __ILoftSurfaceDefinition_INTERFACE_DEFINED__
#define __ILoftSurfaceDefinition_INTERFACE_DEFINED__

/* interface ILoftSurfaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ILoftSurfaceDefinition,0x6E6A127B,0x233E,0x401f,0x8E,0x29,0xBB,0x29,0x8A,0xE0,0xFA,0x45);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6E6A127B-233E-401f-8E29-BB298AE0FA45")
    ILoftSurfaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetLoftParam( 
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetLoftParam( 
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath) = 0;
        
        virtual /* [helpstring] */ LPENTITYCOLLECTION STDMETHODCALLTYPE Sketchs( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClosedShell( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetClosedShell( 
            BOOL closed) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetDirectionalLine( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirectionalLine( 
            LPENTITY sketch) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILoftSurfaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILoftSurfaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILoftSurfaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILoftSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetLoftParam )( 
            ILoftSurfaceDefinition * This,
            BOOL *closed,
            BOOL *flipVertex,
            BOOL *autoPath);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetLoftParam )( 
            ILoftSurfaceDefinition * This,
            BOOL closed,
            BOOL flipVertex,
            BOOL autoPath);
        
        /* [helpstring] */ LPENTITYCOLLECTION ( STDMETHODCALLTYPE *Sketchs )( 
            ILoftSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClosedShell )( 
            ILoftSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetClosedShell )( 
            ILoftSurfaceDefinition * This,
            BOOL closed);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetDirectionalLine )( 
            ILoftSurfaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirectionalLine )( 
            ILoftSurfaceDefinition * This,
            LPENTITY sketch);
        
        END_INTERFACE
    } ILoftSurfaceDefinitionVtbl;

    interface ILoftSurfaceDefinition
    {
        CONST_VTBL struct ILoftSurfaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILoftSurfaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILoftSurfaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILoftSurfaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILoftSurfaceDefinition_GetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> GetLoftParam(This,closed,flipVertex,autoPath) ) 

#define ILoftSurfaceDefinition_SetLoftParam(This,closed,flipVertex,autoPath)	\
    ( (This)->lpVtbl -> SetLoftParam(This,closed,flipVertex,autoPath) ) 

#define ILoftSurfaceDefinition_Sketchs(This)	\
    ( (This)->lpVtbl -> Sketchs(This) ) 

#define ILoftSurfaceDefinition_GetClosedShell(This)	\
    ( (This)->lpVtbl -> GetClosedShell(This) ) 

#define ILoftSurfaceDefinition_SetClosedShell(This,closed)	\
    ( (This)->lpVtbl -> SetClosedShell(This,closed) ) 

#define ILoftSurfaceDefinition_GetDirectionalLine(This)	\
    ( (This)->lpVtbl -> GetDirectionalLine(This) ) 

#define ILoftSurfaceDefinition_SetDirectionalLine(This,sketch)	\
    ( (This)->lpVtbl -> SetDirectionalLine(This,sketch) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILoftSurfaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IMacro3DDefinition_INTERFACE_DEFINED__
#define __IMacro3DDefinition_INTERFACE_DEFINED__

/* interface IMacro3DDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMacro3DDefinition,0xB6F6D0AB,0x6339,0x4fc6,0x84,0x2B,0xCC,0x96,0x59,0x6B,0xCE,0x82);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B6F6D0AB-6339-4fc6-842B-CC96596BCE82")
    IMacro3DDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPFEATURECOLLECTION STDMETHODCALLTYPE FeatureCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetStaffVisible( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetStaffVisible( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Destroy( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetUserParam( 
            void *userParam,
            long size,
            LPOLESTR nameFile,
            LPOLESTR nameLib,
            long number) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUserParamSize( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetUserParam( 
            void *userParam,
            long size) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetUserLibraryFileName( void) = 0;
        
        virtual /* [helpstring] */ LPOLESTR STDMETHODCALLTYPE GetUserLibraryName( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUserLibraryCommand( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObject( 
            long index,
            LPUNKNOWN obj) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetObject( 
            long index) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCountObj( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE ClearAllObj( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDoubleClickEditOff( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDoubleClickEditOff( 
            BOOL val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPropertyObjectEditable( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPropertyObjectEditable( 
            BOOL PVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMacro3DDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMacro3DDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMacro3DDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ LPFEATURECOLLECTION ( STDMETHODCALLTYPE *FeatureCollection )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetStaffVisible )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetStaffVisible )( 
            IMacro3DDefinition * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Destroy )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IMacro3DDefinition * This,
            LPUNKNOWN obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetUserParam )( 
            IMacro3DDefinition * This,
            void *userParam,
            long size,
            LPOLESTR nameFile,
            LPOLESTR nameLib,
            long number);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUserParamSize )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetUserParam )( 
            IMacro3DDefinition * This,
            void *userParam,
            long size);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetUserLibraryFileName )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ LPOLESTR ( STDMETHODCALLTYPE *GetUserLibraryName )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUserLibraryCommand )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObject )( 
            IMacro3DDefinition * This,
            long index,
            LPUNKNOWN obj);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetObject )( 
            IMacro3DDefinition * This,
            long index);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCountObj )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *ClearAllObj )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDoubleClickEditOff )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDoubleClickEditOff )( 
            IMacro3DDefinition * This,
            BOOL val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPropertyObjectEditable )( 
            IMacro3DDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPropertyObjectEditable )( 
            IMacro3DDefinition * This,
            BOOL PVal);
        
        END_INTERFACE
    } IMacro3DDefinitionVtbl;

    interface IMacro3DDefinition
    {
        CONST_VTBL struct IMacro3DDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMacro3DDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMacro3DDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMacro3DDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMacro3DDefinition_FeatureCollection(This)	\
    ( (This)->lpVtbl -> FeatureCollection(This) ) 

#define IMacro3DDefinition_GetStaffVisible(This)	\
    ( (This)->lpVtbl -> GetStaffVisible(This) ) 

#define IMacro3DDefinition_SetStaffVisible(This,val)	\
    ( (This)->lpVtbl -> SetStaffVisible(This,val) ) 

#define IMacro3DDefinition_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IMacro3DDefinition_Add(This,obj)	\
    ( (This)->lpVtbl -> Add(This,obj) ) 

#define IMacro3DDefinition_SetUserParam(This,userParam,size,nameFile,nameLib,number)	\
    ( (This)->lpVtbl -> SetUserParam(This,userParam,size,nameFile,nameLib,number) ) 

#define IMacro3DDefinition_GetUserParamSize(This)	\
    ( (This)->lpVtbl -> GetUserParamSize(This) ) 

#define IMacro3DDefinition_GetUserParam(This,userParam,size)	\
    ( (This)->lpVtbl -> GetUserParam(This,userParam,size) ) 

#define IMacro3DDefinition_GetUserLibraryFileName(This)	\
    ( (This)->lpVtbl -> GetUserLibraryFileName(This) ) 

#define IMacro3DDefinition_GetUserLibraryName(This)	\
    ( (This)->lpVtbl -> GetUserLibraryName(This) ) 

#define IMacro3DDefinition_GetUserLibraryCommand(This)	\
    ( (This)->lpVtbl -> GetUserLibraryCommand(This) ) 

#define IMacro3DDefinition_SetObject(This,index,obj)	\
    ( (This)->lpVtbl -> SetObject(This,index,obj) ) 

#define IMacro3DDefinition_GetObject(This,index)	\
    ( (This)->lpVtbl -> GetObject(This,index) ) 

#define IMacro3DDefinition_GetCountObj(This)	\
    ( (This)->lpVtbl -> GetCountObj(This) ) 

#define IMacro3DDefinition_ClearAllObj(This)	\
    ( (This)->lpVtbl -> ClearAllObj(This) ) 

#define IMacro3DDefinition_GetDoubleClickEditOff(This)	\
    ( (This)->lpVtbl -> GetDoubleClickEditOff(This) ) 

#define IMacro3DDefinition_SetDoubleClickEditOff(This,val)	\
    ( (This)->lpVtbl -> SetDoubleClickEditOff(This,val) ) 

#define IMacro3DDefinition_GetPropertyObjectEditable(This)	\
    ( (This)->lpVtbl -> GetPropertyObjectEditable(This) ) 

#define IMacro3DDefinition_SetPropertyObjectEditable(This,PVal)	\
    ( (This)->lpVtbl -> SetPropertyObjectEditable(This,PVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMacro3DDefinition_INTERFACE_DEFINED__ */


#ifndef __IAxisConefaceDefinition_INTERFACE_DEFINED__
#define __IAxisConefaceDefinition_INTERFACE_DEFINED__

/* interface IAxisConefaceDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAxisConefaceDefinition,0x7AA0E540,0x0338,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0338-11D4-A30E-00C026EE094F")
    IAxisConefaceDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetFace( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFace( 
            LPENTITY val) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAxisConefaceDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAxisConefaceDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAxisConefaceDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAxisConefaceDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetFace )( 
            IAxisConefaceDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFace )( 
            IAxisConefaceDefinition * This,
            LPENTITY val);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IAxisConefaceDefinition * This);
        
        END_INTERFACE
    } IAxisConefaceDefinitionVtbl;

    interface IAxisConefaceDefinition
    {
        CONST_VTBL struct IAxisConefaceDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAxisConefaceDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAxisConefaceDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAxisConefaceDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAxisConefaceDefinition_GetFace(This)	\
    ( (This)->lpVtbl -> GetFace(This) ) 

#define IAxisConefaceDefinition_SetFace(This,val)	\
    ( (This)->lpVtbl -> SetFace(This,val) ) 

#define IAxisConefaceDefinition_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAxisConefaceDefinition_INTERFACE_DEFINED__ */


#ifndef __IUnionComponentsDefinition_INTERFACE_DEFINED__
#define __IUnionComponentsDefinition_INTERFACE_DEFINED__

/* interface IUnionComponentsDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IUnionComponentsDefinition,0x7C641671,0xF791,0x47ac,0xB8,0xAE,0x38,0x24,0x28,0xD8,0xA0,0x1D);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7C641671-F791-47ac-B8AE-382428D8A01D")
    IUnionComponentsDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartArray( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnionComponentsDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUnionComponentsDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUnionComponentsDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUnionComponentsDefinition * This);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartArray )( 
            IUnionComponentsDefinition * This);
        
        END_INTERFACE
    } IUnionComponentsDefinitionVtbl;

    interface IUnionComponentsDefinition
    {
        CONST_VTBL struct IUnionComponentsDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnionComponentsDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnionComponentsDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnionComponentsDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnionComponentsDefinition_PartArray(This)	\
    ( (This)->lpVtbl -> PartArray(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnionComponentsDefinition_INTERFACE_DEFINED__ */


#ifndef __IMoldCavityDefinition_INTERFACE_DEFINED__
#define __IMoldCavityDefinition_INTERFACE_DEFINED__

/* interface IMoldCavityDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMoldCavityDefinition,0x1DD4FF64,0x72EF,0x408a,0xA9,0xC6,0x00,0x09,0xB0,0x1F,0xFC,0x94);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1DD4FF64-72EF-408a-A9C6-0009B01FFC94")
    IMoldCavityDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetScale( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetScale( 
            double val) = 0;
        
        virtual /* [helpstring] */ LPPARTCOLLECTION STDMETHODCALLTYPE PartArray( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetScaleCentre( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetScaleCentre( 
            LPENTITY vert) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMoldCavityDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMoldCavityDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMoldCavityDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMoldCavityDefinition * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetScale )( 
            IMoldCavityDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetScale )( 
            IMoldCavityDefinition * This,
            double val);
        
        /* [helpstring] */ LPPARTCOLLECTION ( STDMETHODCALLTYPE *PartArray )( 
            IMoldCavityDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetScaleCentre )( 
            IMoldCavityDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetScaleCentre )( 
            IMoldCavityDefinition * This,
            LPENTITY vert);
        
        END_INTERFACE
    } IMoldCavityDefinitionVtbl;

    interface IMoldCavityDefinition
    {
        CONST_VTBL struct IMoldCavityDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMoldCavityDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMoldCavityDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMoldCavityDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMoldCavityDefinition_GetScale(This)	\
    ( (This)->lpVtbl -> GetScale(This) ) 

#define IMoldCavityDefinition_SetScale(This,val)	\
    ( (This)->lpVtbl -> SetScale(This,val) ) 

#define IMoldCavityDefinition_PartArray(This)	\
    ( (This)->lpVtbl -> PartArray(This) ) 

#define IMoldCavityDefinition_GetScaleCentre(This)	\
    ( (This)->lpVtbl -> GetScaleCentre(This) ) 

#define IMoldCavityDefinition_SetScaleCentre(This,vert)	\
    ( (This)->lpVtbl -> SetScaleCentre(This,vert) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMoldCavityDefinition_INTERFACE_DEFINED__ */


#ifndef __IPlaneMiddleDefinition_INTERFACE_DEFINED__
#define __IPlaneMiddleDefinition_INTERFACE_DEFINED__

/* interface IPlaneMiddleDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneMiddleDefinition,0xCACF8C5A,0x9969,0x44a1,0xA3,0x6D,0x4C,0xF5,0x16,0x20,0x09,0x20);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CACF8C5A-9969-44a1-A36D-4CF516200920")
    IPlaneMiddleDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetObject( 
            long Number) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObject( 
            long Number,
            LPENTITY Val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPosition( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPosition( 
            BOOL Val) = 0;
        
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneMiddleDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneMiddleDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneMiddleDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneMiddleDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetObject )( 
            IPlaneMiddleDefinition * This,
            long Number);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObject )( 
            IPlaneMiddleDefinition * This,
            long Number,
            LPENTITY Val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPosition )( 
            IPlaneMiddleDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPosition )( 
            IPlaneMiddleDefinition * This,
            BOOL Val);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IPlaneMiddleDefinition * This);
        
        END_INTERFACE
    } IPlaneMiddleDefinitionVtbl;

    interface IPlaneMiddleDefinition
    {
        CONST_VTBL struct IPlaneMiddleDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneMiddleDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneMiddleDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneMiddleDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneMiddleDefinition_GetObject(This,Number)	\
    ( (This)->lpVtbl -> GetObject(This,Number) ) 

#define IPlaneMiddleDefinition_SetObject(This,Number,Val)	\
    ( (This)->lpVtbl -> SetObject(This,Number,Val) ) 

#define IPlaneMiddleDefinition_GetPosition(This)	\
    ( (This)->lpVtbl -> GetPosition(This) ) 

#define IPlaneMiddleDefinition_SetPosition(This,Val)	\
    ( (This)->lpVtbl -> SetPosition(This,Val) ) 

#define IPlaneMiddleDefinition_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneMiddleDefinition_INTERFACE_DEFINED__ */


#ifndef __IControlPointDefinition_INTERFACE_DEFINED__
#define __IControlPointDefinition_INTERFACE_DEFINED__

/* interface IControlPointDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IControlPointDefinition,0xBF0F6CEC,0xF517,0x4094,0xB9,0x13,0x6B,0x0A,0x28,0xE7,0xCA,0x83);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF0F6CEC-F517-4094-B913-6B0A28E7CA83")
    IControlPointDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetVertex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetVertex( 
            LPENTITY Val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            double *X,
            double *Y,
            double *Z) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IControlPointDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IControlPointDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IControlPointDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IControlPointDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetVertex )( 
            IControlPointDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetVertex )( 
            IControlPointDefinition * This,
            LPENTITY Val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            IControlPointDefinition * This,
            double *X,
            double *Y,
            double *Z);
        
        END_INTERFACE
    } IControlPointDefinitionVtbl;

    interface IControlPointDefinition
    {
        CONST_VTBL struct IControlPointDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IControlPointDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IControlPointDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IControlPointDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IControlPointDefinition_GetVertex(This)	\
    ( (This)->lpVtbl -> GetVertex(This) ) 

#define IControlPointDefinition_SetVertex(This,Val)	\
    ( (This)->lpVtbl -> SetVertex(This,Val) ) 

#define IControlPointDefinition_GetPoint(This,X,Y,Z)	\
    ( (This)->lpVtbl -> GetPoint(This,X,Y,Z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IControlPointDefinition_INTERFACE_DEFINED__ */


#ifndef __IConjunctivePointDefinition_INTERFACE_DEFINED__
#define __IConjunctivePointDefinition_INTERFACE_DEFINED__

/* interface IConjunctivePointDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IConjunctivePointDefinition,0xF53A02E1,0xC560,0x4de3,0x9E,0x19,0x0D,0x63,0x4F,0xBE,0x49,0xA5);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F53A02E1-C560-4de3-9E19-0D634FBE49A5")
    IConjunctivePointDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetVertex( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetVertex( 
            LPENTITY Val) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetEdge( 
            LPENTITY Val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDirection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetDirection( 
            BOOL Val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            double *X,
            double *Y,
            double *Z) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConjunctivePointDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConjunctivePointDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConjunctivePointDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConjunctivePointDefinition * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetVertex )( 
            IConjunctivePointDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetVertex )( 
            IConjunctivePointDefinition * This,
            LPENTITY Val);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetEdge )( 
            IConjunctivePointDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetEdge )( 
            IConjunctivePointDefinition * This,
            LPENTITY Val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDirection )( 
            IConjunctivePointDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetDirection )( 
            IConjunctivePointDefinition * This,
            BOOL Val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            IConjunctivePointDefinition * This,
            double *X,
            double *Y,
            double *Z);
        
        END_INTERFACE
    } IConjunctivePointDefinitionVtbl;

    interface IConjunctivePointDefinition
    {
        CONST_VTBL struct IConjunctivePointDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConjunctivePointDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConjunctivePointDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConjunctivePointDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConjunctivePointDefinition_GetVertex(This)	\
    ( (This)->lpVtbl -> GetVertex(This) ) 

#define IConjunctivePointDefinition_SetVertex(This,Val)	\
    ( (This)->lpVtbl -> SetVertex(This,Val) ) 

#define IConjunctivePointDefinition_GetEdge(This)	\
    ( (This)->lpVtbl -> GetEdge(This) ) 

#define IConjunctivePointDefinition_SetEdge(This,Val)	\
    ( (This)->lpVtbl -> SetEdge(This,Val) ) 

#define IConjunctivePointDefinition_GetDirection(This)	\
    ( (This)->lpVtbl -> GetDirection(This) ) 

#define IConjunctivePointDefinition_SetDirection(This,Val)	\
    ( (This)->lpVtbl -> SetDirection(This,Val) ) 

#define IConjunctivePointDefinition_GetPoint(This,X,Y,Z)	\
    ( (This)->lpVtbl -> GetPoint(This,X,Y,Z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConjunctivePointDefinition_INTERFACE_DEFINED__ */


#ifndef __IAggregateDefinition_INTERFACE_DEFINED__
#define __IAggregateDefinition_INTERFACE_DEFINED__

/* interface IAggregateDefinition */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAggregateDefinition,0x2CF40627,0x9D0A,0x4588,0xA3,0x99,0x45,0xF0,0xFF,0x96,0x16,0x5F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2CF40627-9D0A-4588-A399-45F0FF96165F")
    IAggregateDefinition : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBooleanType( 
            long val) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetBooleanType( void) = 0;
        
        virtual /* [helpstring] */ LPBODYCOLLECTION STDMETHODCALLTYPE BodyCollection( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAggregateDefinitionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAggregateDefinition * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAggregateDefinition * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAggregateDefinition * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBooleanType )( 
            IAggregateDefinition * This,
            long val);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetBooleanType )( 
            IAggregateDefinition * This);
        
        /* [helpstring] */ LPBODYCOLLECTION ( STDMETHODCALLTYPE *BodyCollection )( 
            IAggregateDefinition * This);
        
        END_INTERFACE
    } IAggregateDefinitionVtbl;

    interface IAggregateDefinition
    {
        CONST_VTBL struct IAggregateDefinitionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAggregateDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAggregateDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAggregateDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAggregateDefinition_SetBooleanType(This,val)	\
    ( (This)->lpVtbl -> SetBooleanType(This,val) ) 

#define IAggregateDefinition_GetBooleanType(This)	\
    ( (This)->lpVtbl -> GetBooleanType(This) ) 

#define IAggregateDefinition_BodyCollection(This)	\
    ( (This)->lpVtbl -> BodyCollection(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAggregateDefinition_INTERFACE_DEFINED__ */


#ifndef __IPolygonalLineVertexParam_INTERFACE_DEFINED__
#define __IPolygonalLineVertexParam_INTERFACE_DEFINED__

/* interface IPolygonalLineVertexParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPolygonalLineVertexParam,0xD2D61E71,0x151A,0x4359,0xA0,0xBE,0xDE,0xA5,0xA7,0x6F,0x24,0x92);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2D61E71-151A-4359-A0BE-DEA5A76F2492")
    IPolygonalLineVertexParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetBuildingType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBuildingType( 
            int type) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetParamVertex( 
            double *x,
            double *y,
            double *z,
            double *radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetParamVertex( 
            double x,
            double y,
            double z,
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetParamByVertex( 
            LPENTITY vertex,
            double radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetParamByDistance( 
            double *distance,
            double *radius) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetParamByDistance( 
            double distance,
            double radius) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetBuildingObject( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBuildingObject( 
            LPENTITY object) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetAssociation( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAssociation( 
            LPENTITY vertex) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetVertex( void) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetIndex( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPolygonalLineVertexParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPolygonalLineVertexParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPolygonalLineVertexParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPolygonalLineVertexParam * This);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetBuildingType )( 
            IPolygonalLineVertexParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBuildingType )( 
            IPolygonalLineVertexParam * This,
            int type);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetParamVertex )( 
            IPolygonalLineVertexParam * This,
            double *x,
            double *y,
            double *z,
            double *radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetParamVertex )( 
            IPolygonalLineVertexParam * This,
            double x,
            double y,
            double z,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetParamByVertex )( 
            IPolygonalLineVertexParam * This,
            LPENTITY vertex,
            double radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetParamByDistance )( 
            IPolygonalLineVertexParam * This,
            double *distance,
            double *radius);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetParamByDistance )( 
            IPolygonalLineVertexParam * This,
            double distance,
            double radius);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetBuildingObject )( 
            IPolygonalLineVertexParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBuildingObject )( 
            IPolygonalLineVertexParam * This,
            LPENTITY object);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetAssociation )( 
            IPolygonalLineVertexParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAssociation )( 
            IPolygonalLineVertexParam * This,
            LPENTITY vertex);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetVertex )( 
            IPolygonalLineVertexParam * This);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetIndex )( 
            IPolygonalLineVertexParam * This);
        
        END_INTERFACE
    } IPolygonalLineVertexParamVtbl;

    interface IPolygonalLineVertexParam
    {
        CONST_VTBL struct IPolygonalLineVertexParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPolygonalLineVertexParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPolygonalLineVertexParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPolygonalLineVertexParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPolygonalLineVertexParam_GetBuildingType(This)	\
    ( (This)->lpVtbl -> GetBuildingType(This) ) 

#define IPolygonalLineVertexParam_SetBuildingType(This,type)	\
    ( (This)->lpVtbl -> SetBuildingType(This,type) ) 

#define IPolygonalLineVertexParam_GetParamVertex(This,x,y,z,radius)	\
    ( (This)->lpVtbl -> GetParamVertex(This,x,y,z,radius) ) 

#define IPolygonalLineVertexParam_SetParamVertex(This,x,y,z,radius)	\
    ( (This)->lpVtbl -> SetParamVertex(This,x,y,z,radius) ) 

#define IPolygonalLineVertexParam_SetParamByVertex(This,vertex,radius)	\
    ( (This)->lpVtbl -> SetParamByVertex(This,vertex,radius) ) 

#define IPolygonalLineVertexParam_GetParamByDistance(This,distance,radius)	\
    ( (This)->lpVtbl -> GetParamByDistance(This,distance,radius) ) 

#define IPolygonalLineVertexParam_SetParamByDistance(This,distance,radius)	\
    ( (This)->lpVtbl -> SetParamByDistance(This,distance,radius) ) 

#define IPolygonalLineVertexParam_GetBuildingObject(This)	\
    ( (This)->lpVtbl -> GetBuildingObject(This) ) 

#define IPolygonalLineVertexParam_SetBuildingObject(This,object)	\
    ( (This)->lpVtbl -> SetBuildingObject(This,object) ) 

#define IPolygonalLineVertexParam_GetAssociation(This)	\
    ( (This)->lpVtbl -> GetAssociation(This) ) 

#define IPolygonalLineVertexParam_SetAssociation(This,vertex)	\
    ( (This)->lpVtbl -> SetAssociation(This,vertex) ) 

#define IPolygonalLineVertexParam_GetVertex(This)	\
    ( (This)->lpVtbl -> GetVertex(This) ) 

#define IPolygonalLineVertexParam_GetIndex(This)	\
    ( (This)->lpVtbl -> GetIndex(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPolygonalLineVertexParam_INTERFACE_DEFINED__ */


#ifndef __IDefaultObject_INTERFACE_DEFINED__
#define __IDefaultObject_INTERFACE_DEFINED__

/* interface IDefaultObject */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDefaultObject,0x8E54CAEA,0xD1FC,0x4ff4,0xA0,0xE5,0x4F,0x5A,0x9F,0x5C,0xDC,0x6B);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E54CAEA-D1FC-4ff4-A0E5-4F5A9F5CDC6B")
    IDefaultObject : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPSURFACE STDMETHODCALLTYPE GetSurface( void) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDefaultObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDefaultObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDefaultObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDefaultObject * This);
        
        /* [helpstring] */ LPSURFACE ( STDMETHODCALLTYPE *GetSurface )( 
            IDefaultObject * This);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IDefaultObject * This);
        
        END_INTERFACE
    } IDefaultObjectVtbl;

    interface IDefaultObject
    {
        CONST_VTBL struct IDefaultObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDefaultObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDefaultObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDefaultObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDefaultObject_GetSurface(This)	\
    ( (This)->lpVtbl -> GetSurface(This) ) 

#define IDefaultObject_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDefaultObject_INTERFACE_DEFINED__ */


#ifndef __IBodyParts_INTERFACE_DEFINED__
#define __IBodyParts_INTERFACE_DEFINED__

/* interface IBodyParts */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBodyParts,0xDFC4E0F1,0x5270,0x40f3,0x8A,0x4F,0xBE,0xA7,0x5A,0xB5,0x38,0x3C);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFC4E0F1-5270-40f3-8A4F-BEA75AB5383C")
    IBodyParts : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE UserBodyPartsChoice( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAllSelected( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetAllSelected( 
            BOOL Val) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetPartSelected( 
            long Index,
            BOOL Select) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPartSelected( 
            long Index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetGreatPartsSelected( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBodyPartsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBodyParts * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBodyParts * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBodyParts * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *UserBodyPartsChoice )( 
            IBodyParts * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IBodyParts * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAllSelected )( 
            IBodyParts * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetAllSelected )( 
            IBodyParts * This,
            BOOL Val);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetPartSelected )( 
            IBodyParts * This,
            long Index,
            BOOL Select);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPartSelected )( 
            IBodyParts * This,
            long Index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetGreatPartsSelected )( 
            IBodyParts * This);
        
        END_INTERFACE
    } IBodyPartsVtbl;

    interface IBodyParts
    {
        CONST_VTBL struct IBodyPartsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBodyParts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBodyParts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBodyParts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBodyParts_UserBodyPartsChoice(This)	\
    ( (This)->lpVtbl -> UserBodyPartsChoice(This) ) 

#define IBodyParts_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IBodyParts_GetAllSelected(This)	\
    ( (This)->lpVtbl -> GetAllSelected(This) ) 

#define IBodyParts_SetAllSelected(This,Val)	\
    ( (This)->lpVtbl -> SetAllSelected(This,Val) ) 

#define IBodyParts_SetPartSelected(This,Index,Select)	\
    ( (This)->lpVtbl -> SetPartSelected(This,Index,Select) ) 

#define IBodyParts_GetPartSelected(This,Index)	\
    ( (This)->lpVtbl -> GetPartSelected(This,Index) ) 

#define IBodyParts_SetGreatPartsSelected(This)	\
    ( (This)->lpVtbl -> SetGreatPartsSelected(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBodyParts_INTERFACE_DEFINED__ */


#ifndef __IEmbodiment3D_INTERFACE_DEFINED__
#define __IEmbodiment3D_INTERFACE_DEFINED__

/* interface IEmbodiment3D */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEmbodiment3D,0x4C69F05F,0x981C,0x4183,0x8D,0xC6,0xD2,0xD3,0x75,0xD2,0x95,0x81);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C69F05F-981C-4183-8DC6-D2D375D29581")
    IEmbodiment3D : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IEmbodiment3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEmbodiment3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEmbodiment3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEmbodiment3D * This);
        
        END_INTERFACE
    } IEmbodiment3DVtbl;

    interface IEmbodiment3D
    {
        CONST_VTBL struct IEmbodiment3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEmbodiment3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEmbodiment3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEmbodiment3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEmbodiment3D_INTERFACE_DEFINED__ */


#ifndef __IMassInertiaParam_INTERFACE_DEFINED__
#define __IMassInertiaParam_INTERFACE_DEFINED__

/* interface IMassInertiaParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMassInertiaParam,0x74e97440,0x88a5,0x4d29,0x95,0x43,0x59,0xd7,0x75,0xbc,0x9a,0x13);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74e97440-88a5-4d29-9543-59d775bc9a13")
    IMassInertiaParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetXc( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetYc( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetZc( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLx( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLy( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLz( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLxy( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLxz( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLyz( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJx( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJy( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJz( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJxy( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJxz( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJyz( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJx0( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJy0( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetJz0( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAxisX( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAxisY( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetAxisZ( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetR( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetM( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetV( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetF( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBitVectorValue( 
            unsigned int val,
            BOOL setState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMassInertiaParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMassInertiaParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMassInertiaParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetXc )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetYc )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetZc )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLx )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLy )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLz )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLxy )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLxz )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLyz )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJx )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJy )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJz )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJxy )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJxz )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJyz )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJx0 )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJy0 )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetJz0 )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAxisX )( 
            IMassInertiaParam * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAxisY )( 
            IMassInertiaParam * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetAxisZ )( 
            IMassInertiaParam * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetR )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetM )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetV )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetF )( 
            IMassInertiaParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBitVectorValue )( 
            IMassInertiaParam * This,
            unsigned int val,
            BOOL setState);
        
        END_INTERFACE
    } IMassInertiaParamVtbl;

    interface IMassInertiaParam
    {
        CONST_VTBL struct IMassInertiaParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMassInertiaParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMassInertiaParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMassInertiaParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMassInertiaParam_GetXc(This)	\
    ( (This)->lpVtbl -> GetXc(This) ) 

#define IMassInertiaParam_GetYc(This)	\
    ( (This)->lpVtbl -> GetYc(This) ) 

#define IMassInertiaParam_GetZc(This)	\
    ( (This)->lpVtbl -> GetZc(This) ) 

#define IMassInertiaParam_GetLx(This)	\
    ( (This)->lpVtbl -> GetLx(This) ) 

#define IMassInertiaParam_GetLy(This)	\
    ( (This)->lpVtbl -> GetLy(This) ) 

#define IMassInertiaParam_GetLz(This)	\
    ( (This)->lpVtbl -> GetLz(This) ) 

#define IMassInertiaParam_GetLxy(This)	\
    ( (This)->lpVtbl -> GetLxy(This) ) 

#define IMassInertiaParam_GetLxz(This)	\
    ( (This)->lpVtbl -> GetLxz(This) ) 

#define IMassInertiaParam_GetLyz(This)	\
    ( (This)->lpVtbl -> GetLyz(This) ) 

#define IMassInertiaParam_GetJx(This)	\
    ( (This)->lpVtbl -> GetJx(This) ) 

#define IMassInertiaParam_GetJy(This)	\
    ( (This)->lpVtbl -> GetJy(This) ) 

#define IMassInertiaParam_GetJz(This)	\
    ( (This)->lpVtbl -> GetJz(This) ) 

#define IMassInertiaParam_GetJxy(This)	\
    ( (This)->lpVtbl -> GetJxy(This) ) 

#define IMassInertiaParam_GetJxz(This)	\
    ( (This)->lpVtbl -> GetJxz(This) ) 

#define IMassInertiaParam_GetJyz(This)	\
    ( (This)->lpVtbl -> GetJyz(This) ) 

#define IMassInertiaParam_GetJx0(This)	\
    ( (This)->lpVtbl -> GetJx0(This) ) 

#define IMassInertiaParam_GetJy0(This)	\
    ( (This)->lpVtbl -> GetJy0(This) ) 

#define IMassInertiaParam_GetJz0(This)	\
    ( (This)->lpVtbl -> GetJz0(This) ) 

#define IMassInertiaParam_GetAxisX(This,x,y,z)	\
    ( (This)->lpVtbl -> GetAxisX(This,x,y,z) ) 

#define IMassInertiaParam_GetAxisY(This,x,y,z)	\
    ( (This)->lpVtbl -> GetAxisY(This,x,y,z) ) 

#define IMassInertiaParam_GetAxisZ(This,x,y,z)	\
    ( (This)->lpVtbl -> GetAxisZ(This,x,y,z) ) 

#define IMassInertiaParam_GetR(This)	\
    ( (This)->lpVtbl -> GetR(This) ) 

#define IMassInertiaParam_GetM(This)	\
    ( (This)->lpVtbl -> GetM(This) ) 

#define IMassInertiaParam_GetV(This)	\
    ( (This)->lpVtbl -> GetV(This) ) 

#define IMassInertiaParam_GetF(This)	\
    ( (This)->lpVtbl -> GetF(This) ) 

#define IMassInertiaParam_SetBitVectorValue(This,val,setState)	\
    ( (This)->lpVtbl -> SetBitVectorValue(This,val,setState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMassInertiaParam_INTERFACE_DEFINED__ */


#ifndef __IMeasurer_INTERFACE_DEFINED__
#define __IMeasurer_INTERFACE_DEFINED__

/* interface IMeasurer */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMeasurer,0xac171655,0xed3f,0x4f7a,0xa6,0x25,0x44,0x08,0x39,0x41,0xaf,0x85);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ac171655-ed3f-4f7a-a625-44083941af85")
    IMeasurer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObject1( 
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetObject2( 
            LPENTITY obj) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetObject1( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetObject2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetUnit( 
            unsigned long bitVector) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetUnit( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExtendObject1( 
            BOOL ext) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetExtendObject2( 
            BOOL ext) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetExtendObject1( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetExtendObject2( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Calc( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsAngleValid( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetDistance( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint1( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint2( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetMaxDistance( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetNormalDistance( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMaxPoint1( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMaxPoint2( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormalPoint1( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormalPoint2( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetMeasureResult( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetMinDistance( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMinPoint1( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMinPoint2( 
            double *x,
            double *y,
            double *z) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMeasurerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMeasurer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMeasurer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObject1 )( 
            IMeasurer * This,
            LPENTITY obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetObject2 )( 
            IMeasurer * This,
            LPENTITY obj);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetObject1 )( 
            IMeasurer * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetObject2 )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetUnit )( 
            IMeasurer * This,
            unsigned long bitVector);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetUnit )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExtendObject1 )( 
            IMeasurer * This,
            BOOL ext);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetExtendObject2 )( 
            IMeasurer * This,
            BOOL ext);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetExtendObject1 )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetExtendObject2 )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Calc )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsAngleValid )( 
            IMeasurer * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IMeasurer * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetDistance )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint1 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint2 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetMaxDistance )( 
            IMeasurer * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetNormalDistance )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMaxPoint1 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMaxPoint2 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormalPoint1 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormalPoint2 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetMeasureResult )( 
            IMeasurer * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetMinDistance )( 
            IMeasurer * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMinPoint1 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMinPoint2 )( 
            IMeasurer * This,
            double *x,
            double *y,
            double *z);
        
        END_INTERFACE
    } IMeasurerVtbl;

    interface IMeasurer
    {
        CONST_VTBL struct IMeasurerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMeasurer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMeasurer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMeasurer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMeasurer_SetObject1(This,obj)	\
    ( (This)->lpVtbl -> SetObject1(This,obj) ) 

#define IMeasurer_SetObject2(This,obj)	\
    ( (This)->lpVtbl -> SetObject2(This,obj) ) 

#define IMeasurer_GetObject1(This)	\
    ( (This)->lpVtbl -> GetObject1(This) ) 

#define IMeasurer_GetObject2(This)	\
    ( (This)->lpVtbl -> GetObject2(This) ) 

#define IMeasurer_SetUnit(This,bitVector)	\
    ( (This)->lpVtbl -> SetUnit(This,bitVector) ) 

#define IMeasurer_GetUnit(This)	\
    ( (This)->lpVtbl -> GetUnit(This) ) 

#define IMeasurer_SetExtendObject1(This,ext)	\
    ( (This)->lpVtbl -> SetExtendObject1(This,ext) ) 

#define IMeasurer_SetExtendObject2(This,ext)	\
    ( (This)->lpVtbl -> SetExtendObject2(This,ext) ) 

#define IMeasurer_GetExtendObject1(This)	\
    ( (This)->lpVtbl -> GetExtendObject1(This) ) 

#define IMeasurer_GetExtendObject2(This)	\
    ( (This)->lpVtbl -> GetExtendObject2(This) ) 

#define IMeasurer_Calc(This)	\
    ( (This)->lpVtbl -> Calc(This) ) 

#define IMeasurer_IsAngleValid(This)	\
    ( (This)->lpVtbl -> IsAngleValid(This) ) 

#define IMeasurer_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IMeasurer_GetDistance(This)	\
    ( (This)->lpVtbl -> GetDistance(This) ) 

#define IMeasurer_GetPoint1(This,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint1(This,x,y,z) ) 

#define IMeasurer_GetPoint2(This,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint2(This,x,y,z) ) 

#define IMeasurer_GetMaxDistance(This)	\
    ( (This)->lpVtbl -> GetMaxDistance(This) ) 

#define IMeasurer_GetNormalDistance(This)	\
    ( (This)->lpVtbl -> GetNormalDistance(This) ) 

#define IMeasurer_GetMaxPoint1(This,x,y,z)	\
    ( (This)->lpVtbl -> GetMaxPoint1(This,x,y,z) ) 

#define IMeasurer_GetMaxPoint2(This,x,y,z)	\
    ( (This)->lpVtbl -> GetMaxPoint2(This,x,y,z) ) 

#define IMeasurer_GetNormalPoint1(This,x,y,z)	\
    ( (This)->lpVtbl -> GetNormalPoint1(This,x,y,z) ) 

#define IMeasurer_GetNormalPoint2(This,x,y,z)	\
    ( (This)->lpVtbl -> GetNormalPoint2(This,x,y,z) ) 

#define IMeasurer_GetMeasureResult(This)	\
    ( (This)->lpVtbl -> GetMeasureResult(This) ) 

#define IMeasurer_GetMinDistance(This)	\
    ( (This)->lpVtbl -> GetMinDistance(This) ) 

#define IMeasurer_GetMinPoint1(This,x,y,z)	\
    ( (This)->lpVtbl -> GetMinPoint1(This,x,y,z) ) 

#define IMeasurer_GetMinPoint2(This,x,y,z)	\
    ( (This)->lpVtbl -> GetMinPoint2(This,x,y,z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMeasurer_INTERFACE_DEFINED__ */


#ifndef __IBody_INTERFACE_DEFINED__
#define __IBody_INTERFACE_DEFINED__

/* interface IBody */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBody,0xbe70eee5,0x1767,0x483e,0x9d,0x18,0x79,0xbc,0xec,0x5a,0xb8,0x37);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("be70eee5-1767-483e-9d18-79bcec5ab837")
    IBody : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGabarit( 
            double *x1,
            double *y1,
            double *z1,
            double *x2,
            double *y2,
            double *z2) = 0;
        
        virtual /* [helpstring] */ LPFACECOLLECTION STDMETHODCALLTYPE FaceCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSolid( void) = 0;
        
        virtual /* [helpstring] */ LPMASSINERTIAPARAM STDMETHODCALLTYPE CalcMassInertiaProperties( 
            unsigned int bitVector) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE CurveIntersection( 
            LPCURVE3D curve,
            LPFACECOLLECTION faces,
            LPCOORDINATE3DCOLLECTION points) = 0;
        
        virtual /* [helpstring] */ LPINTERSECTIONRESULT STDMETHODCALLTYPE CheckIntersectionWithBody( 
            LPBODY otherBody,
            BOOL checkTangent) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMultiBodyParts( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetFeature( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetIntersectionFacesWithBody( 
            /* [in] */ LPBODY otherBody,
            /* [out][in] */ VARIANT *intersectionFaces1,
            /* [out][in] */ VARIANT *intersectionFaces2,
            /* [out][in] */ VARIANT *connectedFaces1,
            /* [out][in] */ VARIANT *connectedFaces2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBodyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBody * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBody * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBody * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGabarit )( 
            IBody * This,
            double *x1,
            double *y1,
            double *z1,
            double *x2,
            double *y2,
            double *z2);
        
        /* [helpstring] */ LPFACECOLLECTION ( STDMETHODCALLTYPE *FaceCollection )( 
            IBody * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSolid )( 
            IBody * This);
        
        /* [helpstring] */ LPMASSINERTIAPARAM ( STDMETHODCALLTYPE *CalcMassInertiaProperties )( 
            IBody * This,
            unsigned int bitVector);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *CurveIntersection )( 
            IBody * This,
            LPCURVE3D curve,
            LPFACECOLLECTION faces,
            LPCOORDINATE3DCOLLECTION points);
        
        /* [helpstring] */ LPINTERSECTIONRESULT ( STDMETHODCALLTYPE *CheckIntersectionWithBody )( 
            IBody * This,
            LPBODY otherBody,
            BOOL checkTangent);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMultiBodyParts )( 
            IBody * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetFeature )( 
            IBody * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetIntersectionFacesWithBody )( 
            IBody * This,
            /* [in] */ LPBODY otherBody,
            /* [out][in] */ VARIANT *intersectionFaces1,
            /* [out][in] */ VARIANT *intersectionFaces2,
            /* [out][in] */ VARIANT *connectedFaces1,
            /* [out][in] */ VARIANT *connectedFaces2);
        
        END_INTERFACE
    } IBodyVtbl;

    interface IBody
    {
        CONST_VTBL struct IBodyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBody_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBody_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBody_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBody_GetGabarit(This,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> GetGabarit(This,x1,y1,z1,x2,y2,z2) ) 

#define IBody_FaceCollection(This)	\
    ( (This)->lpVtbl -> FaceCollection(This) ) 

#define IBody_IsSolid(This)	\
    ( (This)->lpVtbl -> IsSolid(This) ) 

#define IBody_CalcMassInertiaProperties(This,bitVector)	\
    ( (This)->lpVtbl -> CalcMassInertiaProperties(This,bitVector) ) 

#define IBody_CurveIntersection(This,curve,faces,points)	\
    ( (This)->lpVtbl -> CurveIntersection(This,curve,faces,points) ) 

#define IBody_CheckIntersectionWithBody(This,otherBody,checkTangent)	\
    ( (This)->lpVtbl -> CheckIntersectionWithBody(This,otherBody,checkTangent) ) 

#define IBody_GetMultiBodyParts(This)	\
    ( (This)->lpVtbl -> GetMultiBodyParts(This) ) 

#define IBody_GetFeature(This)	\
    ( (This)->lpVtbl -> GetFeature(This) ) 

#define IBody_GetIntersectionFacesWithBody(This,otherBody,intersectionFaces1,intersectionFaces2,connectedFaces1,connectedFaces2)	\
    ( (This)->lpVtbl -> GetIntersectionFacesWithBody(This,otherBody,intersectionFaces1,intersectionFaces2,connectedFaces1,connectedFaces2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBody_INTERFACE_DEFINED__ */


#ifndef __ISurface_INTERFACE_DEFINED__
#define __ISurface_INTERFACE_DEFINED__

/* interface ISurface */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISurface,0x081c7f2d,0xd5bc,0x40a6,0x92,0xfe,0xc1,0x6b,0x67,0xd1,0x0b,0x75);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("081c7f2d-d5bc-40a6-92fe-c16b67d10b75")
    ISurface : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGabarit( 
            double *x1,
            double *y1,
            double *z1,
            double *x2,
            double *y2,
            double *z2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormal( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTangentVectorU( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTangentVectorV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeU( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeUU( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeVV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeUV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeUUU( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeVVV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeUVV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeUUV( 
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetParamUMin( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetParamUMax( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetParamVMin( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetParamVMax( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsClosedU( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsClosedV( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPlane( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCone( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCylinder( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsTorus( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSphere( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsNurbsSurface( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsRevolved( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSwept( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetSurfaceParam( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetArea( 
            unsigned long bitVector) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE NearPointProjection( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *u,
            /* [out] */ double *v,
            /* [in] */ BOOL ext) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE CurveIntersection( 
            LPCURVE3D curve,
            LPCOORDINATE3DCOLLECTION pointsArr,
            BOOL extSurf,
            BOOL extCurve) = 0;
        
        virtual /* [helpstring] */ LPNURBSSURFACEPARAM STDMETHODCALLTYPE GetNurbsSurfaceParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetBoundaryUVNurbs( 
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [out] */ long *degree,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knots,
            /* [out] */ double *tMin,
            /* [out] */ double *tMax) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetBoundaryCount( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetEdgesCount( 
            long loopIndex) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAreaEx( 
            unsigned long bitVector,
            double angleTolerance) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISurfaceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISurface * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISurface * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGabarit )( 
            ISurface * This,
            double *x1,
            double *y1,
            double *z1,
            double *x2,
            double *y2,
            double *z2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormal )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTangentVectorU )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTangentVectorV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeU )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeUU )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeVV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeUV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeUUU )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeVVV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeUVV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeUUV )( 
            ISurface * This,
            double paramU,
            double paramV,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetParamUMin )( 
            ISurface * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetParamUMax )( 
            ISurface * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetParamVMin )( 
            ISurface * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetParamVMax )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsClosedU )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsClosedV )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPlane )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCone )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCylinder )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsTorus )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSphere )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsNurbsSurface )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsRevolved )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSwept )( 
            ISurface * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetSurfaceParam )( 
            ISurface * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetArea )( 
            ISurface * This,
            unsigned long bitVector);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *NearPointProjection )( 
            ISurface * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *u,
            /* [out] */ double *v,
            /* [in] */ BOOL ext);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *CurveIntersection )( 
            ISurface * This,
            LPCURVE3D curve,
            LPCOORDINATE3DCOLLECTION pointsArr,
            BOOL extSurf,
            BOOL extCurve);
        
        /* [helpstring] */ LPNURBSSURFACEPARAM ( STDMETHODCALLTYPE *GetNurbsSurfaceParam )( 
            ISurface * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetBoundaryUVNurbs )( 
            ISurface * This,
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [out] */ long *degree,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knots,
            /* [out] */ double *tMin,
            /* [out] */ double *tMax);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetBoundaryCount )( 
            ISurface * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetEdgesCount )( 
            ISurface * This,
            long loopIndex);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAreaEx )( 
            ISurface * This,
            unsigned long bitVector,
            double angleTolerance);
        
        END_INTERFACE
    } ISurfaceVtbl;

    interface ISurface
    {
        CONST_VTBL struct ISurfaceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISurface_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISurface_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISurface_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISurface_GetGabarit(This,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> GetGabarit(This,x1,y1,z1,x2,y2,z2) ) 

#define ISurface_GetPoint(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetNormal(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetNormal(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetTangentVectorU(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetTangentVectorU(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetTangentVectorV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetTangentVectorV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeU(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeU(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeUU(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeUU(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeVV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeVV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeUV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeUV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeUUU(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeUUU(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeVVV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeVVV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeUVV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeUVV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetDerivativeUUV(This,paramU,paramV,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeUUV(This,paramU,paramV,x,y,z) ) 

#define ISurface_GetParamUMin(This)	\
    ( (This)->lpVtbl -> GetParamUMin(This) ) 

#define ISurface_GetParamUMax(This)	\
    ( (This)->lpVtbl -> GetParamUMax(This) ) 

#define ISurface_GetParamVMin(This)	\
    ( (This)->lpVtbl -> GetParamVMin(This) ) 

#define ISurface_GetParamVMax(This)	\
    ( (This)->lpVtbl -> GetParamVMax(This) ) 

#define ISurface_IsClosedU(This)	\
    ( (This)->lpVtbl -> IsClosedU(This) ) 

#define ISurface_IsClosedV(This)	\
    ( (This)->lpVtbl -> IsClosedV(This) ) 

#define ISurface_IsPlane(This)	\
    ( (This)->lpVtbl -> IsPlane(This) ) 

#define ISurface_IsCone(This)	\
    ( (This)->lpVtbl -> IsCone(This) ) 

#define ISurface_IsCylinder(This)	\
    ( (This)->lpVtbl -> IsCylinder(This) ) 

#define ISurface_IsTorus(This)	\
    ( (This)->lpVtbl -> IsTorus(This) ) 

#define ISurface_IsSphere(This)	\
    ( (This)->lpVtbl -> IsSphere(This) ) 

#define ISurface_IsNurbsSurface(This)	\
    ( (This)->lpVtbl -> IsNurbsSurface(This) ) 

#define ISurface_IsRevolved(This)	\
    ( (This)->lpVtbl -> IsRevolved(This) ) 

#define ISurface_IsSwept(This)	\
    ( (This)->lpVtbl -> IsSwept(This) ) 

#define ISurface_GetSurfaceParam(This)	\
    ( (This)->lpVtbl -> GetSurfaceParam(This) ) 

#define ISurface_GetArea(This,bitVector)	\
    ( (This)->lpVtbl -> GetArea(This,bitVector) ) 

#define ISurface_NearPointProjection(This,x,y,z,u,v,ext)	\
    ( (This)->lpVtbl -> NearPointProjection(This,x,y,z,u,v,ext) ) 

#define ISurface_CurveIntersection(This,curve,pointsArr,extSurf,extCurve)	\
    ( (This)->lpVtbl -> CurveIntersection(This,curve,pointsArr,extSurf,extCurve) ) 

#define ISurface_GetNurbsSurfaceParam(This)	\
    ( (This)->lpVtbl -> GetNurbsSurfaceParam(This) ) 

#define ISurface_GetBoundaryUVNurbs(This,uv,closed,loopIndex,edgeIndex,degree,points,weights,knots,tMin,tMax)	\
    ( (This)->lpVtbl -> GetBoundaryUVNurbs(This,uv,closed,loopIndex,edgeIndex,degree,points,weights,knots,tMin,tMax) ) 

#define ISurface_GetBoundaryCount(This)	\
    ( (This)->lpVtbl -> GetBoundaryCount(This) ) 

#define ISurface_GetEdgesCount(This,loopIndex)	\
    ( (This)->lpVtbl -> GetEdgesCount(This,loopIndex) ) 

#define ISurface_GetAreaEx(This,bitVector,angleTolerance)	\
    ( (This)->lpVtbl -> GetAreaEx(This,bitVector,angleTolerance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISurface_INTERFACE_DEFINED__ */


#ifndef __ITessellation_INTERFACE_DEFINED__
#define __ITessellation_INTERFACE_DEFINED__

/* interface ITessellation */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ITessellation,0x5f12cd9d,0x4310,0x4a6b,0xb4,0xb8,0xb1,0x44,0x5a,0xbb,0x36,0xd8);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5f12cd9d-4310-4a6b-b4b8-b1445abb36d8")
    ITessellation : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetFacetsCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFacetData( 
            int index,
            LPFACET facet) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetPointsCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormal( 
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFacetSize( 
            double sag) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetFacetSize( void) = 0;
        
        virtual /* [helpstring] */ LPFACET STDMETHODCALLTYPE GetFacet( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFacetPoints( 
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *indexes) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFacetNormals( 
            /* [out] */ VARIANT *normals) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetFacetParams( 
            /* [out] */ VARIANT *params) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFacetSag( 
            double sag) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetFacetSag( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetFacetAngle( 
            double angle) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetFacetAngle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetNeedParams( 
            BOOL need) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNeedParams( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITessellationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITessellation * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITessellation * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITessellation * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetFacetsCount )( 
            ITessellation * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFacetData )( 
            ITessellation * This,
            int index,
            LPFACET facet);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetPointsCount )( 
            ITessellation * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            ITessellation * This,
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormal )( 
            ITessellation * This,
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFacetSize )( 
            ITessellation * This,
            double sag);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetFacetSize )( 
            ITessellation * This);
        
        /* [helpstring] */ LPFACET ( STDMETHODCALLTYPE *GetFacet )( 
            ITessellation * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            ITessellation * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFacetPoints )( 
            ITessellation * This,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *indexes);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFacetNormals )( 
            ITessellation * This,
            /* [out] */ VARIANT *normals);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetFacetParams )( 
            ITessellation * This,
            /* [out] */ VARIANT *params);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFacetSag )( 
            ITessellation * This,
            double sag);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetFacetSag )( 
            ITessellation * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetFacetAngle )( 
            ITessellation * This,
            double angle);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetFacetAngle )( 
            ITessellation * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetNeedParams )( 
            ITessellation * This,
            BOOL need);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNeedParams )( 
            ITessellation * This);
        
        END_INTERFACE
    } ITessellationVtbl;

    interface ITessellation
    {
        CONST_VTBL struct ITessellationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITessellation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITessellation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITessellation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITessellation_GetFacetsCount(This)	\
    ( (This)->lpVtbl -> GetFacetsCount(This) ) 

#define ITessellation_GetFacetData(This,index,facet)	\
    ( (This)->lpVtbl -> GetFacetData(This,index,facet) ) 

#define ITessellation_GetPointsCount(This)	\
    ( (This)->lpVtbl -> GetPointsCount(This) ) 

#define ITessellation_GetPoint(This,index,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint(This,index,x,y,z) ) 

#define ITessellation_GetNormal(This,index,x,y,z)	\
    ( (This)->lpVtbl -> GetNormal(This,index,x,y,z) ) 

#define ITessellation_SetFacetSize(This,sag)	\
    ( (This)->lpVtbl -> SetFacetSize(This,sag) ) 

#define ITessellation_GetFacetSize(This)	\
    ( (This)->lpVtbl -> GetFacetSize(This) ) 

#define ITessellation_GetFacet(This)	\
    ( (This)->lpVtbl -> GetFacet(This) ) 

#define ITessellation_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define ITessellation_GetFacetPoints(This,points,indexes)	\
    ( (This)->lpVtbl -> GetFacetPoints(This,points,indexes) ) 

#define ITessellation_GetFacetNormals(This,normals)	\
    ( (This)->lpVtbl -> GetFacetNormals(This,normals) ) 

#define ITessellation_GetFacetParams(This,params)	\
    ( (This)->lpVtbl -> GetFacetParams(This,params) ) 

#define ITessellation_SetFacetSag(This,sag)	\
    ( (This)->lpVtbl -> SetFacetSag(This,sag) ) 

#define ITessellation_GetFacetSag(This)	\
    ( (This)->lpVtbl -> GetFacetSag(This) ) 

#define ITessellation_SetFacetAngle(This,angle)	\
    ( (This)->lpVtbl -> SetFacetAngle(This,angle) ) 

#define ITessellation_GetFacetAngle(This)	\
    ( (This)->lpVtbl -> GetFacetAngle(This) ) 

#define ITessellation_SetNeedParams(This,need)	\
    ( (This)->lpVtbl -> SetNeedParams(This,need) ) 

#define ITessellation_GetNeedParams(This)	\
    ( (This)->lpVtbl -> GetNeedParams(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITessellation_INTERFACE_DEFINED__ */


#ifndef __ICurve3D_INTERFACE_DEFINED__
#define __ICurve3D_INTERFACE_DEFINED__

/* interface ICurve3D */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICurve3D,0xe5066490,0x773d,0x4289,0xa6,0x0b,0x2f,0xc1,0x98,0x65,0x17,0x4a);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e5066490-773d-4289-a60b-2fc19865174a")
    ICurve3D : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetTangentVector( 
            /* [in] */ double paramT,
            /* [in] */ double *x,
            /* [in] */ double *y,
            /* [in] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormal( 
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeT( 
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeTT( 
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetDerivativeTTT( 
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetParamMin( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetParamMax( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsClosed( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPeriodic( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetMetricLength( 
            double startParam,
            double endParam) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetGabarit( 
            /* [out] */ double *x1,
            /* [out] */ double *y1,
            /* [out] */ double *z1,
            /* [out] */ double *x2,
            /* [out] */ double *y2,
            /* [out] */ double *z2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsDegenerate( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPlanar( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsLineSeg( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsArc( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsCircle( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsEllipse( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsNurbs( void) = 0;
        
        virtual /* [helpstring] */ LPUNKNOWN STDMETHODCALLTYPE GetCurveParam( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLength( 
            unsigned int bitVector) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE NearPointProjection( 
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *t,
            /* [in] */ BOOL ext) = 0;
        
        virtual /* [helpstring] */ LPNURBS3DPARAM STDMETHODCALLTYPE GetNurbs3dParam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE CalculatePolygon( 
            /* [in] */ double step,
            /* [out] */ VARIANT *points) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsEllipseArc( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsStraight( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICurve3DVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICurve3D * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICurve3D * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            ICurve3D * This,
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetTangentVector )( 
            ICurve3D * This,
            /* [in] */ double paramT,
            /* [in] */ double *x,
            /* [in] */ double *y,
            /* [in] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormal )( 
            ICurve3D * This,
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeT )( 
            ICurve3D * This,
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeTT )( 
            ICurve3D * This,
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetDerivativeTTT )( 
            ICurve3D * This,
            /* [in] */ double paramT,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetParamMin )( 
            ICurve3D * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetParamMax )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsClosed )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPeriodic )( 
            ICurve3D * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetMetricLength )( 
            ICurve3D * This,
            double startParam,
            double endParam);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetGabarit )( 
            ICurve3D * This,
            /* [out] */ double *x1,
            /* [out] */ double *y1,
            /* [out] */ double *z1,
            /* [out] */ double *x2,
            /* [out] */ double *y2,
            /* [out] */ double *z2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsDegenerate )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPlanar )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsLineSeg )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsArc )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsCircle )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsEllipse )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsNurbs )( 
            ICurve3D * This);
        
        /* [helpstring] */ LPUNKNOWN ( STDMETHODCALLTYPE *GetCurveParam )( 
            ICurve3D * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLength )( 
            ICurve3D * This,
            unsigned int bitVector);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *NearPointProjection )( 
            ICurve3D * This,
            /* [in] */ double x,
            /* [in] */ double y,
            /* [in] */ double z,
            /* [out] */ double *t,
            /* [in] */ BOOL ext);
        
        /* [helpstring] */ LPNURBS3DPARAM ( STDMETHODCALLTYPE *GetNurbs3dParam )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *CalculatePolygon )( 
            ICurve3D * This,
            /* [in] */ double step,
            /* [out] */ VARIANT *points);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsEllipseArc )( 
            ICurve3D * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsStraight )( 
            ICurve3D * This);
        
        END_INTERFACE
    } ICurve3DVtbl;

    interface ICurve3D
    {
        CONST_VTBL struct ICurve3DVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICurve3D_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICurve3D_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICurve3D_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICurve3D_GetPoint(This,paramT,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint(This,paramT,x,y,z) ) 

#define ICurve3D_GetTangentVector(This,paramT,x,y,z)	\
    ( (This)->lpVtbl -> GetTangentVector(This,paramT,x,y,z) ) 

#define ICurve3D_GetNormal(This,paramT,x,y,z)	\
    ( (This)->lpVtbl -> GetNormal(This,paramT,x,y,z) ) 

#define ICurve3D_GetDerivativeT(This,paramT,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeT(This,paramT,x,y,z) ) 

#define ICurve3D_GetDerivativeTT(This,paramT,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeTT(This,paramT,x,y,z) ) 

#define ICurve3D_GetDerivativeTTT(This,paramT,x,y,z)	\
    ( (This)->lpVtbl -> GetDerivativeTTT(This,paramT,x,y,z) ) 

#define ICurve3D_GetParamMin(This)	\
    ( (This)->lpVtbl -> GetParamMin(This) ) 

#define ICurve3D_GetParamMax(This)	\
    ( (This)->lpVtbl -> GetParamMax(This) ) 

#define ICurve3D_IsClosed(This)	\
    ( (This)->lpVtbl -> IsClosed(This) ) 

#define ICurve3D_IsPeriodic(This)	\
    ( (This)->lpVtbl -> IsPeriodic(This) ) 

#define ICurve3D_GetMetricLength(This,startParam,endParam)	\
    ( (This)->lpVtbl -> GetMetricLength(This,startParam,endParam) ) 

#define ICurve3D_GetGabarit(This,x1,y1,z1,x2,y2,z2)	\
    ( (This)->lpVtbl -> GetGabarit(This,x1,y1,z1,x2,y2,z2) ) 

#define ICurve3D_IsDegenerate(This)	\
    ( (This)->lpVtbl -> IsDegenerate(This) ) 

#define ICurve3D_IsPlanar(This)	\
    ( (This)->lpVtbl -> IsPlanar(This) ) 

#define ICurve3D_IsLineSeg(This)	\
    ( (This)->lpVtbl -> IsLineSeg(This) ) 

#define ICurve3D_IsArc(This)	\
    ( (This)->lpVtbl -> IsArc(This) ) 

#define ICurve3D_IsCircle(This)	\
    ( (This)->lpVtbl -> IsCircle(This) ) 

#define ICurve3D_IsEllipse(This)	\
    ( (This)->lpVtbl -> IsEllipse(This) ) 

#define ICurve3D_IsNurbs(This)	\
    ( (This)->lpVtbl -> IsNurbs(This) ) 

#define ICurve3D_GetCurveParam(This)	\
    ( (This)->lpVtbl -> GetCurveParam(This) ) 

#define ICurve3D_GetLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetLength(This,bitVector) ) 

#define ICurve3D_NearPointProjection(This,x,y,z,t,ext)	\
    ( (This)->lpVtbl -> NearPointProjection(This,x,y,z,t,ext) ) 

#define ICurve3D_GetNurbs3dParam(This)	\
    ( (This)->lpVtbl -> GetNurbs3dParam(This) ) 

#define ICurve3D_CalculatePolygon(This,step,points)	\
    ( (This)->lpVtbl -> CalculatePolygon(This,step,points) ) 

#define ICurve3D_IsEllipseArc(This)	\
    ( (This)->lpVtbl -> IsEllipseArc(This) ) 

#define ICurve3D_IsStraight(This)	\
    ( (This)->lpVtbl -> IsStraight(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICurve3D_INTERFACE_DEFINED__ */


#ifndef __IFacet_INTERFACE_DEFINED__
#define __IFacet_INTERFACE_DEFINED__

/* interface IFacet */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IFacet,0x1eed6c22,0x25d4,0x49c6,0xb7,0x6a,0x90,0xb7,0x68,0x96,0x6a,0x3b);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1eed6c22-25d4-49c6-b76a-90b768966a3b")
    IFacet : public IUnknown
    {
    public:
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetPointsCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNormal( 
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE GetTessellationIndex( 
            int index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFacetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFacet * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFacet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFacet * This);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetPointsCount )( 
            IFacet * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            IFacet * This,
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNormal )( 
            IFacet * This,
            /* [in] */ int index,
            /* [out] */ float *x,
            /* [out] */ float *y,
            /* [out] */ float *z);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *GetTessellationIndex )( 
            IFacet * This,
            int index);
        
        END_INTERFACE
    } IFacetVtbl;

    interface IFacet
    {
        CONST_VTBL struct IFacetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFacet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFacet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFacet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFacet_GetPointsCount(This)	\
    ( (This)->lpVtbl -> GetPointsCount(This) ) 

#define IFacet_GetPoint(This,index,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint(This,index,x,y,z) ) 

#define IFacet_GetNormal(This,index,x,y,z)	\
    ( (This)->lpVtbl -> GetNormal(This,index,x,y,z) ) 

#define IFacet_GetTessellationIndex(This,index)	\
    ( (This)->lpVtbl -> GetTessellationIndex(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFacet_INTERFACE_DEFINED__ */


#ifndef __ILoop_INTERFACE_DEFINED__
#define __ILoop_INTERFACE_DEFINED__

/* interface ILoop */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ILoop,0x56965a12,0x03bb,0x4068,0x8a,0xe9,0xbe,0xfc,0x23,0xee,0xeb,0x37);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56965a12-03bb-4068-8ae9-befc23eeeb37")
    ILoop : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPORIENTEDEDGECOLLECTION STDMETHODCALLTYPE OrientedEdgeCollection( 
            LPEDGEDEFINITION val) = 0;
        
        virtual /* [helpstring] */ LPEDGECOLLECTION STDMETHODCALLTYPE EdgeCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsOuter( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetLength( 
            unsigned long bitVector) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILoopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILoop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILoop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILoop * This);
        
        /* [helpstring] */ LPORIENTEDEDGECOLLECTION ( STDMETHODCALLTYPE *OrientedEdgeCollection )( 
            ILoop * This,
            LPEDGEDEFINITION val);
        
        /* [helpstring] */ LPEDGECOLLECTION ( STDMETHODCALLTYPE *EdgeCollection )( 
            ILoop * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsOuter )( 
            ILoop * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetLength )( 
            ILoop * This,
            unsigned long bitVector);
        
        END_INTERFACE
    } ILoopVtbl;

    interface ILoop
    {
        CONST_VTBL struct ILoopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILoop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILoop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILoop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILoop_OrientedEdgeCollection(This,val)	\
    ( (This)->lpVtbl -> OrientedEdgeCollection(This,val) ) 

#define ILoop_EdgeCollection(This)	\
    ( (This)->lpVtbl -> EdgeCollection(This) ) 

#define ILoop_IsOuter(This)	\
    ( (This)->lpVtbl -> IsOuter(This) ) 

#define ILoop_GetLength(This,bitVector)	\
    ( (This)->lpVtbl -> GetLength(This,bitVector) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILoop_INTERFACE_DEFINED__ */


#ifndef __IOrientedEdge_INTERFACE_DEFINED__
#define __IOrientedEdge_INTERFACE_DEFINED__

/* interface IOrientedEdge */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IOrientedEdge,0x42aa4e40,0x4415,0x4c79,0x8b,0x8c,0x48,0x0e,0x5a,0xfd,0xb7,0x9a);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42aa4e40-4415-4c79-8b8c-480e5afdb79a")
    IOrientedEdge : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPEDGEDEFINITION STDMETHODCALLTYPE GetEdge( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetOrientation( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetOwnerEntity( void) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGE STDMETHODCALLTYPE GetNext( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSameSense( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE GetAdjacentFace( 
            BOOL facePlus) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsStraight( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsSeam( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsPole( void) = 0;
        
        virtual /* [helpstring] */ LPCURVE3D STDMETHODCALLTYPE GetCurve3D( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOrientedEdgeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOrientedEdge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOrientedEdge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ LPEDGEDEFINITION ( STDMETHODCALLTYPE *GetEdge )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetOrientation )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetOwnerEntity )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ LPORIENTEDEDGE ( STDMETHODCALLTYPE *GetNext )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSameSense )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *GetAdjacentFace )( 
            IOrientedEdge * This,
            BOOL facePlus);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsStraight )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsSeam )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsPole )( 
            IOrientedEdge * This);
        
        /* [helpstring] */ LPCURVE3D ( STDMETHODCALLTYPE *GetCurve3D )( 
            IOrientedEdge * This);
        
        END_INTERFACE
    } IOrientedEdgeVtbl;

    interface IOrientedEdge
    {
        CONST_VTBL struct IOrientedEdgeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOrientedEdge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOrientedEdge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOrientedEdge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOrientedEdge_GetEdge(This)	\
    ( (This)->lpVtbl -> GetEdge(This) ) 

#define IOrientedEdge_GetOrientation(This)	\
    ( (This)->lpVtbl -> GetOrientation(This) ) 

#define IOrientedEdge_GetOwnerEntity(This)	\
    ( (This)->lpVtbl -> GetOwnerEntity(This) ) 

#define IOrientedEdge_GetNext(This)	\
    ( (This)->lpVtbl -> GetNext(This) ) 

#define IOrientedEdge_GetSameSense(This)	\
    ( (This)->lpVtbl -> GetSameSense(This) ) 

#define IOrientedEdge_GetAdjacentFace(This,facePlus)	\
    ( (This)->lpVtbl -> GetAdjacentFace(This,facePlus) ) 

#define IOrientedEdge_IsStraight(This)	\
    ( (This)->lpVtbl -> IsStraight(This) ) 

#define IOrientedEdge_IsSeam(This)	\
    ( (This)->lpVtbl -> IsSeam(This) ) 

#define IOrientedEdge_IsPole(This)	\
    ( (This)->lpVtbl -> IsPole(This) ) 

#define IOrientedEdge_GetCurve3D(This)	\
    ( (This)->lpVtbl -> GetCurve3D(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOrientedEdge_INTERFACE_DEFINED__ */


#ifndef __ILineSeg3dParam_INTERFACE_DEFINED__
#define __ILineSeg3dParam_INTERFACE_DEFINED__

/* interface ILineSeg3dParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ILineSeg3dParam,0xfe1515c7,0x7003,0x4ee2,0x9c,0x65,0x04,0x29,0x03,0x9d,0xd2,0x17);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe1515c7-7003-4ee2-9c65-0429039dd217")
    ILineSeg3dParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPointFirst( 
            double *x,
            double *y,
            double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPointLast( 
            double *x,
            double *y,
            double *z) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILineSeg3dParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILineSeg3dParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILineSeg3dParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILineSeg3dParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPointFirst )( 
            ILineSeg3dParam * This,
            double *x,
            double *y,
            double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPointLast )( 
            ILineSeg3dParam * This,
            double *x,
            double *y,
            double *z);
        
        END_INTERFACE
    } ILineSeg3dParamVtbl;

    interface ILineSeg3dParam
    {
        CONST_VTBL struct ILineSeg3dParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILineSeg3dParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILineSeg3dParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILineSeg3dParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILineSeg3dParam_GetPointFirst(This,x,y,z)	\
    ( (This)->lpVtbl -> GetPointFirst(This,x,y,z) ) 

#define ILineSeg3dParam_GetPointLast(This,x,y,z)	\
    ( (This)->lpVtbl -> GetPointLast(This,x,y,z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILineSeg3dParam_INTERFACE_DEFINED__ */


#ifndef __ICircle3dParam_INTERFACE_DEFINED__
#define __ICircle3dParam_INTERFACE_DEFINED__

/* interface ICircle3dParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICircle3dParam,0x9b2fed02,0x5fac,0x4473,0x9e,0x64,0x9b,0xdf,0x8b,0x33,0x1e,0x10);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9b2fed02-5fac-4473-9e64-9bdf8b331e10")
    ICircle3dParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICircle3dParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICircle3dParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICircle3dParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICircle3dParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            ICircle3dParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            ICircle3dParam * This);
        
        END_INTERFACE
    } ICircle3dParamVtbl;

    interface ICircle3dParam
    {
        CONST_VTBL struct ICircle3dParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICircle3dParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICircle3dParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICircle3dParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICircle3dParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define ICircle3dParam_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICircle3dParam_INTERFACE_DEFINED__ */


#ifndef __IEllipse3dParam_INTERFACE_DEFINED__
#define __IEllipse3dParam_INTERFACE_DEFINED__

/* interface IEllipse3dParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEllipse3dParam,0x1dd50f18,0x9c19,0x424c,0xb2,0x0e,0x77,0xe1,0x36,0x99,0x76,0xe3);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1dd50f18-9c19-424c-b20e-77e1369976e3")
    IEllipse3dParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetMajorRadius( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetMinorRadius( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEllipse3dParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEllipse3dParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEllipse3dParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEllipse3dParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IEllipse3dParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetMajorRadius )( 
            IEllipse3dParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetMinorRadius )( 
            IEllipse3dParam * This);
        
        END_INTERFACE
    } IEllipse3dParamVtbl;

    interface IEllipse3dParam
    {
        CONST_VTBL struct IEllipse3dParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEllipse3dParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEllipse3dParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEllipse3dParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEllipse3dParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IEllipse3dParam_GetMajorRadius(This)	\
    ( (This)->lpVtbl -> GetMajorRadius(This) ) 

#define IEllipse3dParam_GetMinorRadius(This)	\
    ( (This)->lpVtbl -> GetMinorRadius(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEllipse3dParam_INTERFACE_DEFINED__ */


#ifndef __INurbsPoint3dParam_INTERFACE_DEFINED__
#define __INurbsPoint3dParam_INTERFACE_DEFINED__

/* interface INurbsPoint3dParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_INurbsPoint3dParam,0x47cdb649,0xc027,0x4e8d,0x8e,0x25,0x14,0x61,0xcc,0x6d,0x7c,0x12);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("47cdb649-c027-4e8d-8e25-1461cc6d7c12")
    INurbsPoint3dParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPoint( 
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetWeight( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INurbsPoint3dParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INurbsPoint3dParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INurbsPoint3dParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INurbsPoint3dParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPoint )( 
            INurbsPoint3dParam * This,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetWeight )( 
            INurbsPoint3dParam * This);
        
        END_INTERFACE
    } INurbsPoint3dParamVtbl;

    interface INurbsPoint3dParam
    {
        CONST_VTBL struct INurbsPoint3dParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INurbsPoint3dParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INurbsPoint3dParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INurbsPoint3dParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INurbsPoint3dParam_GetPoint(This,x,y,z)	\
    ( (This)->lpVtbl -> GetPoint(This,x,y,z) ) 

#define INurbsPoint3dParam_GetWeight(This)	\
    ( (This)->lpVtbl -> GetWeight(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INurbsPoint3dParam_INTERFACE_DEFINED__ */


#ifndef __INurbs3dParam_INTERFACE_DEFINED__
#define __INurbs3dParam_INTERFACE_DEFINED__

/* interface INurbs3dParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_INurbs3dParam,0x0363cd73,0x028a,0x485f,0x92,0xbf,0xb4,0xdb,0x4b,0x3e,0x23,0x9a);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0363cd73-028a-485f-92bf-b4db4b3e239a")
    INurbs3dParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetDegree( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClose( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPeriodic( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLECTION STDMETHODCALLTYPE GetPointCollection( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSKNOTCOLLECTION STDMETHODCALLTYPE GetKnotCollection( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNurbsPoints3DParams( 
            /* [in] */ BOOL closed,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knots) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMinMaxParameters( 
            /* [in] */ BOOL closed,
            /* [out] */ double *tMin,
            /* [out] */ double *tMax) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INurbs3dParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INurbs3dParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INurbs3dParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INurbs3dParam * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetDegree )( 
            INurbs3dParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClose )( 
            INurbs3dParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPeriodic )( 
            INurbs3dParam * This);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLECTION ( STDMETHODCALLTYPE *GetPointCollection )( 
            INurbs3dParam * This);
        
        /* [helpstring] */ LPNURBSKNOTCOLLECTION ( STDMETHODCALLTYPE *GetKnotCollection )( 
            INurbs3dParam * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNurbsPoints3DParams )( 
            INurbs3dParam * This,
            /* [in] */ BOOL closed,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knots);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMinMaxParameters )( 
            INurbs3dParam * This,
            /* [in] */ BOOL closed,
            /* [out] */ double *tMin,
            /* [out] */ double *tMax);
        
        END_INTERFACE
    } INurbs3dParamVtbl;

    interface INurbs3dParam
    {
        CONST_VTBL struct INurbs3dParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INurbs3dParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INurbs3dParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INurbs3dParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INurbs3dParam_GetDegree(This)	\
    ( (This)->lpVtbl -> GetDegree(This) ) 

#define INurbs3dParam_GetClose(This)	\
    ( (This)->lpVtbl -> GetClose(This) ) 

#define INurbs3dParam_GetPeriodic(This)	\
    ( (This)->lpVtbl -> GetPeriodic(This) ) 

#define INurbs3dParam_GetPointCollection(This)	\
    ( (This)->lpVtbl -> GetPointCollection(This) ) 

#define INurbs3dParam_GetKnotCollection(This)	\
    ( (This)->lpVtbl -> GetKnotCollection(This) ) 

#define INurbs3dParam_GetNurbsPoints3DParams(This,closed,points,weights,knots)	\
    ( (This)->lpVtbl -> GetNurbsPoints3DParams(This,closed,points,weights,knots) ) 

#define INurbs3dParam_GetMinMaxParameters(This,closed,tMin,tMax)	\
    ( (This)->lpVtbl -> GetMinMaxParameters(This,closed,tMin,tMax) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INurbs3dParam_INTERFACE_DEFINED__ */


#ifndef __IPlaneParam_INTERFACE_DEFINED__
#define __IPlaneParam_INTERFACE_DEFINED__

/* interface IPlaneParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPlaneParam,0x9c412b77,0xbfde,0x4d60,0xb8,0xc7,0xbd,0x84,0x98,0x01,0x97,0x5e);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9c412b77-bfde-4d60-b8c7-bd849801975e")
    IPlaneParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPlaneParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPlaneParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPlaneParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPlaneParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IPlaneParam * This);
        
        END_INTERFACE
    } IPlaneParamVtbl;

    interface IPlaneParam
    {
        CONST_VTBL struct IPlaneParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPlaneParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPlaneParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPlaneParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPlaneParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPlaneParam_INTERFACE_DEFINED__ */


#ifndef __IConeParam_INTERFACE_DEFINED__
#define __IConeParam_INTERFACE_DEFINED__

/* interface IConeParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IConeParam,0x105943cf,0x5a3e,0x4aa6,0x4a,0xa6,0x57,0xb4,0x17,0x90,0x13,0xfc);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("105943cf-5a3e-4aa6-4aa6-57b4179013fc")
    IConeParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetHeight( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConeParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IConeParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IConeParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IConeParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            IConeParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetHeight )( 
            IConeParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IConeParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IConeParam * This);
        
        END_INTERFACE
    } IConeParamVtbl;

    interface IConeParam
    {
        CONST_VTBL struct IConeParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConeParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConeParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConeParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConeParam_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#define IConeParam_GetHeight(This)	\
    ( (This)->lpVtbl -> GetHeight(This) ) 

#define IConeParam_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#define IConeParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConeParam_INTERFACE_DEFINED__ */


#ifndef __ICylinderParam_INTERFACE_DEFINED__
#define __ICylinderParam_INTERFACE_DEFINED__

/* interface ICylinderParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICylinderParam,0xA2899CA0,0xC84E,0x4c16,0xBF,0xB2,0xE8,0xDA,0x69,0xFC,0x11,0x7E);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A2899CA0-C84E-4c16-BFB2-E8DA69FC117E")
    ICylinderParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetHeight( void) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICylinderParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICylinderParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICylinderParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICylinderParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            ICylinderParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetHeight )( 
            ICylinderParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            ICylinderParam * This);
        
        END_INTERFACE
    } ICylinderParamVtbl;

    interface ICylinderParam
    {
        CONST_VTBL struct ICylinderParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICylinderParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICylinderParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICylinderParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICylinderParam_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#define ICylinderParam_GetHeight(This)	\
    ( (This)->lpVtbl -> GetHeight(This) ) 

#define ICylinderParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICylinderParam_INTERFACE_DEFINED__ */


#ifndef __ISphereParam_INTERFACE_DEFINED__
#define __ISphereParam_INTERFACE_DEFINED__

/* interface ISphereParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISphereParam,0x941163aa,0x0f8a,0x422a,0xbe,0x1a,0x9f,0x43,0xc8,0x00,0x10,0x44);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("941163aa-0f8a-422a-be1a-9f43c8001044")
    ISphereParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISphereParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISphereParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISphereParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISphereParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            ISphereParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            ISphereParam * This);
        
        END_INTERFACE
    } ISphereParamVtbl;

    interface ISphereParam
    {
        CONST_VTBL struct ISphereParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISphereParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISphereParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISphereParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISphereParam_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#define ISphereParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISphereParam_INTERFACE_DEFINED__ */


#ifndef __ITorusParam_INTERFACE_DEFINED__
#define __ITorusParam_INTERFACE_DEFINED__

/* interface ITorusParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ITorusParam,0xc9c614a7,0xe8b6,0x4454,0xac,0x8b,0xe4,0x23,0x30,0xc1,0x1e,0x15);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c9c614a7-e8b6-4454-ac8b-e42330c11e15")
    ITorusParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetGeneratrixRadius( void) = 0;
        
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITorusParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITorusParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITorusParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITorusParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            ITorusParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetGeneratrixRadius )( 
            ITorusParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            ITorusParam * This);
        
        END_INTERFACE
    } ITorusParamVtbl;

    interface ITorusParam
    {
        CONST_VTBL struct ITorusParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITorusParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITorusParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITorusParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITorusParam_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#define ITorusParam_GetGeneratrixRadius(This)	\
    ( (This)->lpVtbl -> GetGeneratrixRadius(This) ) 

#define ITorusParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITorusParam_INTERFACE_DEFINED__ */


#ifndef __INurbsSurfaceParam_INTERFACE_DEFINED__
#define __INurbsSurfaceParam_INTERFACE_DEFINED__

/* interface INurbsSurfaceParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_INurbsSurfaceParam,0xa5a1cb44,0x5f2e,0x4059,0x86,0xb3,0x4f,0x50,0x56,0xef,0xf9,0x56);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a5a1cb44-5f2e-4059-86b3-4f5056eff956")
    INurbsSurfaceParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ short STDMETHODCALLTYPE GetDegree( 
            BOOL paramU) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetClose( 
            BOOL paramU) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetPeriodic( 
            BOOL paramU) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLCOLLECTION STDMETHODCALLTYPE GetPointCollection( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSKNOTCOLLECTION STDMETHODCALLTYPE GetKnotCollection( 
            BOOL paramU) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetNurbsParams( 
            /* [in] */ BOOL closedV,
            /* [in] */ BOOL closedU,
            /* [out] */ long *degreeV,
            /* [out] */ long *degreeU,
            /* [out] */ long *nPV,
            /* [out] */ long *nPU,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knotsV,
            /* [out] */ VARIANT *knotsU) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetBoundaryUVNurbs( 
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [out] */ long *degree,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knots,
            /* [out] */ double *tMin,
            /* [out] */ double *tMax) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetBoundaryCount( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetEdgesCount( 
            long loopIndex) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetMinMaxParameters( 
            /* [in] */ BOOL closedV,
            /* [in] */ BOOL closedU,
            /* [out] */ double *uMin,
            /* [out] */ double *uMax,
            /* [out] */ double *vMin,
            /* [out] */ double *vMax) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetUVPointFromBoundaryParameter( 
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [in] */ double t,
            /* [out] */ double *u,
            /* [out] */ double *v) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetBoundaryParameterFromUVPoint( 
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [in] */ double u,
            /* [in] */ double v,
            /* [out] */ double *t) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INurbsSurfaceParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INurbsSurfaceParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INurbsSurfaceParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INurbsSurfaceParam * This);
        
        /* [helpstring] */ short ( STDMETHODCALLTYPE *GetDegree )( 
            INurbsSurfaceParam * This,
            BOOL paramU);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetClose )( 
            INurbsSurfaceParam * This,
            BOOL paramU);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetPeriodic )( 
            INurbsSurfaceParam * This,
            BOOL paramU);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLCOLLECTION ( STDMETHODCALLTYPE *GetPointCollection )( 
            INurbsSurfaceParam * This);
        
        /* [helpstring] */ LPNURBSKNOTCOLLECTION ( STDMETHODCALLTYPE *GetKnotCollection )( 
            INurbsSurfaceParam * This,
            BOOL paramU);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetNurbsParams )( 
            INurbsSurfaceParam * This,
            /* [in] */ BOOL closedV,
            /* [in] */ BOOL closedU,
            /* [out] */ long *degreeV,
            /* [out] */ long *degreeU,
            /* [out] */ long *nPV,
            /* [out] */ long *nPU,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knotsV,
            /* [out] */ VARIANT *knotsU);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetBoundaryUVNurbs )( 
            INurbsSurfaceParam * This,
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [out] */ long *degree,
            /* [out] */ VARIANT *points,
            /* [out] */ VARIANT *weights,
            /* [out] */ VARIANT *knots,
            /* [out] */ double *tMin,
            /* [out] */ double *tMax);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetBoundaryCount )( 
            INurbsSurfaceParam * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetEdgesCount )( 
            INurbsSurfaceParam * This,
            long loopIndex);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetMinMaxParameters )( 
            INurbsSurfaceParam * This,
            /* [in] */ BOOL closedV,
            /* [in] */ BOOL closedU,
            /* [out] */ double *uMin,
            /* [out] */ double *uMax,
            /* [out] */ double *vMin,
            /* [out] */ double *vMax);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetUVPointFromBoundaryParameter )( 
            INurbsSurfaceParam * This,
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [in] */ double t,
            /* [out] */ double *u,
            /* [out] */ double *v);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetBoundaryParameterFromUVPoint )( 
            INurbsSurfaceParam * This,
            /* [in] */ BOOL uv,
            /* [in] */ BOOL closed,
            /* [in] */ long loopIndex,
            /* [in] */ long edgeIndex,
            /* [in] */ double u,
            /* [in] */ double v,
            /* [out] */ double *t);
        
        END_INTERFACE
    } INurbsSurfaceParamVtbl;

    interface INurbsSurfaceParam
    {
        CONST_VTBL struct INurbsSurfaceParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INurbsSurfaceParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INurbsSurfaceParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INurbsSurfaceParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INurbsSurfaceParam_GetDegree(This,paramU)	\
    ( (This)->lpVtbl -> GetDegree(This,paramU) ) 

#define INurbsSurfaceParam_GetClose(This,paramU)	\
    ( (This)->lpVtbl -> GetClose(This,paramU) ) 

#define INurbsSurfaceParam_GetPeriodic(This,paramU)	\
    ( (This)->lpVtbl -> GetPeriodic(This,paramU) ) 

#define INurbsSurfaceParam_GetPointCollection(This)	\
    ( (This)->lpVtbl -> GetPointCollection(This) ) 

#define INurbsSurfaceParam_GetKnotCollection(This,paramU)	\
    ( (This)->lpVtbl -> GetKnotCollection(This,paramU) ) 

#define INurbsSurfaceParam_GetNurbsParams(This,closedV,closedU,degreeV,degreeU,nPV,nPU,points,weights,knotsV,knotsU)	\
    ( (This)->lpVtbl -> GetNurbsParams(This,closedV,closedU,degreeV,degreeU,nPV,nPU,points,weights,knotsV,knotsU) ) 

#define INurbsSurfaceParam_GetBoundaryUVNurbs(This,uv,closed,loopIndex,edgeIndex,degree,points,weights,knots,tMin,tMax)	\
    ( (This)->lpVtbl -> GetBoundaryUVNurbs(This,uv,closed,loopIndex,edgeIndex,degree,points,weights,knots,tMin,tMax) ) 

#define INurbsSurfaceParam_GetBoundaryCount(This)	\
    ( (This)->lpVtbl -> GetBoundaryCount(This) ) 

#define INurbsSurfaceParam_GetEdgesCount(This,loopIndex)	\
    ( (This)->lpVtbl -> GetEdgesCount(This,loopIndex) ) 

#define INurbsSurfaceParam_GetMinMaxParameters(This,closedV,closedU,uMin,uMax,vMin,vMax)	\
    ( (This)->lpVtbl -> GetMinMaxParameters(This,closedV,closedU,uMin,uMax,vMin,vMax) ) 

#define INurbsSurfaceParam_GetUVPointFromBoundaryParameter(This,uv,closed,loopIndex,edgeIndex,t,u,v)	\
    ( (This)->lpVtbl -> GetUVPointFromBoundaryParameter(This,uv,closed,loopIndex,edgeIndex,t,u,v) ) 

#define INurbsSurfaceParam_GetBoundaryParameterFromUVPoint(This,uv,closed,loopIndex,edgeIndex,u,v,t)	\
    ( (This)->lpVtbl -> GetBoundaryParameterFromUVPoint(This,uv,closed,loopIndex,edgeIndex,u,v,t) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INurbsSurfaceParam_INTERFACE_DEFINED__ */


#ifndef __IArc3dParam_INTERFACE_DEFINED__
#define __IArc3dParam_INTERFACE_DEFINED__

/* interface IArc3dParam */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IArc3dParam,0x24a26824,0xe13c,0x453f,0x88,0x74,0xa0,0xdf,0x62,0xab,0x59,0x5a);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("24a26824-e13c-453f-8874-a0df62ab595a")
    IArc3dParam : public IUnknown
    {
    public:
        virtual /* [helpstring] */ LPPLACEMENT STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetRadius( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetAngle( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IArc3dParamVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IArc3dParam * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IArc3dParam * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IArc3dParam * This);
        
        /* [helpstring] */ LPPLACEMENT ( STDMETHODCALLTYPE *GetPlacement )( 
            IArc3dParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetRadius )( 
            IArc3dParam * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetAngle )( 
            IArc3dParam * This);
        
        END_INTERFACE
    } IArc3dParamVtbl;

    interface IArc3dParam
    {
        CONST_VTBL struct IArc3dParamVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IArc3dParam_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IArc3dParam_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IArc3dParam_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IArc3dParam_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IArc3dParam_GetRadius(This)	\
    ( (This)->lpVtbl -> GetRadius(This) ) 

#define IArc3dParam_GetAngle(This)	\
    ( (This)->lpVtbl -> GetAngle(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IArc3dParam_INTERFACE_DEFINED__ */


#ifndef __ISTrackingPointsMeasurer_INTERFACE_DEFINED__
#define __ISTrackingPointsMeasurer_INTERFACE_DEFINED__

/* interface ISTrackingPointsMeasurer */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ISTrackingPointsMeasurer,0x4DEA35BC,0xF9E0,0x4a3e,0xB8,0x15,0xFB,0x55,0x89,0x6F,0xC8,0xEF);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4DEA35BC-F9E0-4a3e-B815-FB55896FC8EF")
    ISTrackingPointsMeasurer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetPoint1( 
            double X,
            double Y,
            double Z,
            BOOL begin) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetPoint2( 
            double X,
            double Y,
            double Z,
            BOOL begin) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetRadius1( 
            double Val) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE SetRadius2( 
            double Val) = 0;
        
        virtual /* [helpstring] */ int STDMETHODCALLTYPE Calculate( void) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE GetResultPoint1( 
            double *X,
            double *Y,
            double *Z) = 0;
        
        virtual /* [helpstring] */ void STDMETHODCALLTYPE GetResultPoint2( 
            double *X,
            double *Y,
            double *Z) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISTrackingPointsMeasurerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISTrackingPointsMeasurer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISTrackingPointsMeasurer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISTrackingPointsMeasurer * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetPoint1 )( 
            ISTrackingPointsMeasurer * This,
            double X,
            double Y,
            double Z,
            BOOL begin);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetPoint2 )( 
            ISTrackingPointsMeasurer * This,
            double X,
            double Y,
            double Z,
            BOOL begin);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetRadius1 )( 
            ISTrackingPointsMeasurer * This,
            double Val);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *SetRadius2 )( 
            ISTrackingPointsMeasurer * This,
            double Val);
        
        /* [helpstring] */ int ( STDMETHODCALLTYPE *Calculate )( 
            ISTrackingPointsMeasurer * This);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *GetResultPoint1 )( 
            ISTrackingPointsMeasurer * This,
            double *X,
            double *Y,
            double *Z);
        
        /* [helpstring] */ void ( STDMETHODCALLTYPE *GetResultPoint2 )( 
            ISTrackingPointsMeasurer * This,
            double *X,
            double *Y,
            double *Z);
        
        END_INTERFACE
    } ISTrackingPointsMeasurerVtbl;

    interface ISTrackingPointsMeasurer
    {
        CONST_VTBL struct ISTrackingPointsMeasurerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISTrackingPointsMeasurer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISTrackingPointsMeasurer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISTrackingPointsMeasurer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISTrackingPointsMeasurer_SetPoint1(This,X,Y,Z,begin)	\
    ( (This)->lpVtbl -> SetPoint1(This,X,Y,Z,begin) ) 

#define ISTrackingPointsMeasurer_SetPoint2(This,X,Y,Z,begin)	\
    ( (This)->lpVtbl -> SetPoint2(This,X,Y,Z,begin) ) 

#define ISTrackingPointsMeasurer_SetRadius1(This,Val)	\
    ( (This)->lpVtbl -> SetRadius1(This,Val) ) 

#define ISTrackingPointsMeasurer_SetRadius2(This,Val)	\
    ( (This)->lpVtbl -> SetRadius2(This,Val) ) 

#define ISTrackingPointsMeasurer_Calculate(This)	\
    ( (This)->lpVtbl -> Calculate(This) ) 

#define ISTrackingPointsMeasurer_GetResultPoint1(This,X,Y,Z)	\
    ( (This)->lpVtbl -> GetResultPoint1(This,X,Y,Z) ) 

#define ISTrackingPointsMeasurer_GetResultPoint2(This,X,Y,Z)	\
    ( (This)->lpVtbl -> GetResultPoint2(This,X,Y,Z) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISTrackingPointsMeasurer_INTERFACE_DEFINED__ */


#ifndef __IPartCollection_INTERFACE_DEFINED__
#define __IPartCollection_INTERFACE_DEFINED__

/* interface IPartCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IPartCollection,0x7AA0E540,0x0317,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0317-11D4-A30E-00C026EE094F")
    IPartCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE GetByName( 
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ LPPART STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPPART entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            LPPART entity,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            LPPART entity,
            LPPART base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPPART entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            LPPART entity,
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPPART entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPartCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPartCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPartCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPartCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IPartCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IPartCollection * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *First )( 
            IPartCollection * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *Last )( 
            IPartCollection * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *Next )( 
            IPartCollection * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *Prev )( 
            IPartCollection * This);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *GetByName )( 
            IPartCollection * This,
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ LPPART ( STDMETHODCALLTYPE *GetByIndex )( 
            IPartCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IPartCollection * This,
            LPPART entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            IPartCollection * This,
            LPPART entity,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            IPartCollection * This,
            LPPART entity,
            LPPART base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            IPartCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            IPartCollection * This,
            LPPART entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IPartCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            IPartCollection * This,
            LPPART entity,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IPartCollection * This,
            LPPART entity);
        
        END_INTERFACE
    } IPartCollectionVtbl;

    interface IPartCollection
    {
        CONST_VTBL struct IPartCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPartCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPartCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPartCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPartCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IPartCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IPartCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IPartCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IPartCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IPartCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IPartCollection_GetByName(This,name,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetByName(This,name,testFullName,testIgnoreCase) ) 

#define IPartCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IPartCollection_Add(This,entity)	\
    ( (This)->lpVtbl -> Add(This,entity) ) 

#define IPartCollection_AddAt(This,entity,index)	\
    ( (This)->lpVtbl -> AddAt(This,entity,index) ) 

#define IPartCollection_AddBefore(This,entity,base)	\
    ( (This)->lpVtbl -> AddBefore(This,entity,base) ) 

#define IPartCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define IPartCollection_DetachByBody(This,entity)	\
    ( (This)->lpVtbl -> DetachByBody(This,entity) ) 

#define IPartCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IPartCollection_SetByIndex(This,entity,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,entity,index) ) 

#define IPartCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPartCollection_INTERFACE_DEFINED__ */


#ifndef __IEntityCollection_INTERFACE_DEFINED__
#define __IEntityCollection_INTERFACE_DEFINED__

/* interface IEntityCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEntityCollection,0x7AA0E540,0x0303,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0303-11D4-A30E-00C026EE094F")
    IEntityCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetByName( 
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ LPENTITY STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SelectByPoint( 
            double x,
            double y,
            double z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPENTITY entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            LPENTITY entity,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            LPENTITY entity,
            LPENTITY base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPENTITY entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            LPENTITY entity,
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPENTITY entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEntityCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEntityCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEntityCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEntityCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IEntityCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IEntityCollection * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *First )( 
            IEntityCollection * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *Last )( 
            IEntityCollection * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *Next )( 
            IEntityCollection * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *Prev )( 
            IEntityCollection * This);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetByName )( 
            IEntityCollection * This,
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ LPENTITY ( STDMETHODCALLTYPE *GetByIndex )( 
            IEntityCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SelectByPoint )( 
            IEntityCollection * This,
            double x,
            double y,
            double z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IEntityCollection * This,
            LPENTITY entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            IEntityCollection * This,
            LPENTITY entity,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            IEntityCollection * This,
            LPENTITY entity,
            LPENTITY base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            IEntityCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            IEntityCollection * This,
            LPENTITY entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IEntityCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            IEntityCollection * This,
            LPENTITY entity,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IEntityCollection * This,
            LPENTITY entity);
        
        END_INTERFACE
    } IEntityCollectionVtbl;

    interface IEntityCollection
    {
        CONST_VTBL struct IEntityCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEntityCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEntityCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEntityCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEntityCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IEntityCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IEntityCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IEntityCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IEntityCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IEntityCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IEntityCollection_GetByName(This,name,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetByName(This,name,testFullName,testIgnoreCase) ) 

#define IEntityCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IEntityCollection_SelectByPoint(This,x,y,z)	\
    ( (This)->lpVtbl -> SelectByPoint(This,x,y,z) ) 

#define IEntityCollection_Add(This,entity)	\
    ( (This)->lpVtbl -> Add(This,entity) ) 

#define IEntityCollection_AddAt(This,entity,index)	\
    ( (This)->lpVtbl -> AddAt(This,entity,index) ) 

#define IEntityCollection_AddBefore(This,entity,base)	\
    ( (This)->lpVtbl -> AddBefore(This,entity,base) ) 

#define IEntityCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define IEntityCollection_DetachByBody(This,entity)	\
    ( (This)->lpVtbl -> DetachByBody(This,entity) ) 

#define IEntityCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IEntityCollection_SetByIndex(This,entity,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,entity,index) ) 

#define IEntityCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEntityCollection_INTERFACE_DEFINED__ */


#ifndef __IMateConstraintCollection_INTERFACE_DEFINED__
#define __IMateConstraintCollection_INTERFACE_DEFINED__

/* interface IMateConstraintCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IMateConstraintCollection,0x7AA0E540,0x0304,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0304-11D4-A30E-00C026EE094F")
    IMateConstraintCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINT STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINT STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINT STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINT STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPMATECONSTRAINT STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddMateConstraint( 
            LPMATECONSTRAINT mate) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RemoveMateConstraint( 
            LPMATECONSTRAINT mate) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPMATECONSTRAINT mate) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSafeArrayByObj( 
            /* [in] */ LPUNKNOWN obj,
            /* [out] */ VARIANT *pArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMateConstraintCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMateConstraintCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMateConstraintCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ LPMATECONSTRAINT ( STDMETHODCALLTYPE *First )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ LPMATECONSTRAINT ( STDMETHODCALLTYPE *Last )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ LPMATECONSTRAINT ( STDMETHODCALLTYPE *Next )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ LPMATECONSTRAINT ( STDMETHODCALLTYPE *Prev )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ LPMATECONSTRAINT ( STDMETHODCALLTYPE *GetByIndex )( 
            IMateConstraintCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddMateConstraint )( 
            IMateConstraintCollection * This,
            LPMATECONSTRAINT mate);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RemoveMateConstraint )( 
            IMateConstraintCollection * This,
            LPMATECONSTRAINT mate);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IMateConstraintCollection * This);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IMateConstraintCollection * This,
            LPMATECONSTRAINT mate);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSafeArrayByObj )( 
            IMateConstraintCollection * This,
            /* [in] */ LPUNKNOWN obj,
            /* [out] */ VARIANT *pArray);
        
        END_INTERFACE
    } IMateConstraintCollectionVtbl;

    interface IMateConstraintCollection
    {
        CONST_VTBL struct IMateConstraintCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMateConstraintCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMateConstraintCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMateConstraintCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMateConstraintCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IMateConstraintCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IMateConstraintCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IMateConstraintCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IMateConstraintCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IMateConstraintCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IMateConstraintCollection_AddMateConstraint(This,mate)	\
    ( (This)->lpVtbl -> AddMateConstraint(This,mate) ) 

#define IMateConstraintCollection_RemoveMateConstraint(This,mate)	\
    ( (This)->lpVtbl -> RemoveMateConstraint(This,mate) ) 

#define IMateConstraintCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IMateConstraintCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IMateConstraintCollection_FindIt(This,mate)	\
    ( (This)->lpVtbl -> FindIt(This,mate) ) 

#define IMateConstraintCollection_GetSafeArrayByObj(This,obj,pArray)	\
    ( (This)->lpVtbl -> GetSafeArrayByObj(This,obj,pArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMateConstraintCollection_INTERFACE_DEFINED__ */


#ifndef __IViewProjectionCollection_INTERFACE_DEFINED__
#define __IViewProjectionCollection_INTERFACE_DEFINED__

/* interface IViewProjectionCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IViewProjectionCollection,0xf6eddae7,0xaa95,0x4474,0x83,0x5e,0xbe,0xb4,0xbc,0x25,0xba,0xa8);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f6eddae7-aa95-4474-835e-beb4bc25baa8")
    IViewProjectionCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE GetByName( 
            LPOLESTR projName,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE FindIt( 
            LPVIEWPROJECTION projection) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPVIEWPROJECTION projection) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPVIEWPROJECTION projection) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByName( 
            LPOLESTR projName) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE NewViewProjection( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetViewProjectionScheme( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetViewProjectionScheme( 
            long scheme) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetBaseUserOrientation( 
            VARIANT *place) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetBaseUserOrientation( 
            VARIANT *place) = 0;
        
        virtual /* [helpstring] */ LPVIEWPROJECTION STDMETHODCALLTYPE AddUnfoldProjection( 
            VARIANT *place) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IViewProjectionCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IViewProjectionCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IViewProjectionCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *First )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *Last )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *Next )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *Prev )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *GetByIndex )( 
            IViewProjectionCollection * This,
            long index);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *GetByName )( 
            IViewProjectionCollection * This,
            LPOLESTR projName,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *FindIt )( 
            IViewProjectionCollection * This,
            LPVIEWPROJECTION projection);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IViewProjectionCollection * This,
            LPVIEWPROJECTION projection);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            IViewProjectionCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            IViewProjectionCollection * This,
            LPVIEWPROJECTION projection);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByName )( 
            IViewProjectionCollection * This,
            LPOLESTR projName);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *NewViewProjection )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetViewProjectionScheme )( 
            IViewProjectionCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetViewProjectionScheme )( 
            IViewProjectionCollection * This,
            long scheme);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetBaseUserOrientation )( 
            IViewProjectionCollection * This,
            VARIANT *place);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetBaseUserOrientation )( 
            IViewProjectionCollection * This,
            VARIANT *place);
        
        /* [helpstring] */ LPVIEWPROJECTION ( STDMETHODCALLTYPE *AddUnfoldProjection )( 
            IViewProjectionCollection * This,
            VARIANT *place);
        
        END_INTERFACE
    } IViewProjectionCollectionVtbl;

    interface IViewProjectionCollection
    {
        CONST_VTBL struct IViewProjectionCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IViewProjectionCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IViewProjectionCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IViewProjectionCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IViewProjectionCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IViewProjectionCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IViewProjectionCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IViewProjectionCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IViewProjectionCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IViewProjectionCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IViewProjectionCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IViewProjectionCollection_GetByName(This,projName,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetByName(This,projName,testFullName,testIgnoreCase) ) 

#define IViewProjectionCollection_FindIt(This,projection)	\
    ( (This)->lpVtbl -> FindIt(This,projection) ) 

#define IViewProjectionCollection_Add(This,projection)	\
    ( (This)->lpVtbl -> Add(This,projection) ) 

#define IViewProjectionCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define IViewProjectionCollection_DetachByBody(This,projection)	\
    ( (This)->lpVtbl -> DetachByBody(This,projection) ) 

#define IViewProjectionCollection_DetachByName(This,projName)	\
    ( (This)->lpVtbl -> DetachByName(This,projName) ) 

#define IViewProjectionCollection_NewViewProjection(This)	\
    ( (This)->lpVtbl -> NewViewProjection(This) ) 

#define IViewProjectionCollection_GetViewProjectionScheme(This)	\
    ( (This)->lpVtbl -> GetViewProjectionScheme(This) ) 

#define IViewProjectionCollection_SetViewProjectionScheme(This,scheme)	\
    ( (This)->lpVtbl -> SetViewProjectionScheme(This,scheme) ) 

#define IViewProjectionCollection_SetBaseUserOrientation(This,place)	\
    ( (This)->lpVtbl -> SetBaseUserOrientation(This,place) ) 

#define IViewProjectionCollection_GetBaseUserOrientation(This,place)	\
    ( (This)->lpVtbl -> GetBaseUserOrientation(This,place) ) 

#define IViewProjectionCollection_AddUnfoldProjection(This,place)	\
    ( (This)->lpVtbl -> AddUnfoldProjection(This,place) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IViewProjectionCollection_INTERFACE_DEFINED__ */


#ifndef __IVariableCollection_INTERFACE_DEFINED__
#define __IVariableCollection_INTERFACE_DEFINED__

/* interface IVariableCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IVariableCollection,0x7AA0E540,0x0311,0x11D4,0xA3,0x0E,0x00,0xC0,0x26,0xEE,0x09,0x4F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7AA0E540-0311-11D4-A30E-00C026EE094F")
    IVariableCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE GetByName( 
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ LPVARIABLE STDMETHODCALLTYPE AddNewVariable( 
            LPOLESTR name,
            double value,
            LPOLESTR note) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE RemoveVariable( 
            LPOLESTR name) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVariableCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVariableCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVariableCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVariableCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IVariableCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IVariableCollection * This);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *First )( 
            IVariableCollection * This);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *Last )( 
            IVariableCollection * This);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *Next )( 
            IVariableCollection * This);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *Prev )( 
            IVariableCollection * This);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *GetByIndex )( 
            IVariableCollection * This,
            long index);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *GetByName )( 
            IVariableCollection * This,
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ LPVARIABLE ( STDMETHODCALLTYPE *AddNewVariable )( 
            IVariableCollection * This,
            LPOLESTR name,
            double value,
            LPOLESTR note);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *RemoveVariable )( 
            IVariableCollection * This,
            LPOLESTR name);
        
        END_INTERFACE
    } IVariableCollectionVtbl;

    interface IVariableCollection
    {
        CONST_VTBL struct IVariableCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVariableCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVariableCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVariableCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVariableCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IVariableCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IVariableCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IVariableCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IVariableCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IVariableCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IVariableCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IVariableCollection_GetByName(This,name,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetByName(This,name,testFullName,testIgnoreCase) ) 

#define IVariableCollection_AddNewVariable(This,name,value,note)	\
    ( (This)->lpVtbl -> AddNewVariable(This,name,value,note) ) 

#define IVariableCollection_RemoveVariable(This,name)	\
    ( (This)->lpVtbl -> RemoveVariable(This,name) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVariableCollection_INTERFACE_DEFINED__ */


#ifndef __IFeatureCollection_INTERFACE_DEFINED__
#define __IFeatureCollection_INTERFACE_DEFINED__

/* interface IFeatureCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IFeatureCollection,0xce5d4888,0x9006,0x43ac,0x9a,0xcc,0x6d,0x9e,0x58,0xb4,0x08,0xb4);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ce5d4888-9006-43ac-9acc-6d9e58b408b4")
    IFeatureCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ LPFEATURE STDMETHODCALLTYPE GetByName( 
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPFEATURE mate) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPFEATURE obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            LPFEATURE obj,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            LPFEATURE obj,
            LPFEATURE base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPFEATURE obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            LPFEATURE obj,
            long index) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3DCOLLECTION STDMETHODCALLTYPE AttributeCollection( 
            long key1,
            long key2,
            long key3,
            long key4,
            double numb) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFeatureCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFeatureCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFeatureCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *First )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *Last )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *Next )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *Prev )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetByIndex )( 
            IFeatureCollection * This,
            long index);
        
        /* [helpstring] */ LPFEATURE ( STDMETHODCALLTYPE *GetByName )( 
            IFeatureCollection * This,
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IFeatureCollection * This,
            LPFEATURE mate);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IFeatureCollection * This,
            LPFEATURE obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            IFeatureCollection * This,
            LPFEATURE obj,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            IFeatureCollection * This,
            LPFEATURE obj,
            LPFEATURE base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            IFeatureCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            IFeatureCollection * This,
            LPFEATURE obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IFeatureCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            IFeatureCollection * This,
            LPFEATURE obj,
            long index);
        
        /* [helpstring] */ LPATTRIBUTE3DCOLLECTION ( STDMETHODCALLTYPE *AttributeCollection )( 
            IFeatureCollection * This,
            long key1,
            long key2,
            long key3,
            long key4,
            double numb);
        
        END_INTERFACE
    } IFeatureCollectionVtbl;

    interface IFeatureCollection
    {
        CONST_VTBL struct IFeatureCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFeatureCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFeatureCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFeatureCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFeatureCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IFeatureCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IFeatureCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IFeatureCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IFeatureCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IFeatureCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IFeatureCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IFeatureCollection_GetByName(This,name,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetByName(This,name,testFullName,testIgnoreCase) ) 

#define IFeatureCollection_FindIt(This,mate)	\
    ( (This)->lpVtbl -> FindIt(This,mate) ) 

#define IFeatureCollection_Add(This,obj)	\
    ( (This)->lpVtbl -> Add(This,obj) ) 

#define IFeatureCollection_AddAt(This,obj,index)	\
    ( (This)->lpVtbl -> AddAt(This,obj,index) ) 

#define IFeatureCollection_AddBefore(This,obj,base)	\
    ( (This)->lpVtbl -> AddBefore(This,obj,base) ) 

#define IFeatureCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define IFeatureCollection_DetachByBody(This,obj)	\
    ( (This)->lpVtbl -> DetachByBody(This,obj) ) 

#define IFeatureCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IFeatureCollection_SetByIndex(This,obj,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,obj,index) ) 

#define IFeatureCollection_AttributeCollection(This,key1,key2,key3,key4,numb)	\
    ( (This)->lpVtbl -> AttributeCollection(This,key1,key2,key3,key4,numb) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFeatureCollection_INTERFACE_DEFINED__ */


#ifndef __IFaceCollection_INTERFACE_DEFINED__
#define __IFaceCollection_INTERFACE_DEFINED__

/* interface IFaceCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IFaceCollection,0xd269ad47,0xb2cc,0x4152,0xa7,0xba,0x12,0x72,0x42,0x37,0x12,0x08);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d269ad47-b2cc-4152-a7ba-127242371208")
    IFaceCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ LPFACEDEFINITION STDMETHODCALLTYPE GetByName( 
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPFACEDEFINITION entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFaceCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFaceCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFaceCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFaceCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IFaceCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IFaceCollection * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *First )( 
            IFaceCollection * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *Last )( 
            IFaceCollection * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *Next )( 
            IFaceCollection * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *Prev )( 
            IFaceCollection * This);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *GetByIndex )( 
            IFaceCollection * This,
            long index);
        
        /* [helpstring] */ LPFACEDEFINITION ( STDMETHODCALLTYPE *GetByName )( 
            IFaceCollection * This,
            LPOLESTR name,
            BOOL testFullName,
            BOOL testIgnoreCase);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IFaceCollection * This,
            LPFACEDEFINITION entity);
        
        END_INTERFACE
    } IFaceCollectionVtbl;

    interface IFaceCollection
    {
        CONST_VTBL struct IFaceCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFaceCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFaceCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFaceCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFaceCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IFaceCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IFaceCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IFaceCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IFaceCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IFaceCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IFaceCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IFaceCollection_GetByName(This,name,testFullName,testIgnoreCase)	\
    ( (This)->lpVtbl -> GetByName(This,name,testFullName,testIgnoreCase) ) 

#define IFaceCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFaceCollection_INTERFACE_DEFINED__ */


#ifndef __IEdgeCollection_INTERFACE_DEFINED__
#define __IEdgeCollection_INTERFACE_DEFINED__

/* interface IEdgeCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IEdgeCollection,0x5e93d4b9,0xbaab,0x4fc4,0xac,0xf8,0x8f,0xf7,0x8e,0x9d,0x1b,0x42);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5e93d4b9-baab-4fc4-acf8-8ff78e9d1b42")
    IEdgeCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPEDGEDEFINITION STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPEDGEDEFINITION STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPEDGEDEFINITION STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPEDGEDEFINITION STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPEDGEDEFINITION STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPEDGEDEFINITION entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEdgeCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEdgeCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEdgeCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ LPEDGEDEFINITION ( STDMETHODCALLTYPE *First )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ LPEDGEDEFINITION ( STDMETHODCALLTYPE *Last )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ LPEDGEDEFINITION ( STDMETHODCALLTYPE *Next )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ LPEDGEDEFINITION ( STDMETHODCALLTYPE *Prev )( 
            IEdgeCollection * This);
        
        /* [helpstring] */ LPEDGEDEFINITION ( STDMETHODCALLTYPE *GetByIndex )( 
            IEdgeCollection * This,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IEdgeCollection * This,
            LPEDGEDEFINITION entity);
        
        END_INTERFACE
    } IEdgeCollectionVtbl;

    interface IEdgeCollection
    {
        CONST_VTBL struct IEdgeCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEdgeCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEdgeCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEdgeCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEdgeCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IEdgeCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IEdgeCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IEdgeCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IEdgeCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IEdgeCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IEdgeCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IEdgeCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEdgeCollection_INTERFACE_DEFINED__ */


#ifndef __IDeletedCopyCollection_INTERFACE_DEFINED__
#define __IDeletedCopyCollection_INTERFACE_DEFINED__

/* interface IDeletedCopyCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDeletedCopyCollection,0xbec3920d,0x6238,0x401a,0x86,0xa3,0xa6,0x00,0x57,0x0f,0x47,0xa4);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bec3920d-6238-401a-86a3-a600570f47a4")
    IDeletedCopyCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE First( 
            long *index1,
            long *index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Last( 
            long *index1,
            long *index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Next( 
            long *index1,
            long *index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Prev( 
            long *index1,
            long *index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetByIndex( 
            long index,
            long *index1,
            long *index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            long index1,
            long index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            long index1,
            long index2,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            long index1,
            long index2) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            long index1,
            long index2,
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            long index1,
            long index2) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDeletedCopyCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDeletedCopyCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDeletedCopyCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDeletedCopyCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IDeletedCopyCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IDeletedCopyCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *First )( 
            IDeletedCopyCollection * This,
            long *index1,
            long *index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Last )( 
            IDeletedCopyCollection * This,
            long *index1,
            long *index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Next )( 
            IDeletedCopyCollection * This,
            long *index1,
            long *index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Prev )( 
            IDeletedCopyCollection * This,
            long *index1,
            long *index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetByIndex )( 
            IDeletedCopyCollection * This,
            long index,
            long *index1,
            long *index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IDeletedCopyCollection * This,
            long index1,
            long index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            IDeletedCopyCollection * This,
            long index1,
            long index2,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            IDeletedCopyCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            IDeletedCopyCollection * This,
            long index1,
            long index2);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IDeletedCopyCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            IDeletedCopyCollection * This,
            long index1,
            long index2,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IDeletedCopyCollection * This,
            long index1,
            long index2);
        
        END_INTERFACE
    } IDeletedCopyCollectionVtbl;

    interface IDeletedCopyCollection
    {
        CONST_VTBL struct IDeletedCopyCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDeletedCopyCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDeletedCopyCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDeletedCopyCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDeletedCopyCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IDeletedCopyCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IDeletedCopyCollection_First(This,index1,index2)	\
    ( (This)->lpVtbl -> First(This,index1,index2) ) 

#define IDeletedCopyCollection_Last(This,index1,index2)	\
    ( (This)->lpVtbl -> Last(This,index1,index2) ) 

#define IDeletedCopyCollection_Next(This,index1,index2)	\
    ( (This)->lpVtbl -> Next(This,index1,index2) ) 

#define IDeletedCopyCollection_Prev(This,index1,index2)	\
    ( (This)->lpVtbl -> Prev(This,index1,index2) ) 

#define IDeletedCopyCollection_GetByIndex(This,index,index1,index2)	\
    ( (This)->lpVtbl -> GetByIndex(This,index,index1,index2) ) 

#define IDeletedCopyCollection_Add(This,index1,index2)	\
    ( (This)->lpVtbl -> Add(This,index1,index2) ) 

#define IDeletedCopyCollection_AddAt(This,index1,index2,index)	\
    ( (This)->lpVtbl -> AddAt(This,index1,index2,index) ) 

#define IDeletedCopyCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define IDeletedCopyCollection_DetachByBody(This,index1,index2)	\
    ( (This)->lpVtbl -> DetachByBody(This,index1,index2) ) 

#define IDeletedCopyCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IDeletedCopyCollection_SetByIndex(This,index1,index2,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,index1,index2,index) ) 

#define IDeletedCopyCollection_FindIt(This,index1,index2)	\
    ( (This)->lpVtbl -> FindIt(This,index1,index2) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDeletedCopyCollection_INTERFACE_DEFINED__ */


#ifndef __IAttribute3DCollection_INTERFACE_DEFINED__
#define __IAttribute3DCollection_INTERFACE_DEFINED__

/* interface IAttribute3DCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IAttribute3DCollection,0xE17C2BE7,0x9C11,0x4fb3,0xAD,0xBD,0x04,0xEC,0x91,0x27,0x84,0xE8);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E17C2BE7-9C11-4fb3-ADBD-04EC912784E8")
    IAttribute3DCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3D STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3D STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3D STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3D STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPATTRIBUTE3D STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPATTRIBUTE3D obj) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Select( 
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            int objType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAttribute3DCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAttribute3DCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAttribute3DCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ LPATTRIBUTE3D ( STDMETHODCALLTYPE *First )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ LPATTRIBUTE3D ( STDMETHODCALLTYPE *Last )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ LPATTRIBUTE3D ( STDMETHODCALLTYPE *Next )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ LPATTRIBUTE3D ( STDMETHODCALLTYPE *Prev )( 
            IAttribute3DCollection * This);
        
        /* [helpstring] */ LPATTRIBUTE3D ( STDMETHODCALLTYPE *GetByIndex )( 
            IAttribute3DCollection * This,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IAttribute3DCollection * This,
            LPATTRIBUTE3D obj);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Select )( 
            IAttribute3DCollection * This,
            long key1,
            long key2,
            long key3,
            long key4,
            double numb,
            int objType);
        
        END_INTERFACE
    } IAttribute3DCollectionVtbl;

    interface IAttribute3DCollection
    {
        CONST_VTBL struct IAttribute3DCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAttribute3DCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAttribute3DCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAttribute3DCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAttribute3DCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IAttribute3DCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IAttribute3DCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IAttribute3DCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IAttribute3DCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IAttribute3DCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IAttribute3DCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IAttribute3DCollection_FindIt(This,obj)	\
    ( (This)->lpVtbl -> FindIt(This,obj) ) 

#define IAttribute3DCollection_Select(This,key1,key2,key3,key4,numb,objType)	\
    ( (This)->lpVtbl -> Select(This,key1,key2,key3,key4,numb,objType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAttribute3DCollection_INTERFACE_DEFINED__ */


#ifndef __IBodyCollection_INTERFACE_DEFINED__
#define __IBodyCollection_INTERFACE_DEFINED__

/* interface IBodyCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IBodyCollection,0x64cbc7cb,0x005d,0x47df,0x8b,0x3e,0x53,0xfd,0x97,0x4c,0x5a,0x32);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64cbc7cb-005d-47df-8b3e-53fd974c5a32")
    IBodyCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPBODY STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPBODY STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPBODY STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPBODY STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPBODY STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPBODY entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPBODY entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            LPBODY entity,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            LPBODY entity,
            LPBODY base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPBODY entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            LPBODY entity,
            long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBodyCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBodyCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBodyCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBodyCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IBodyCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IBodyCollection * This);
        
        /* [helpstring] */ LPBODY ( STDMETHODCALLTYPE *First )( 
            IBodyCollection * This);
        
        /* [helpstring] */ LPBODY ( STDMETHODCALLTYPE *Last )( 
            IBodyCollection * This);
        
        /* [helpstring] */ LPBODY ( STDMETHODCALLTYPE *Next )( 
            IBodyCollection * This);
        
        /* [helpstring] */ LPBODY ( STDMETHODCALLTYPE *Prev )( 
            IBodyCollection * This);
        
        /* [helpstring] */ LPBODY ( STDMETHODCALLTYPE *GetByIndex )( 
            IBodyCollection * This,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IBodyCollection * This,
            LPBODY entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            IBodyCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            IBodyCollection * This,
            LPBODY entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            IBodyCollection * This,
            LPBODY entity,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            IBodyCollection * This,
            LPBODY entity,
            LPBODY base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            IBodyCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            IBodyCollection * This,
            LPBODY entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            IBodyCollection * This,
            LPBODY entity,
            long index);
        
        END_INTERFACE
    } IBodyCollectionVtbl;

    interface IBodyCollection
    {
        CONST_VTBL struct IBodyCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBodyCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBodyCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBodyCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBodyCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IBodyCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IBodyCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IBodyCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IBodyCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IBodyCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IBodyCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IBodyCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#define IBodyCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define IBodyCollection_Add(This,entity)	\
    ( (This)->lpVtbl -> Add(This,entity) ) 

#define IBodyCollection_AddAt(This,entity,index)	\
    ( (This)->lpVtbl -> AddAt(This,entity,index) ) 

#define IBodyCollection_AddBefore(This,entity,base)	\
    ( (This)->lpVtbl -> AddBefore(This,entity,base) ) 

#define IBodyCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define IBodyCollection_DetachByBody(This,entity)	\
    ( (This)->lpVtbl -> DetachByBody(This,entity) ) 

#define IBodyCollection_SetByIndex(This,entity,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,entity,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBodyCollection_INTERFACE_DEFINED__ */


#ifndef __ILoopCollection_INTERFACE_DEFINED__
#define __ILoopCollection_INTERFACE_DEFINED__

/* interface ILoopCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ILoopCollection,0x22866947,0xf414,0x484b,0x8c,0xcc,0xf4,0x44,0x0b,0xfe,0xf9,0x2f);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22866947-f414-484b-8ccc-f4440bfef92f")
    ILoopCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPLOOP STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPLOOP STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPLOOP STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPLOOP STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPLOOP STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPLOOP entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILoopCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ILoopCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ILoopCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ILoopCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            ILoopCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            ILoopCollection * This);
        
        /* [helpstring] */ LPLOOP ( STDMETHODCALLTYPE *First )( 
            ILoopCollection * This);
        
        /* [helpstring] */ LPLOOP ( STDMETHODCALLTYPE *Last )( 
            ILoopCollection * This);
        
        /* [helpstring] */ LPLOOP ( STDMETHODCALLTYPE *Next )( 
            ILoopCollection * This);
        
        /* [helpstring] */ LPLOOP ( STDMETHODCALLTYPE *Prev )( 
            ILoopCollection * This);
        
        /* [helpstring] */ LPLOOP ( STDMETHODCALLTYPE *GetByIndex )( 
            ILoopCollection * This,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            ILoopCollection * This,
            LPLOOP entity);
        
        END_INTERFACE
    } ILoopCollectionVtbl;

    interface ILoopCollection
    {
        CONST_VTBL struct ILoopCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILoopCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILoopCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILoopCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILoopCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define ILoopCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define ILoopCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define ILoopCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define ILoopCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define ILoopCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define ILoopCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define ILoopCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILoopCollection_INTERFACE_DEFINED__ */


#ifndef __IOrientedEdgeCollection_INTERFACE_DEFINED__
#define __IOrientedEdgeCollection_INTERFACE_DEFINED__

/* interface IOrientedEdgeCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IOrientedEdgeCollection,0xd19b0a07,0x4ca6,0x4e77,0xa8,0xdb,0x8a,0xc8,0xc7,0x12,0x31,0x24);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d19b0a07-4ca6-4e77-a8db-8ac8c7123124")
    IOrientedEdgeCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGE STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGE STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGE STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGE STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPORIENTEDEDGE STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPORIENTEDEDGE entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IOrientedEdgeCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOrientedEdgeCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOrientedEdgeCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ LPORIENTEDEDGE ( STDMETHODCALLTYPE *First )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ LPORIENTEDEDGE ( STDMETHODCALLTYPE *Last )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ LPORIENTEDEDGE ( STDMETHODCALLTYPE *Next )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ LPORIENTEDEDGE ( STDMETHODCALLTYPE *Prev )( 
            IOrientedEdgeCollection * This);
        
        /* [helpstring] */ LPORIENTEDEDGE ( STDMETHODCALLTYPE *GetByIndex )( 
            IOrientedEdgeCollection * This,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            IOrientedEdgeCollection * This,
            LPORIENTEDEDGE entity);
        
        END_INTERFACE
    } IOrientedEdgeCollectionVtbl;

    interface IOrientedEdgeCollection
    {
        CONST_VTBL struct IOrientedEdgeCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOrientedEdgeCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOrientedEdgeCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOrientedEdgeCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOrientedEdgeCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define IOrientedEdgeCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IOrientedEdgeCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define IOrientedEdgeCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define IOrientedEdgeCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define IOrientedEdgeCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define IOrientedEdgeCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define IOrientedEdgeCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IOrientedEdgeCollection_INTERFACE_DEFINED__ */


#ifndef __INurbsPoint3dCollection_INTERFACE_DEFINED__
#define __INurbsPoint3dCollection_INTERFACE_DEFINED__

/* interface INurbsPoint3dCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_INurbsPoint3dCollection,0xac0e0f4d,0xacce,0x40c4,0x9b,0x7c,0x14,0xda,0xaf,0x22,0x4f,0x48);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ac0e0f4d-acce-40c4-9b7c-14daaf224f48")
    INurbsPoint3dCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DPARAM STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DPARAM STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DPARAM STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DPARAM STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DPARAM STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPNURBSPOINT3DPARAM entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            LPNURBSPOINT3DPARAM entity,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            LPNURBSPOINT3DPARAM entity,
            LPNURBSPOINT3DPARAM base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPNURBSPOINT3DPARAM entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            LPNURBSPOINT3DPARAM entity,
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPNURBSPOINT3DPARAM entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INurbsPoint3dCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INurbsPoint3dCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INurbsPoint3dCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DPARAM ( STDMETHODCALLTYPE *First )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DPARAM ( STDMETHODCALLTYPE *Last )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DPARAM ( STDMETHODCALLTYPE *Next )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DPARAM ( STDMETHODCALLTYPE *Prev )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DPARAM ( STDMETHODCALLTYPE *GetByIndex )( 
            INurbsPoint3dCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            INurbsPoint3dCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            INurbsPoint3dCollection * This,
            LPNURBSPOINT3DPARAM entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            INurbsPoint3dCollection * This,
            LPNURBSPOINT3DPARAM entity,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            INurbsPoint3dCollection * This,
            LPNURBSPOINT3DPARAM entity,
            LPNURBSPOINT3DPARAM base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            INurbsPoint3dCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            INurbsPoint3dCollection * This,
            LPNURBSPOINT3DPARAM entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            INurbsPoint3dCollection * This,
            LPNURBSPOINT3DPARAM entity,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            INurbsPoint3dCollection * This,
            LPNURBSPOINT3DPARAM entity);
        
        END_INTERFACE
    } INurbsPoint3dCollectionVtbl;

    interface INurbsPoint3dCollection
    {
        CONST_VTBL struct INurbsPoint3dCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INurbsPoint3dCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INurbsPoint3dCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INurbsPoint3dCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INurbsPoint3dCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define INurbsPoint3dCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define INurbsPoint3dCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define INurbsPoint3dCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define INurbsPoint3dCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define INurbsPoint3dCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define INurbsPoint3dCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define INurbsPoint3dCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INurbsPoint3dCollection_Add(This,entity)	\
    ( (This)->lpVtbl -> Add(This,entity) ) 

#define INurbsPoint3dCollection_AddAt(This,entity,index)	\
    ( (This)->lpVtbl -> AddAt(This,entity,index) ) 

#define INurbsPoint3dCollection_AddBefore(This,entity,base)	\
    ( (This)->lpVtbl -> AddBefore(This,entity,base) ) 

#define INurbsPoint3dCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define INurbsPoint3dCollection_DetachByBody(This,entity)	\
    ( (This)->lpVtbl -> DetachByBody(This,entity) ) 

#define INurbsPoint3dCollection_SetByIndex(This,entity,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,entity,index) ) 

#define INurbsPoint3dCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INurbsPoint3dCollection_INTERFACE_DEFINED__ */


#ifndef __INurbsPoint3dCollCollection_INTERFACE_DEFINED__
#define __INurbsPoint3dCollCollection_INTERFACE_DEFINED__

/* interface INurbsPoint3dCollCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_INurbsPoint3dCollCollection,0xefeece8a,0x4bb9,0x4d51,0xb6,0xa4,0xac,0x1b,0xed,0xa7,0x35,0x68);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("efeece8a-4bb9-4d51-b6a4-ac1beda73568")
    INurbsPoint3dCollCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLECTION STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLECTION STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLECTION STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLECTION STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ LPNURBSPOINT3DCOLLECTION STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            LPNURBSPOINT3DCOLLECTION entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            LPNURBSPOINT3DCOLLECTION entity,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            LPNURBSPOINT3DCOLLECTION entity,
            LPNURBSPOINT3DCOLLECTION base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            LPNURBSPOINT3DCOLLECTION entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            LPNURBSPOINT3DCOLLECTION entity,
            long index) = 0;
        
        virtual /* [helpstring] */ unsigned long STDMETHODCALLTYPE FindIt( 
            LPNURBSPOINT3DCOLLECTION entity) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INurbsPoint3dCollCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INurbsPoint3dCollCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INurbsPoint3dCollCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLECTION ( STDMETHODCALLTYPE *First )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLECTION ( STDMETHODCALLTYPE *Last )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLECTION ( STDMETHODCALLTYPE *Next )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLECTION ( STDMETHODCALLTYPE *Prev )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ LPNURBSPOINT3DCOLLECTION ( STDMETHODCALLTYPE *GetByIndex )( 
            INurbsPoint3dCollCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            INurbsPoint3dCollCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            INurbsPoint3dCollCollection * This,
            LPNURBSPOINT3DCOLLECTION entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            INurbsPoint3dCollCollection * This,
            LPNURBSPOINT3DCOLLECTION entity,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            INurbsPoint3dCollCollection * This,
            LPNURBSPOINT3DCOLLECTION entity,
            LPNURBSPOINT3DCOLLECTION base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            INurbsPoint3dCollCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            INurbsPoint3dCollCollection * This,
            LPNURBSPOINT3DCOLLECTION entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            INurbsPoint3dCollCollection * This,
            LPNURBSPOINT3DCOLLECTION entity,
            long index);
        
        /* [helpstring] */ unsigned long ( STDMETHODCALLTYPE *FindIt )( 
            INurbsPoint3dCollCollection * This,
            LPNURBSPOINT3DCOLLECTION entity);
        
        END_INTERFACE
    } INurbsPoint3dCollCollectionVtbl;

    interface INurbsPoint3dCollCollection
    {
        CONST_VTBL struct INurbsPoint3dCollCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INurbsPoint3dCollCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INurbsPoint3dCollCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INurbsPoint3dCollCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INurbsPoint3dCollCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define INurbsPoint3dCollCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define INurbsPoint3dCollCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define INurbsPoint3dCollCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define INurbsPoint3dCollCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define INurbsPoint3dCollCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define INurbsPoint3dCollCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define INurbsPoint3dCollCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INurbsPoint3dCollCollection_Add(This,entity)	\
    ( (This)->lpVtbl -> Add(This,entity) ) 

#define INurbsPoint3dCollCollection_AddAt(This,entity,index)	\
    ( (This)->lpVtbl -> AddAt(This,entity,index) ) 

#define INurbsPoint3dCollCollection_AddBefore(This,entity,base)	\
    ( (This)->lpVtbl -> AddBefore(This,entity,base) ) 

#define INurbsPoint3dCollCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define INurbsPoint3dCollCollection_DetachByBody(This,entity)	\
    ( (This)->lpVtbl -> DetachByBody(This,entity) ) 

#define INurbsPoint3dCollCollection_SetByIndex(This,entity,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,entity,index) ) 

#define INurbsPoint3dCollCollection_FindIt(This,entity)	\
    ( (This)->lpVtbl -> FindIt(This,entity) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INurbsPoint3dCollCollection_INTERFACE_DEFINED__ */


#ifndef __INurbsKnotCollection_INTERFACE_DEFINED__
#define __INurbsKnotCollection_INTERFACE_DEFINED__

/* interface INurbsKnotCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_INurbsKnotCollection,0x1f21432c,0xe5ba,0x404d,0xb1,0x8f,0x00,0x7a,0x0d,0x85,0xcc,0xd0);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1f21432c-e5ba-404d-b18f-007a0d85ccd0")
    INurbsKnotCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Refresh( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE First( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE Last( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE Next( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE Prev( void) = 0;
        
        virtual /* [helpstring] */ double STDMETHODCALLTYPE GetByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE Add( 
            double entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddAt( 
            double entity,
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE AddBefore( 
            double entity,
            double base) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByIndex( 
            long index) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE DetachByBody( 
            double entity) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE SetByIndex( 
            double entity,
            long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INurbsKnotCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INurbsKnotCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INurbsKnotCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Refresh )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *First )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *Last )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *Next )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *Prev )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ double ( STDMETHODCALLTYPE *GetByIndex )( 
            INurbsKnotCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Clear )( 
            INurbsKnotCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *Add )( 
            INurbsKnotCollection * This,
            double entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddAt )( 
            INurbsKnotCollection * This,
            double entity,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *AddBefore )( 
            INurbsKnotCollection * This,
            double entity,
            double base);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByIndex )( 
            INurbsKnotCollection * This,
            long index);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *DetachByBody )( 
            INurbsKnotCollection * This,
            double entity);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *SetByIndex )( 
            INurbsKnotCollection * This,
            double entity,
            long index);
        
        END_INTERFACE
    } INurbsKnotCollectionVtbl;

    interface INurbsKnotCollection
    {
        CONST_VTBL struct INurbsKnotCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INurbsKnotCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INurbsKnotCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INurbsKnotCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INurbsKnotCollection_Refresh(This)	\
    ( (This)->lpVtbl -> Refresh(This) ) 

#define INurbsKnotCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define INurbsKnotCollection_First(This)	\
    ( (This)->lpVtbl -> First(This) ) 

#define INurbsKnotCollection_Last(This)	\
    ( (This)->lpVtbl -> Last(This) ) 

#define INurbsKnotCollection_Next(This)	\
    ( (This)->lpVtbl -> Next(This) ) 

#define INurbsKnotCollection_Prev(This)	\
    ( (This)->lpVtbl -> Prev(This) ) 

#define INurbsKnotCollection_GetByIndex(This,index)	\
    ( (This)->lpVtbl -> GetByIndex(This,index) ) 

#define INurbsKnotCollection_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define INurbsKnotCollection_Add(This,entity)	\
    ( (This)->lpVtbl -> Add(This,entity) ) 

#define INurbsKnotCollection_AddAt(This,entity,index)	\
    ( (This)->lpVtbl -> AddAt(This,entity,index) ) 

#define INurbsKnotCollection_AddBefore(This,entity,base)	\
    ( (This)->lpVtbl -> AddBefore(This,entity,base) ) 

#define INurbsKnotCollection_DetachByIndex(This,index)	\
    ( (This)->lpVtbl -> DetachByIndex(This,index) ) 

#define INurbsKnotCollection_DetachByBody(This,entity)	\
    ( (This)->lpVtbl -> DetachByBody(This,entity) ) 

#define INurbsKnotCollection_SetByIndex(This,entity,index)	\
    ( (This)->lpVtbl -> SetByIndex(This,entity,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INurbsKnotCollection_INTERFACE_DEFINED__ */


#ifndef __ICoordinate3dCollection_INTERFACE_DEFINED__
#define __ICoordinate3dCollection_INTERFACE_DEFINED__

/* interface ICoordinate3dCollection */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_ICoordinate3dCollection,0xA5E6E83E,0x1F33,0x4eaf,0xBA,0xFC,0xA3,0xF4,0x34,0xF2,0x3B,0xAA);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A5E6E83E-1F33-4eaf-BAFC-A3F434F23BAA")
    ICoordinate3dCollection : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetByIndex( 
            /* [in] */ long index,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE GetSafeArray( 
            /* [out] */ VARIANT *pArray) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICoordinate3dCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICoordinate3dCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICoordinate3dCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICoordinate3dCollection * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            ICoordinate3dCollection * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetByIndex )( 
            ICoordinate3dCollection * This,
            /* [in] */ long index,
            /* [out] */ double *x,
            /* [out] */ double *y,
            /* [out] */ double *z);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *GetSafeArray )( 
            ICoordinate3dCollection * This,
            /* [out] */ VARIANT *pArray);
        
        END_INTERFACE
    } ICoordinate3dCollectionVtbl;

    interface ICoordinate3dCollection
    {
        CONST_VTBL struct ICoordinate3dCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICoordinate3dCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICoordinate3dCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICoordinate3dCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICoordinate3dCollection_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define ICoordinate3dCollection_GetByIndex(This,index,x,y,z)	\
    ( (This)->lpVtbl -> GetByIndex(This,index,x,y,z) ) 

#define ICoordinate3dCollection_GetSafeArray(This,pArray)	\
    ( (This)->lpVtbl -> GetSafeArray(This,pArray) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICoordinate3dCollection_INTERFACE_DEFINED__ */


#ifndef __IIntersectionResult_INTERFACE_DEFINED__
#define __IIntersectionResult_INTERFACE_DEFINED__

/* interface IIntersectionResult */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IIntersectionResult,0x66CBDD80,0x332C,0x40b5,0x99,0x68,0xDD,0x90,0x2E,0xBA,0xB5,0x5D);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66CBDD80-332C-40b5-9968-DD902EBAB55D")
    IIntersectionResult : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetCount( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetIntersectionType( 
            long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IIntersectionResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IIntersectionResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IIntersectionResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IIntersectionResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetCount )( 
            IIntersectionResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetIntersectionType )( 
            IIntersectionResult * This,
            long index);
        
        END_INTERFACE
    } IIntersectionResultVtbl;

    interface IIntersectionResult
    {
        CONST_VTBL struct IIntersectionResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IIntersectionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IIntersectionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IIntersectionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IIntersectionResult_GetCount(This)	\
    ( (This)->lpVtbl -> GetCount(This) ) 

#define IIntersectionResult_GetIntersectionType(This,index)	\
    ( (This)->lpVtbl -> GetIntersectionType(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IIntersectionResult_INTERFACE_DEFINED__ */


#ifndef __IObject3DNotifyResult_INTERFACE_DEFINED__
#define __IObject3DNotifyResult_INTERFACE_DEFINED__

/* interface IObject3DNotifyResult */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IObject3DNotifyResult,0x6B04A0E4,0x837A,0x4151,0x8E,0x5A,0x83,0x65,0x17,0xF3,0x9E,0xAE);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6B04A0E4-837A-4151-8E5A-836517F39EAE")
    IObject3DNotifyResult : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetNotifyType( void) = 0;
        
        virtual /* [helpstring] */ IUnknown *STDMETHODCALLTYPE GetFeatureCollection( void) = 0;
        
        virtual /* [helpstring] */ IUnknown *STDMETHODCALLTYPE GetPlacement( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetProcessType( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsUndoMode( void) = 0;
        
        virtual /* [helpstring] */ BOOL STDMETHODCALLTYPE IsRedoMode( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObject3DNotifyResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObject3DNotifyResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IObject3DNotifyResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IObject3DNotifyResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetNotifyType )( 
            IObject3DNotifyResult * This);
        
        /* [helpstring] */ IUnknown *( STDMETHODCALLTYPE *GetFeatureCollection )( 
            IObject3DNotifyResult * This);
        
        /* [helpstring] */ IUnknown *( STDMETHODCALLTYPE *GetPlacement )( 
            IObject3DNotifyResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetProcessType )( 
            IObject3DNotifyResult * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsUndoMode )( 
            IObject3DNotifyResult * This);
        
        /* [helpstring] */ BOOL ( STDMETHODCALLTYPE *IsRedoMode )( 
            IObject3DNotifyResult * This);
        
        END_INTERFACE
    } IObject3DNotifyResultVtbl;

    interface IObject3DNotifyResult
    {
        CONST_VTBL struct IObject3DNotifyResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObject3DNotifyResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IObject3DNotifyResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObject3DNotifyResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObject3DNotifyResult_GetNotifyType(This)	\
    ( (This)->lpVtbl -> GetNotifyType(This) ) 

#define IObject3DNotifyResult_GetFeatureCollection(This)	\
    ( (This)->lpVtbl -> GetFeatureCollection(This) ) 

#define IObject3DNotifyResult_GetPlacement(This)	\
    ( (This)->lpVtbl -> GetPlacement(This) ) 

#define IObject3DNotifyResult_GetProcessType(This)	\
    ( (This)->lpVtbl -> GetProcessType(This) ) 

#define IObject3DNotifyResult_IsUndoMode(This)	\
    ( (This)->lpVtbl -> IsUndoMode(This) ) 

#define IObject3DNotifyResult_IsRedoMode(This)	\
    ( (This)->lpVtbl -> IsRedoMode(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObject3DNotifyResult_INTERFACE_DEFINED__ */


#ifndef __IDocument3DNotify_INTERFACE_DEFINED__
#define __IDocument3DNotify_INTERFACE_DEFINED__

/* interface IDocument3DNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDocument3DNotify,0xEE5B4795,0x6E76,0x49a2,0xBF,0xAD,0x9D,0x95,0x3D,0x82,0x77,0x1F);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE5B4795-6E76-49a2-BFAD-9D953D82771F")
    IDocument3DNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginRebuild( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Rebuild( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginChoiceMaterial( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChoiceMaterial( 
            LPCSTR material,
            double density) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginChoiceMarking( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChoiceMarking( 
            LPCSTR marking) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginSetPartFromFile( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginCreatePartFromFile( 
            VARIANT_BOOL typeDoc,
            LPENTITY plane) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateEmbodiment( 
            LPCSTR marking) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DeleteEmbodiment( 
            LPCSTR marking) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeCurrentEmbodiment( 
            LPCSTR marking) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginChoiceProperty( 
            LPUNKNOWN obj,
            double propID) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChoiceProperty( 
            LPUNKNOWN obj,
            double propID) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginRollbackFeatures( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE RollbackFeatures( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BedinLoadCombinationChange( 
            long index) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE LoadCombinationChange( 
            long index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDocument3DNotifyVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocument3DNotify * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IDocument3DNotify * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IDocument3DNotify * This);
        
        /* [id][funcdescattr] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IDocument3DNotify * This,
            /* [idldescattr] */ signed INT notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginRebuild )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Rebuild )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginChoiceMaterial )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChoiceMaterial )( 
            IDocument3DNotify * This,
            LPCSTR material,
            double density);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginChoiceMarking )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChoiceMarking )( 
            IDocument3DNotify * This,
            LPCSTR marking);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginSetPartFromFile )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginCreatePartFromFile )( 
            IDocument3DNotify * This,
            VARIANT_BOOL typeDoc,
            LPENTITY plane);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateEmbodiment )( 
            IDocument3DNotify * This,
            LPCSTR marking);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DeleteEmbodiment )( 
            IDocument3DNotify * This,
            LPCSTR marking);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeCurrentEmbodiment )( 
            IDocument3DNotify * This,
            LPCSTR marking);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginChoiceProperty )( 
            IDocument3DNotify * This,
            LPUNKNOWN obj,
            double propID);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChoiceProperty )( 
            IDocument3DNotify * This,
            LPUNKNOWN obj,
            double propID);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginRollbackFeatures )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *RollbackFeatures )( 
            IDocument3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BedinLoadCombinationChange )( 
            IDocument3DNotify * This,
            long index);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *LoadCombinationChange )( 
            IDocument3DNotify * This,
            long index);
        
        END_INTERFACE
    } IDocument3DNotifyVtbl;

    interface IDocument3DNotify
    {
        CONST_VTBL struct IDocument3DNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocument3DNotify_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IDocument3DNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocument3DNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocument3DNotify_IsNotifyProcess(This,notifyType)	\
    ( (This)->lpVtbl -> IsNotifyProcess(This,notifyType) ) 


#define IDocument3DNotify_BeginRebuild(This)	\
    ( (This)->lpVtbl -> BeginRebuild(This) ) 

#define IDocument3DNotify_Rebuild(This)	\
    ( (This)->lpVtbl -> Rebuild(This) ) 

#define IDocument3DNotify_BeginChoiceMaterial(This)	\
    ( (This)->lpVtbl -> BeginChoiceMaterial(This) ) 

#define IDocument3DNotify_ChoiceMaterial(This,material,density)	\
    ( (This)->lpVtbl -> ChoiceMaterial(This,material,density) ) 

#define IDocument3DNotify_BeginChoiceMarking(This)	\
    ( (This)->lpVtbl -> BeginChoiceMarking(This) ) 

#define IDocument3DNotify_ChoiceMarking(This,marking)	\
    ( (This)->lpVtbl -> ChoiceMarking(This,marking) ) 

#define IDocument3DNotify_BeginSetPartFromFile(This)	\
    ( (This)->lpVtbl -> BeginSetPartFromFile(This) ) 

#define IDocument3DNotify_BeginCreatePartFromFile(This,typeDoc,plane)	\
    ( (This)->lpVtbl -> BeginCreatePartFromFile(This,typeDoc,plane) ) 

#define IDocument3DNotify_CreateEmbodiment(This,marking)	\
    ( (This)->lpVtbl -> CreateEmbodiment(This,marking) ) 

#define IDocument3DNotify_DeleteEmbodiment(This,marking)	\
    ( (This)->lpVtbl -> DeleteEmbodiment(This,marking) ) 

#define IDocument3DNotify_ChangeCurrentEmbodiment(This,marking)	\
    ( (This)->lpVtbl -> ChangeCurrentEmbodiment(This,marking) ) 

#define IDocument3DNotify_BeginChoiceProperty(This,obj,propID)	\
    ( (This)->lpVtbl -> BeginChoiceProperty(This,obj,propID) ) 

#define IDocument3DNotify_ChoiceProperty(This,obj,propID)	\
    ( (This)->lpVtbl -> ChoiceProperty(This,obj,propID) ) 

#define IDocument3DNotify_BeginRollbackFeatures(This)	\
    ( (This)->lpVtbl -> BeginRollbackFeatures(This) ) 

#define IDocument3DNotify_RollbackFeatures(This)	\
    ( (This)->lpVtbl -> RollbackFeatures(This) ) 

#define IDocument3DNotify_BedinLoadCombinationChange(This,index)	\
    ( (This)->lpVtbl -> BedinLoadCombinationChange(This,index) ) 

#define IDocument3DNotify_LoadCombinationChange(This,index)	\
    ( (This)->lpVtbl -> LoadCombinationChange(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocument3DNotify_INTERFACE_DEFINED__ */


#ifndef __IObject3DNotify_INTERFACE_DEFINED__
#define __IObject3DNotify_INTERFACE_DEFINED__

/* interface IObject3DNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IObject3DNotify,0x7B4657BB,0x68D9,0x4ca8,0xBA,0x81,0x52,0xC1,0xD5,0xC9,0x69,0x43);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B4657BB-68D9-4ca8-BA81-52C1D5C96943")
    IObject3DNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginDelete( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Delete( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Excluded( 
            IUnknown *obj,
            VARIANT_BOOL exclude) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Hidden( 
            IUnknown *obj,
            VARIANT_BOOL _hidden) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginPropertyChanged( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE PropertyChanged( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginPlacementChanged( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE PlacementChanged( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginProcess( 
            long pType,
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndProcess( 
            long pType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateObject( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE UpdateObject( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginLoadStateChange( 
            IUnknown *obj,
            long loadState) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE LoadStateChange( 
            IUnknown *obj,
            long loadState) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IObject3DNotifyVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IObject3DNotify * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IObject3DNotify * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IObject3DNotify * This);
        
        /* [id][funcdescattr] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IObject3DNotify * This,
            /* [idldescattr] */ signed INT notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginDelete )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Delete )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Excluded )( 
            IObject3DNotify * This,
            IUnknown *obj,
            VARIANT_BOOL exclude);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Hidden )( 
            IObject3DNotify * This,
            IUnknown *obj,
            VARIANT_BOOL _hidden);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginPropertyChanged )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *PropertyChanged )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginPlacementChanged )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *PlacementChanged )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginProcess )( 
            IObject3DNotify * This,
            long pType,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndProcess )( 
            IObject3DNotify * This,
            long pType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateObject )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *UpdateObject )( 
            IObject3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginLoadStateChange )( 
            IObject3DNotify * This,
            IUnknown *obj,
            long loadState);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *LoadStateChange )( 
            IObject3DNotify * This,
            IUnknown *obj,
            long loadState);
        
        END_INTERFACE
    } IObject3DNotifyVtbl;

    interface IObject3DNotify
    {
        CONST_VTBL struct IObject3DNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IObject3DNotify_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IObject3DNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IObject3DNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IObject3DNotify_IsNotifyProcess(This,notifyType)	\
    ( (This)->lpVtbl -> IsNotifyProcess(This,notifyType) ) 


#define IObject3DNotify_BeginDelete(This,obj)	\
    ( (This)->lpVtbl -> BeginDelete(This,obj) ) 

#define IObject3DNotify_Delete(This,obj)	\
    ( (This)->lpVtbl -> Delete(This,obj) ) 

#define IObject3DNotify_Excluded(This,obj,exclude)	\
    ( (This)->lpVtbl -> Excluded(This,obj,exclude) ) 

#define IObject3DNotify_Hidden(This,obj,_hidden)	\
    ( (This)->lpVtbl -> Hidden(This,obj,_hidden) ) 

#define IObject3DNotify_BeginPropertyChanged(This,obj)	\
    ( (This)->lpVtbl -> BeginPropertyChanged(This,obj) ) 

#define IObject3DNotify_PropertyChanged(This,obj)	\
    ( (This)->lpVtbl -> PropertyChanged(This,obj) ) 

#define IObject3DNotify_BeginPlacementChanged(This,obj)	\
    ( (This)->lpVtbl -> BeginPlacementChanged(This,obj) ) 

#define IObject3DNotify_PlacementChanged(This,obj)	\
    ( (This)->lpVtbl -> PlacementChanged(This,obj) ) 

#define IObject3DNotify_BeginProcess(This,pType,obj)	\
    ( (This)->lpVtbl -> BeginProcess(This,pType,obj) ) 

#define IObject3DNotify_EndProcess(This,pType)	\
    ( (This)->lpVtbl -> EndProcess(This,pType) ) 

#define IObject3DNotify_CreateObject(This,obj)	\
    ( (This)->lpVtbl -> CreateObject(This,obj) ) 

#define IObject3DNotify_UpdateObject(This,obj)	\
    ( (This)->lpVtbl -> UpdateObject(This,obj) ) 

#define IObject3DNotify_BeginLoadStateChange(This,obj,loadState)	\
    ( (This)->lpVtbl -> BeginLoadStateChange(This,obj,loadState) ) 

#define IObject3DNotify_LoadStateChange(This,obj,loadState)	\
    ( (This)->lpVtbl -> LoadStateChange(This,obj,loadState) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IObject3DNotify_INTERFACE_DEFINED__ */


#ifndef __IDocument3DNotifyResult_INTERFACE_DEFINED__
#define __IDocument3DNotifyResult_INTERFACE_DEFINED__

/* interface IDocument3DNotifyResult */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IDocument3DNotifyResult,0x06C34A3C,0x2634,0x4f82,0xBC,0xE0,0xF3,0xD7,0x35,0x72,0x95,0x8C);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06C34A3C-2634-4f82-BCE0-F3D73572958C")
    IDocument3DNotifyResult : public IUnknown
    {
    public:
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetNotifyType( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetNotifyObjectType( void) = 0;
        
        virtual /* [helpstring] */ IUnknown *STDMETHODCALLTYPE GetNotifyObject( void) = 0;
        
        virtual /* [helpstring] */ long STDMETHODCALLTYPE GetRequestFilesType( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDocument3DNotifyResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDocument3DNotifyResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDocument3DNotifyResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDocument3DNotifyResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetNotifyType )( 
            IDocument3DNotifyResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetNotifyObjectType )( 
            IDocument3DNotifyResult * This);
        
        /* [helpstring] */ IUnknown *( STDMETHODCALLTYPE *GetNotifyObject )( 
            IDocument3DNotifyResult * This);
        
        /* [helpstring] */ long ( STDMETHODCALLTYPE *GetRequestFilesType )( 
            IDocument3DNotifyResult * This);
        
        END_INTERFACE
    } IDocument3DNotifyResultVtbl;

    interface IDocument3DNotifyResult
    {
        CONST_VTBL struct IDocument3DNotifyResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDocument3DNotifyResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDocument3DNotifyResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDocument3DNotifyResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDocument3DNotifyResult_GetNotifyType(This)	\
    ( (This)->lpVtbl -> GetNotifyType(This) ) 

#define IDocument3DNotifyResult_GetNotifyObjectType(This)	\
    ( (This)->lpVtbl -> GetNotifyObjectType(This) ) 

#define IDocument3DNotifyResult_GetNotifyObject(This)	\
    ( (This)->lpVtbl -> GetNotifyObject(This) ) 

#define IDocument3DNotifyResult_GetRequestFilesType(This)	\
    ( (This)->lpVtbl -> GetRequestFilesType(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDocument3DNotifyResult_INTERFACE_DEFINED__ */


#ifndef __IProcess3DNotify_INTERFACE_DEFINED__
#define __IProcess3DNotify_INTERFACE_DEFINED__

/* interface IProcess3DNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IProcess3DNotify,0x0712DCCC,0x83E0,0x429E,0xAB,0x8C,0x5B,0x25,0x5D,0xD3,0xC4,0xE4);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0712DCCC-83E0-429E-AB8C-5B255DD3C4E4")
    IProcess3DNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE PlacementChange( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ExecuteCommand( 
            long command) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Run( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Activate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE Deactivate( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE FilterObject( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateTakeObject( 
            IUnknown *obj) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndProcess( void) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ProcessingGroupObjects( 
            VARIANT groupObjects,
            long selectionType) = 0;
        
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE AbortProcess( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProcess3DNotifyVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProcess3DNotify * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IProcess3DNotify * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IProcess3DNotify * This);
        
        /* [id][funcdescattr] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IProcess3DNotify * This,
            /* [idldescattr] */ signed INT notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *PlacementChange )( 
            IProcess3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ExecuteCommand )( 
            IProcess3DNotify * This,
            long command);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Run )( 
            IProcess3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Stop )( 
            IProcess3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Activate )( 
            IProcess3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *Deactivate )( 
            IProcess3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *FilterObject )( 
            IProcess3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateTakeObject )( 
            IProcess3DNotify * This,
            IUnknown *obj);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndProcess )( 
            IProcess3DNotify * This);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ProcessingGroupObjects )( 
            IProcess3DNotify * This,
            VARIANT groupObjects,
            long selectionType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *AbortProcess )( 
            IProcess3DNotify * This);
        
        END_INTERFACE
    } IProcess3DNotifyVtbl;

    interface IProcess3DNotify
    {
        CONST_VTBL struct IProcess3DNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProcess3DNotify_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IProcess3DNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProcess3DNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProcess3DNotify_IsNotifyProcess(This,notifyType)	\
    ( (This)->lpVtbl -> IsNotifyProcess(This,notifyType) ) 


#define IProcess3DNotify_PlacementChange(This,obj)	\
    ( (This)->lpVtbl -> PlacementChange(This,obj) ) 

#define IProcess3DNotify_ExecuteCommand(This,command)	\
    ( (This)->lpVtbl -> ExecuteCommand(This,command) ) 

#define IProcess3DNotify_Run(This)	\
    ( (This)->lpVtbl -> Run(This) ) 

#define IProcess3DNotify_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IProcess3DNotify_Activate(This)	\
    ( (This)->lpVtbl -> Activate(This) ) 

#define IProcess3DNotify_Deactivate(This)	\
    ( (This)->lpVtbl -> Deactivate(This) ) 

#define IProcess3DNotify_FilterObject(This,obj)	\
    ( (This)->lpVtbl -> FilterObject(This,obj) ) 

#define IProcess3DNotify_CreateTakeObject(This,obj)	\
    ( (This)->lpVtbl -> CreateTakeObject(This,obj) ) 

#define IProcess3DNotify_EndProcess(This)	\
    ( (This)->lpVtbl -> EndProcess(This) ) 

#define IProcess3DNotify_ProcessingGroupObjects(This,groupObjects,selectionType)	\
    ( (This)->lpVtbl -> ProcessingGroupObjects(This,groupObjects,selectionType) ) 

#define IProcess3DNotify_AbortProcess(This)	\
    ( (This)->lpVtbl -> AbortProcess(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProcess3DNotify_INTERFACE_DEFINED__ */


#ifndef __IProcess3DManipulatorsNotify_INTERFACE_DEFINED__
#define __IProcess3DManipulatorsNotify_INTERFACE_DEFINED__

/* interface IProcess3DManipulatorsNotify */
/* [object][hidden][helpstring][uuid] */ 


DEFINE_GUID(IID_IProcess3DManipulatorsNotify,0x45B82B5C,0xD0B7,0x4AC5,0x96,0x5C,0x26,0xB0,0x96,0x12,0xCB,0xF6);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45B82B5C-D0B7-4AC5-965C-26B09612CBF6")
    IProcess3DManipulatorsNotify : public IKompasNotify
    {
    public:
        virtual /* [helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE RotateManipulator( 
            /* [in] */ long ManipulatorId,
            /* [in] */ double X0,
            /* [in] */ double Y0,
            /* [in] */ double Z0,
            /* [in] */ double AxisZX,
            /* [in] */ double AxisZXY,
            /* [in] */ double AxisZZ,
            /* [in] */ double Angle,
            /* [in] */ VARIANT_BOOL FromEdit) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE MoveManipulator( 
            /* [in] */ long ManipulatorId,
            /* [in] */ double VX,
            /* [in] */ double VY,
            /* [in] */ double VZ,
            /* [in] */ double Delta,
            /* [in] */ VARIANT_BOOL FromEdit) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ClickManipulatorPrimitive( 
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType,
            /* [in] */ VARIANT_BOOL DoubleClick) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE BeginDragManipulator( 
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE EndDragManipulator( 
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE CreateManipulatorEdit( 
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE DestroyManipulatorEdit( 
            /* [in] */ long ManipulatorId) = 0;
        
        virtual /* [helpcontext][helpstring] */ VARIANT_BOOL STDMETHODCALLTYPE ChangeManipulatorValue( 
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType,
            /* [in] */ double newValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IProcess3DManipulatorsNotifyVtbl
    {
        BEGIN_INTERFACE
        
        /* [id][restricted][funcdescattr] */ HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IProcess3DManipulatorsNotify * This,
            /* [in][idldescattr] */ struct GUID *riid,
            /* [out][idldescattr] */ void **ppvObj);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *AddRef )( 
            IProcess3DManipulatorsNotify * This);
        
        /* [id][restricted][funcdescattr] */ unsigned long ( STDMETHODCALLTYPE *Release )( 
            IProcess3DManipulatorsNotify * This);
        
        /* [id][funcdescattr] */ VARIANT_BOOL ( STDMETHODCALLTYPE *IsNotifyProcess )( 
            IProcess3DManipulatorsNotify * This,
            /* [idldescattr] */ signed INT notifyType);
        
        /* [helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *RotateManipulator )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ double X0,
            /* [in] */ double Y0,
            /* [in] */ double Z0,
            /* [in] */ double AxisZX,
            /* [in] */ double AxisZXY,
            /* [in] */ double AxisZZ,
            /* [in] */ double Angle,
            /* [in] */ VARIANT_BOOL FromEdit);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *MoveManipulator )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ double VX,
            /* [in] */ double VY,
            /* [in] */ double VZ,
            /* [in] */ double Delta,
            /* [in] */ VARIANT_BOOL FromEdit);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ClickManipulatorPrimitive )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType,
            /* [in] */ VARIANT_BOOL DoubleClick);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *BeginDragManipulator )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *EndDragManipulator )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *CreateManipulatorEdit )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *DestroyManipulatorEdit )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId);
        
        /* [helpcontext][helpstring] */ VARIANT_BOOL ( STDMETHODCALLTYPE *ChangeManipulatorValue )( 
            IProcess3DManipulatorsNotify * This,
            /* [in] */ long ManipulatorId,
            /* [in] */ long PrimitiveType,
            /* [in] */ double newValue);
        
        END_INTERFACE
    } IProcess3DManipulatorsNotifyVtbl;

    interface IProcess3DManipulatorsNotify
    {
        CONST_VTBL struct IProcess3DManipulatorsNotifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IProcess3DManipulatorsNotify_QueryInterface(This,riid,ppvObj)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObj) ) 

#define IProcess3DManipulatorsNotify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IProcess3DManipulatorsNotify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IProcess3DManipulatorsNotify_IsNotifyProcess(This,notifyType)	\
    ( (This)->lpVtbl -> IsNotifyProcess(This,notifyType) ) 


#define IProcess3DManipulatorsNotify_RotateManipulator(This,ManipulatorId,X0,Y0,Z0,AxisZX,AxisZXY,AxisZZ,Angle,FromEdit)	\
    ( (This)->lpVtbl -> RotateManipulator(This,ManipulatorId,X0,Y0,Z0,AxisZX,AxisZXY,AxisZZ,Angle,FromEdit) ) 

#define IProcess3DManipulatorsNotify_MoveManipulator(This,ManipulatorId,VX,VY,VZ,Delta,FromEdit)	\
    ( (This)->lpVtbl -> MoveManipulator(This,ManipulatorId,VX,VY,VZ,Delta,FromEdit) ) 

#define IProcess3DManipulatorsNotify_ClickManipulatorPrimitive(This,ManipulatorId,PrimitiveType,DoubleClick)	\
    ( (This)->lpVtbl -> ClickManipulatorPrimitive(This,ManipulatorId,PrimitiveType,DoubleClick) ) 

#define IProcess3DManipulatorsNotify_BeginDragManipulator(This,ManipulatorId,PrimitiveType)	\
    ( (This)->lpVtbl -> BeginDragManipulator(This,ManipulatorId,PrimitiveType) ) 

#define IProcess3DManipulatorsNotify_EndDragManipulator(This,ManipulatorId,PrimitiveType)	\
    ( (This)->lpVtbl -> EndDragManipulator(This,ManipulatorId,PrimitiveType) ) 

#define IProcess3DManipulatorsNotify_CreateManipulatorEdit(This,ManipulatorId,PrimitiveType)	\
    ( (This)->lpVtbl -> CreateManipulatorEdit(This,ManipulatorId,PrimitiveType) ) 

#define IProcess3DManipulatorsNotify_DestroyManipulatorEdit(This,ManipulatorId)	\
    ( (This)->lpVtbl -> DestroyManipulatorEdit(This,ManipulatorId) ) 

#define IProcess3DManipulatorsNotify_ChangeManipulatorValue(This,ManipulatorId,PrimitiveType,newValue)	\
    ( (This)->lpVtbl -> ChangeManipulatorValue(This,ManipulatorId,PrimitiveType,newValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IProcess3DManipulatorsNotify_INTERFACE_DEFINED__ */

#endif /* __Kompas6API3D5COM_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


