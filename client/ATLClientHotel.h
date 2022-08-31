/* this ALWAYS GENERATED file contains the definitions for the interfaces */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed May 19 20:17:20 2010
 */
/* Compiler settings for C:\Users\Katen'ka\Documents\Univer\kurs_2\practicalIBM\__model\ATL\ATLClientHotel\ATLClientHotel.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ATLClientHotel_h__
#define __ATLClientHotel_h__

#ifdef __cplusplus
extern "C"{
#endif 

/* Forward Declarations */ 

#ifndef __ICreateClient_FWD_DEFINED__
#define __ICreateClient_FWD_DEFINED__
typedef interface ICreateClient ICreateClient;
#endif 	/* __ICreateClient_FWD_DEFINED__ */


#ifndef __IGetData_FWD_DEFINED__
#define __IGetData_FWD_DEFINED__
typedef interface IGetData IGetData;
#endif 	/* __IGetData_FWD_DEFINED__ */


#ifndef __CoClient_FWD_DEFINED__
#define __CoClient_FWD_DEFINED__

#ifdef __cplusplus
typedef class CoClient CoClient;
#else
typedef struct CoClient CoClient;
#endif /* __cplusplus */

#endif 	/* __CoClient_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * ); 

#ifndef __ICreateClient_INTERFACE_DEFINED__
#define __ICreateClient_INTERFACE_DEFINED__

/* interface ICreateClient */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_ICreateClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A78D949-BFE9-4E83-A17B-EE7CD4A61E85")
    ICreateClient : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetNumRoom( 
            /* [in] */ long n_room) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SetLifeTime( 
            /* [in] */ long time) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICreateClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            ICreateClient __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            ICreateClient __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            ICreateClient __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetNumRoom )( 
            ICreateClient __RPC_FAR * This,
            /* [in] */ long n_room);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *SetLifeTime )( 
            ICreateClient __RPC_FAR * This,
            /* [in] */ long time);
        
        END_INTERFACE
    } ICreateClientVtbl;

    interface ICreateClient
    {
        CONST_VTBL struct ICreateClientVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICreateClient_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ICreateClient_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ICreateClient_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ICreateClient_SetNumRoom(This,n_room)	\
    (This)->lpVtbl -> SetNumRoom(This,n_room)

#define ICreateClient_SetLifeTime(This,time)	\
    (This)->lpVtbl -> SetLifeTime(This,time)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE ICreateClient_SetNumRoom_Proxy( 
    ICreateClient __RPC_FAR * This,
    /* [in] */ long n_room);


void __RPC_STUB ICreateClient_SetNumRoom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE ICreateClient_SetLifeTime_Proxy( 
    ICreateClient __RPC_FAR * This,
    /* [in] */ long time);


void __RPC_STUB ICreateClient_SetLifeTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ICreateClient_INTERFACE_DEFINED__ */


#ifndef __IGetData_INTERFACE_DEFINED__
#define __IGetData_INTERFACE_DEFINED__

/* interface IGetData */
/* [unique][helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IGetData;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A777949-BFE9-4E77-A17B-EE7CD4A61775")
    IGetData : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetNumRoom( 
            /* [out] */ long __RPC_FAR *r) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetLifeTime( 
            /* [out] */ long __RPC_FAR *t) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IGetDataVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )( 
            IGetData __RPC_FAR * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void __RPC_FAR *__RPC_FAR *ppvObject);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )( 
            IGetData __RPC_FAR * This);
        
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )( 
            IGetData __RPC_FAR * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetNumRoom )( 
            IGetData __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *r);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetLifeTime )( 
            IGetData __RPC_FAR * This,
            /* [out] */ long __RPC_FAR *t);
        
        END_INTERFACE
    } IGetDataVtbl;

    interface IGetData
    {
        CONST_VTBL struct IGetDataVtbl __RPC_FAR *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGetData_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IGetData_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IGetData_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IGetData_GetNumRoom(This,r)	\
    (This)->lpVtbl -> GetNumRoom(This,r)

#define IGetData_GetLifeTime(This,t)	\
    (This)->lpVtbl -> GetLifeTime(This,t)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpstring] */ HRESULT STDMETHODCALLTYPE IGetData_GetNumRoom_Proxy( 
    IGetData __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *r);


void __RPC_STUB IGetData_GetNumRoom_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpstring] */ HRESULT STDMETHODCALLTYPE IGetData_GetLifeTime_Proxy( 
    IGetData __RPC_FAR * This,
    /* [out] */ long __RPC_FAR *t);


void __RPC_STUB IGetData_GetLifeTime_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IGetData_INTERFACE_DEFINED__ */



#ifndef __ATLCLIENTHOTELLib_LIBRARY_DEFINED__
#define __ATLCLIENTHOTELLib_LIBRARY_DEFINED__

/* library ATLCLIENTHOTELLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_ATLCLIENTHOTELLib;

EXTERN_C const CLSID CLSID_CoClient;

#ifdef __cplusplus

class DECLSPEC_UUID("C4B0E494-6662-4AE6-B737-C2079D51F7E0")
CoClient;
#endif
#endif /* __ATLCLIENTHOTELLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif
