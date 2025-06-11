

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for D:/shared/workspace/KOMPAS/_RELEASES/releases-v21-x86/KOMPAS/Source/2D/00550_Sys6/ConvertLibInterfaces.odl:
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


#ifndef __ConvertLibIntDual_h__
#define __ConvertLibIntDual_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKompasConverter_FWD_DEFINED__
#define __IKompasConverter_FWD_DEFINED__
typedef interface IKompasConverter IKompasConverter;

#endif 	/* __IKompasConverter_FWD_DEFINED__ */


#ifndef __IExternalElementsBase_FWD_DEFINED__
#define __IExternalElementsBase_FWD_DEFINED__
typedef interface IExternalElementsBase IExternalElementsBase;

#endif 	/* __IExternalElementsBase_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __CONVERTLIBINTERFACES_LIBRARY_DEFINED__
#define __CONVERTLIBINTERFACES_LIBRARY_DEFINED__

/* library CONVERTLIBINTERFACES */
/* [helpfile][version][uuid] */ 


typedef IKompasConverter *LPKOMPASCONVERTER;

//-------------------------------------------------------------------------------
// ksExecuteCommandResult - Результат выполнения команды.
// ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("6407B871-E8AE-44EE-ACDF-5DE3F928FA3B") 
enum _ksExecuteCommandResult
    {
        ksECRSuccess	= 0,
        ksECRNeedRefreshTree	= 0x1,
        ksECRRepeatCommand	= 0x2,
        ksECRChangeSection	= 0x4
    } 	ksExecuteCommandResult;


DEFINE_GUID(LIBID_CONVERTLIBINTERFACES,0xBC89C6E1,0x8016,0x429c,0xA0,0x93,0x30,0x0B,0x3F,0x18,0xDB,0x21);

#ifndef __IKompasConverter_INTERFACE_DEFINED__
#define __IKompasConverter_INTERFACE_DEFINED__

/* interface IKompasConverter */
/* [object][helpstring][nonextensible][unique][dual][oleautomation][uuid] */ 


