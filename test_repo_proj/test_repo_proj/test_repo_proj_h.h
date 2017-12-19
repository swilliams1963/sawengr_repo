

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for testrepoproj.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __test_repo_proj_h_h__
#define __test_repo_proj_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Itest_repo_proj_FWD_DEFINED__
#define __Itest_repo_proj_FWD_DEFINED__
typedef interface Itest_repo_proj Itest_repo_proj;

#endif 	/* __Itest_repo_proj_FWD_DEFINED__ */


#ifndef __test_repo_proj_FWD_DEFINED__
#define __test_repo_proj_FWD_DEFINED__

#ifdef __cplusplus
typedef class test_repo_proj test_repo_proj;
#else
typedef struct test_repo_proj test_repo_proj;
#endif /* __cplusplus */

#endif 	/* __test_repo_proj_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __test_repo_proj_LIBRARY_DEFINED__
#define __test_repo_proj_LIBRARY_DEFINED__

/* library test_repo_proj */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_test_repo_proj;

#ifndef __Itest_repo_proj_DISPINTERFACE_DEFINED__
#define __Itest_repo_proj_DISPINTERFACE_DEFINED__

/* dispinterface Itest_repo_proj */
/* [uuid] */ 


EXTERN_C const IID DIID_Itest_repo_proj;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("9dd28dfe-fff9-4225-8435-4679b85fac41")
    Itest_repo_proj : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct Itest_repo_projVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Itest_repo_proj * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Itest_repo_proj * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Itest_repo_proj * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Itest_repo_proj * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Itest_repo_proj * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Itest_repo_proj * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Itest_repo_proj * This,
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
    } Itest_repo_projVtbl;

    interface Itest_repo_proj
    {
        CONST_VTBL struct Itest_repo_projVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Itest_repo_proj_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Itest_repo_proj_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Itest_repo_proj_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Itest_repo_proj_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Itest_repo_proj_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Itest_repo_proj_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Itest_repo_proj_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __Itest_repo_proj_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_test_repo_proj;

#ifdef __cplusplus

class DECLSPEC_UUID("bce62923-75e0-4093-a9e4-99d31a37c299")
test_repo_proj;
#endif
#endif /* __test_repo_proj_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


