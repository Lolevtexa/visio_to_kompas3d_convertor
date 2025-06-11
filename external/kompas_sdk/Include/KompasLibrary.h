

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 06:14:07 2038
 */
/* Compiler settings for D:/shared/workspace/KOMPAS/_RELEASES/releases-v21-x86/KOMPAS/Source/2D/00550_Sys6/KompasLibrary.odl:
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


#ifndef __KompasLibrary_h__
#define __KompasLibrary_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IKompasLibrary_FWD_DEFINED__
#define __IKompasLibrary_FWD_DEFINED__
typedef interface IKompasLibrary IKompasLibrary;

#endif 	/* __IKompasLibrary_FWD_DEFINED__ */


#ifndef __IKompasLibraryMenu_FWD_DEFINED__
#define __IKompasLibraryMenu_FWD_DEFINED__
typedef interface IKompasLibraryMenu IKompasLibraryMenu;

#endif 	/* __IKompasLibraryMenu_FWD_DEFINED__ */


#ifndef __ksKompasLibrary_FWD_DEFINED__
#define __ksKompasLibrary_FWD_DEFINED__
typedef interface ksKompasLibrary ksKompasLibrary;

#endif 	/* __ksKompasLibrary_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __KompasLibrary_LIBRARY_DEFINED__
#define __KompasLibrary_LIBRARY_DEFINED__

/* library KompasLibrary */
/* [helpfile][version][uuid] */ 


typedef IKompasLibrary *LPKOMPASLIBRARY;

  //-------------------------------------------------------------------------------
  // Идентификаторы функций приложений Компас 3D
  // ---
typedef /* [v1_enum][helpstring][uuid] */  DECLSPEC_UUID("35EB4ACC-77AE-4F84-907A-E84D0BE5D46F") 
enum _ksKompasLibraryFunctionEnum
    {
        ksLFVersion	= 17001,
        ksLFIsFunctionEnable	= 17002,
        ksLFLibraryName	= 17003,
        ksLFDisplayLibraryName	= 17004,
        ksLFLibraryHelpFile	= 17005,
        ksLFProtectNumber	= 17006,
        ksLFRunLibraryCommand	= 17007,
        ksLFIsOnApplication7	= 17008,
        ksLFInitLibrary	= 17009,
        ksLFBeginUnloadLibrary	= 17010,
        ksLFFillLibraryMenu	= 17011,
        ksLFGetLibraryCommandState	= 17012,
        ksLFGetDisableReason	= 17013,
        ksLFFillContextPanel	= 17014,
        ksLFContextPanelStyleComboChanged	= 17015,
        ksLFGetKompasConverter	= 17016,
        ksLFCreateMacroFromSample	= 17017
    } 	ksKompasLibraryFunctionEnum;


DEFINE_GUID(LIBID_KompasLibrary,0xC1633829,0x7BB0,0x4E69,0x8E,0xD4,0x04,0x3A,0xDB,0x7E,0x80,0x90);

#ifndef __IKompasLibrary_INTERFACE_DEFINED__
#define __IKompasLibrary_INTERFACE_DEFINED__

/* interface IKompasLibrary */
/* [object][helpstring][nonextensible][unique][dual][oleautomation][uuid] */ 