DEFINE_GUID(IID_IKompasConverter,0x735140E9,0xF6B5,0x42e9,0x90,0x08,0x71,0x73,0x0C,0x61,0x70,0x67);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("735140E9-F6B5-42e9-9008-71730C617067")
    IKompasConverter : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ConverterParameters( 
            /* [in] */ long command,
            /* [retval][out] */ IUnknown **iParam) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CanUnloadLibrary( 
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetFilter( 
            /* [in] */ long docType,
            /* [in] */ VARIANT_BOOL saveAs,
            /* [out] */ long *command,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Convert( 
            /* [in] */ BSTR inputFile,
            /* [in] */ BSTR outfile,
            /* [in] */ long command,
            /* [in] */ VARIANT_BOOL showParam,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE VisualEditConvertParam( 
            /* [in] */ /* external definition not present */ OLE_HANDLE parentHwnd,
            /* [in] */ long command,
            /* [retval][out] */ VARIANT_BOOL *val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKompasConverterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKompasConverter * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKompasConverter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKompasConverter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKompasConverter * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKompasConverter * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKompasConverter * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKompasConverter * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ConverterParameters )( 
            IKompasConverter * This,
            /* [in] */ long command,
            /* [retval][out] */ IUnknown **iParam);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CanUnloadLibrary )( 
            IKompasConverter * This,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetFilter )( 
            IKompasConverter * This,
            /* [in] */ long docType,
            /* [in] */ VARIANT_BOOL saveAs,
            /* [out] */ long *command,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Convert )( 
            IKompasConverter * This,
            /* [in] */ BSTR inputFile,
            /* [in] */ BSTR outfile,
            /* [in] */ long command,
            /* [in] */ VARIANT_BOOL showParam,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *VisualEditConvertParam )( 
            IKompasConverter * This,
            /* [in] */ /* external definition not present */ OLE_HANDLE parentHwnd,
            /* [in] */ long command,
            /* [retval][out] */ VARIANT_BOOL *val);
        
        END_INTERFACE
    } IKompasConverterVtbl;

    interface IKompasConverter
    {
        CONST_VTBL struct IKompasConverterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKompasConverter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKompasConverter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKompasConverter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKompasConverter_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IKompasConverter_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IKompasConverter_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IKompasConverter_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IKompasConverter_ConverterParameters(This,command,iParam)	\
    ( (This)->lpVtbl -> ConverterParameters(This,command,iParam) ) 

#define IKompasConverter_get_CanUnloadLibrary(This,val)	\
    ( (This)->lpVtbl -> get_CanUnloadLibrary(This,val) ) 

#define IKompasConverter_GetFilter(This,docType,saveAs,command,Result)	\
    ( (This)->lpVtbl -> GetFilter(This,docType,saveAs,command,Result) ) 

#define IKompasConverter_Convert(This,inputFile,outfile,command,showParam,Result)	\
    ( (This)->lpVtbl -> Convert(This,inputFile,outfile,command,showParam,Result) ) 

#define IKompasConverter_VisualEditConvertParam(This,parentHwnd,command,val)	\
    ( (This)->lpVtbl -> VisualEditConvertParam(This,parentHwnd,command,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKompasConverter_INTERFACE_DEFINED__ */


#ifndef __IExternalElementsBase_INTERFACE_DEFINED__
#define __IExternalElementsBase_INTERFACE_DEFINED__

/* interface IExternalElementsBase */
/* [object][helpstring][nonextensible][unique][dual][oleautomation][uuid] */ 


DEFINE_GUID(IID_IExternalElementsBase,0xA4FBAA00,0xBAA1,0x4D26,0xAF,0xF3,0x91,0xB3,0xFB,0xC7,0x6F,0x13);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A4FBAA00-BAA1-4D26-AFF3-91B3FBC76F13")
    IExternalElementsBase : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Sections( 
            /* [retval][out] */ VARIANT *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentSection( 
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CurrentSection( 
            /* [in] */ BSTR NewVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ElementsTree( 
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CurrentNode( 
            /* [retval][out] */ BSTR *NodeId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OnSelectNode( 
            /* [in] */ BSTR NodeId,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLibPropertyObject( 
            /* [retval][out] */ IUnknown **Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TreeImageList( 
            /* [in] */ long Size,
            /* [retval][out] */ VARIANT *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ToolBarId( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCommandState( 
            /* [in] */ long CommandID,
            /* [out] */ VARIANT_BOOL *Enable,
            /* [out] */ VARIANT_BOOL *Checked,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExecuteCommand( 
            /* [in] */ long CommandID,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMenuId( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DrawElement( 
            /* [in] */ /* external definition not present */ OLE_HANDLE HWnd,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Note( 
            /* [retval][out] */ BSTR *Result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IExternalElementsBaseVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExternalElementsBase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExternalElementsBase * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExternalElementsBase * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IExternalElementsBase * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IExternalElementsBase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IExternalElementsBase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IExternalElementsBase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IExternalElementsBase * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Sections )( 
            IExternalElementsBase * This,
            /* [retval][out] */ VARIANT *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentSection )( 
            IExternalElementsBase * This,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CurrentSection )( 
            IExternalElementsBase * This,
            /* [in] */ BSTR NewVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ElementsTree )( 
            IExternalElementsBase * This,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CurrentNode )( 
            IExternalElementsBase * This,
            /* [retval][out] */ BSTR *NodeId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OnSelectNode )( 
            IExternalElementsBase * This,
            /* [in] */ BSTR NodeId,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLibPropertyObject )( 
            IExternalElementsBase * This,
            /* [retval][out] */ IUnknown **Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TreeImageList )( 
            IExternalElementsBase * This,
            /* [in] */ long Size,
            /* [retval][out] */ VARIANT *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ToolBarId )( 
            IExternalElementsBase * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCommandState )( 
            IExternalElementsBase * This,
            /* [in] */ long CommandID,
            /* [out] */ VARIANT_BOOL *Enable,
            /* [out] */ VARIANT_BOOL *Checked,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExecuteCommand )( 
            IExternalElementsBase * This,
            /* [in] */ long CommandID,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMenuId )( 
            IExternalElementsBase * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DrawElement )( 
            IExternalElementsBase * This,
            /* [in] */ /* external definition not present */ OLE_HANDLE HWnd,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Note )( 
            IExternalElementsBase * This,
            /* [retval][out] */ BSTR *Result);
        
        END_INTERFACE
    } IExternalElementsBaseVtbl;

    interface IExternalElementsBase
    {
        CONST_VTBL struct IExternalElementsBaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExternalElementsBase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IExternalElementsBase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IExternalElementsBase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IExternalElementsBase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IExternalElementsBase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IExternalElementsBase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IExternalElementsBase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IExternalElementsBase_get_Version(This,Result)	\
    ( (This)->lpVtbl -> get_Version(This,Result) ) 

#define IExternalElementsBase_get_Sections(This,Result)	\
    ( (This)->lpVtbl -> get_Sections(This,Result) ) 

#define IExternalElementsBase_get_CurrentSection(This,Result)	\
    ( (This)->lpVtbl -> get_CurrentSection(This,Result) ) 

#define IExternalElementsBase_put_CurrentSection(This,NewVal)	\
    ( (This)->lpVtbl -> put_CurrentSection(This,NewVal) ) 

#define IExternalElementsBase_get_ElementsTree(This,Result)	\
    ( (This)->lpVtbl -> get_ElementsTree(This,Result) ) 

#define IExternalElementsBase_get_CurrentNode(This,NodeId)	\
    ( (This)->lpVtbl -> get_CurrentNode(This,NodeId) ) 

#define IExternalElementsBase_OnSelectNode(This,NodeId,Result)	\
    ( (This)->lpVtbl -> OnSelectNode(This,NodeId,Result) ) 

#define IExternalElementsBase_GetLibPropertyObject(This,Result)	\
    ( (This)->lpVtbl -> GetLibPropertyObject(This,Result) ) 

#define IExternalElementsBase_get_TreeImageList(This,Size,Result)	\
    ( (This)->lpVtbl -> get_TreeImageList(This,Size,Result) ) 

#define IExternalElementsBase_get_ToolBarId(This,Result)	\
    ( (This)->lpVtbl -> get_ToolBarId(This,Result) ) 

#define IExternalElementsBase_GetCommandState(This,CommandID,Enable,Checked,Result)	\
    ( (This)->lpVtbl -> GetCommandState(This,CommandID,Enable,Checked,Result) ) 

#define IExternalElementsBase_ExecuteCommand(This,CommandID,Result)	\
    ( (This)->lpVtbl -> ExecuteCommand(This,CommandID,Result) ) 

#define IExternalElementsBase_GetMenuId(This,Result)	\
    ( (This)->lpVtbl -> GetMenuId(This,Result) ) 

#define IExternalElementsBase_DrawElement(This,HWnd,Result)	\
    ( (This)->lpVtbl -> DrawElement(This,HWnd,Result) ) 

#define IExternalElementsBase_get_Note(This,Result)	\
    ( (This)->lpVtbl -> get_Note(This,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IExternalElementsBase_INTERFACE_DEFINED__ */

#endif /* __CONVERTLIBINTERFACES_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