DEFINE_GUID(IID_IKompasLibrary,0x025A21B0,0x0192,0x4A7C,0xA3,0xF0,0xCA,0x54,0xAA,0xA4,0xFA,0xDB);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("025A21B0-0192-4A7C-A3F0-CA54AAA4FADB")
    IKompasLibrary : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFunctionEnable( 
            /* [in] */ ksKompasLibraryFunctionEnum FunctionID,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LibraryName( 
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayLibraryName( 
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LibraryHelpFile( 
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtectNumber( 
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RunLibraryCommand( 
            /* [in] */ long Command,
            /* [in] */ long DemoMode,
            /* [retval][out] */ long *Result) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsOnApplication7( 
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitLibrary( 
            /* [in] */ LPDISPATCH ApplicationInterface,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BeginUnloadLibrary( 
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FillLibraryMenu( 
            /* [in] */ IKompasLibraryMenu *Menu,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLibraryCommandState( 
            /* [in] */ long Command,
            /* [out] */ VARIANT_BOOL *Enable,
            /* [out] */ long *Checked,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDisableReason( 
            /* [in] */ long Command,
            /* [retval][out] */ BSTR *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FillContextPanel( 
            /* [in] */ LPDISPATCH ContextPanel,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ContextPanelStyleComboChanged( 
            /* [in] */ BSTR StyleComboID,
            /* [in] */ long styleType,
            /* [in] */ long newValue,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetKompasConverter( 
            /* [retval][out] */ LPDISPATCH *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateMacroFromSample( 
            /* [in] */ long MacroReference,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKompasLibraryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKompasLibrary * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKompasLibrary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKompasLibrary * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKompasLibrary * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKompasLibrary * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKompasLibrary * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKompasLibrary * This,
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
            IKompasLibrary * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFunctionEnable )( 
            IKompasLibrary * This,
            /* [in] */ ksKompasLibraryFunctionEnum FunctionID,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LibraryName )( 
            IKompasLibrary * This,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayLibraryName )( 
            IKompasLibrary * This,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LibraryHelpFile )( 
            IKompasLibrary * This,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtectNumber )( 
            IKompasLibrary * This,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RunLibraryCommand )( 
            IKompasLibrary * This,
            /* [in] */ long Command,
            /* [in] */ long DemoMode,
            /* [retval][out] */ long *Result);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsOnApplication7 )( 
            IKompasLibrary * This,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitLibrary )( 
            IKompasLibrary * This,
            /* [in] */ LPDISPATCH ApplicationInterface,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BeginUnloadLibrary )( 
            IKompasLibrary * This,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FillLibraryMenu )( 
            IKompasLibrary * This,
            /* [in] */ IKompasLibraryMenu *Menu,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLibraryCommandState )( 
            IKompasLibrary * This,
            /* [in] */ long Command,
            /* [out] */ VARIANT_BOOL *Enable,
            /* [out] */ long *Checked,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDisableReason )( 
            IKompasLibrary * This,
            /* [in] */ long Command,
            /* [retval][out] */ BSTR *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FillContextPanel )( 
            IKompasLibrary * This,
            /* [in] */ LPDISPATCH ContextPanel,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ContextPanelStyleComboChanged )( 
            IKompasLibrary * This,
            /* [in] */ BSTR StyleComboID,
            /* [in] */ long styleType,
            /* [in] */ long newValue,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetKompasConverter )( 
            IKompasLibrary * This,
            /* [retval][out] */ LPDISPATCH *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateMacroFromSample )( 
            IKompasLibrary * This,
            /* [in] */ long MacroReference,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        END_INTERFACE
    } IKompasLibraryVtbl;

    interface IKompasLibrary
    {
        CONST_VTBL struct IKompasLibraryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKompasLibrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKompasLibrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKompasLibrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKompasLibrary_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IKompasLibrary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IKompasLibrary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IKompasLibrary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IKompasLibrary_get_Version(This,Result)	\
    ( (This)->lpVtbl -> get_Version(This,Result) ) 

#define IKompasLibrary_get_IsFunctionEnable(This,FunctionID,Result)	\
    ( (This)->lpVtbl -> get_IsFunctionEnable(This,FunctionID,Result) ) 

#define IKompasLibrary_get_LibraryName(This,Result)	\
    ( (This)->lpVtbl -> get_LibraryName(This,Result) ) 

#define IKompasLibrary_get_DisplayLibraryName(This,Result)	\
    ( (This)->lpVtbl -> get_DisplayLibraryName(This,Result) ) 

#define IKompasLibrary_get_LibraryHelpFile(This,Result)	\
    ( (This)->lpVtbl -> get_LibraryHelpFile(This,Result) ) 

#define IKompasLibrary_get_ProtectNumber(This,Result)	\
    ( (This)->lpVtbl -> get_ProtectNumber(This,Result) ) 

#define IKompasLibrary_RunLibraryCommand(This,Command,DemoMode,Result)	\
    ( (This)->lpVtbl -> RunLibraryCommand(This,Command,DemoMode,Result) ) 

#define IKompasLibrary_get_IsOnApplication7(This,Result)	\
    ( (This)->lpVtbl -> get_IsOnApplication7(This,Result) ) 

#define IKompasLibrary_InitLibrary(This,ApplicationInterface,Result)	\
    ( (This)->lpVtbl -> InitLibrary(This,ApplicationInterface,Result) ) 

#define IKompasLibrary_BeginUnloadLibrary(This,Result)	\
    ( (This)->lpVtbl -> BeginUnloadLibrary(This,Result) ) 

#define IKompasLibrary_FillLibraryMenu(This,Menu,Result)	\
    ( (This)->lpVtbl -> FillLibraryMenu(This,Menu,Result) ) 

#define IKompasLibrary_GetLibraryCommandState(This,Command,Enable,Checked,Result)	\
    ( (This)->lpVtbl -> GetLibraryCommandState(This,Command,Enable,Checked,Result) ) 

#define IKompasLibrary_GetDisableReason(This,Command,Result)	\
    ( (This)->lpVtbl -> GetDisableReason(This,Command,Result) ) 

#define IKompasLibrary_FillContextPanel(This,ContextPanel,Result)	\
    ( (This)->lpVtbl -> FillContextPanel(This,ContextPanel,Result) ) 

#define IKompasLibrary_ContextPanelStyleComboChanged(This,StyleComboID,styleType,newValue,Result)	\
    ( (This)->lpVtbl -> ContextPanelStyleComboChanged(This,StyleComboID,styleType,newValue,Result) ) 

#define IKompasLibrary_GetKompasConverter(This,Result)	\
    ( (This)->lpVtbl -> GetKompasConverter(This,Result) ) 

#define IKompasLibrary_CreateMacroFromSample(This,MacroReference,Result)	\
    ( (This)->lpVtbl -> CreateMacroFromSample(This,MacroReference,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKompasLibrary_INTERFACE_DEFINED__ */


#ifndef __IKompasLibraryMenu_INTERFACE_DEFINED__
#define __IKompasLibraryMenu_INTERFACE_DEFINED__

/* interface IKompasLibraryMenu */
/* [helpstring][nonextensible][unique][dual][oleautomation][uuid][object] */ 


DEFINE_GUID(IID_IKompasLibraryMenu,0xC35D07D7,0x0248,0x40C5,0xA3,0x35,0x1D,0x4F,0xF1,0x61,0x0F,0x0A);

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C35D07D7-0248-40C5-A335-1D4FF1610F0A")
    IKompasLibraryMenu : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddMenuCommand( 
            /* [in] */ long Id,
            /* [in] */ BSTR Title,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSeparator( 
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddSubMenu( 
            /* [in] */ BSTR Title,
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EndSubMenu( 
            /* [retval][out] */ VARIANT_BOOL *Result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IKompasLibraryMenuVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IKompasLibraryMenu * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IKompasLibraryMenu * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IKompasLibraryMenu * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IKompasLibraryMenu * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IKompasLibraryMenu * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IKompasLibraryMenu * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IKompasLibraryMenu * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddMenuCommand )( 
            IKompasLibraryMenu * This,
            /* [in] */ long Id,
            /* [in] */ BSTR Title,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSeparator )( 
            IKompasLibraryMenu * This,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddSubMenu )( 
            IKompasLibraryMenu * This,
            /* [in] */ BSTR Title,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EndSubMenu )( 
            IKompasLibraryMenu * This,
            /* [retval][out] */ VARIANT_BOOL *Result);
        
        END_INTERFACE
    } IKompasLibraryMenuVtbl;

    interface IKompasLibraryMenu
    {
        CONST_VTBL struct IKompasLibraryMenuVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IKompasLibraryMenu_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IKompasLibraryMenu_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IKompasLibraryMenu_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IKompasLibraryMenu_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IKompasLibraryMenu_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IKompasLibraryMenu_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IKompasLibraryMenu_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IKompasLibraryMenu_AddMenuCommand(This,Id,Title,Result)	\
    ( (This)->lpVtbl -> AddMenuCommand(This,Id,Title,Result) ) 

#define IKompasLibraryMenu_AddSeparator(This,Result)	\
    ( (This)->lpVtbl -> AddSeparator(This,Result) ) 

#define IKompasLibraryMenu_AddSubMenu(This,Title,Result)	\
    ( (This)->lpVtbl -> AddSubMenu(This,Title,Result) ) 

#define IKompasLibraryMenu_EndSubMenu(This,Result)	\
    ( (This)->lpVtbl -> EndSubMenu(This,Result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IKompasLibraryMenu_INTERFACE_DEFINED__ */


#ifndef __ksKompasLibrary_DISPINTERFACE_DEFINED__
#define __ksKompasLibrary_DISPINTERFACE_DEFINED__

/* dispinterface ksKompasLibrary */
/* [helpstring][uuid] */ 


DEFINE_GUID(DIID_ksKompasLibrary,0xC222614E,0xAB59,0x4FEE,0x9F,0x4A,0x1E,0xAB,0x7C,0x1D,0x4C,0x5E);

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C222614E-AB59-4FEE-9F4A-1EAB7C1D4C5E")
    ksKompasLibrary : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct ksKompasLibraryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ksKompasLibrary * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ksKompasLibrary * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ksKompasLibrary * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ksKompasLibrary * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ksKompasLibrary * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ksKompasLibrary * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ksKompasLibrary * This,
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
        
        END_INTERFACE
    } ksKompasLibraryVtbl;

    interface ksKompasLibrary
    {
        CONST_VTBL struct ksKompasLibraryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ksKompasLibrary_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ksKompasLibrary_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ksKompasLibrary_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ksKompasLibrary_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ksKompasLibrary_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ksKompasLibrary_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ksKompasLibrary_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __ksKompasLibrary_DISPINTERFACE_DEFINED__ */

#endif /* __KompasLibrary_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


