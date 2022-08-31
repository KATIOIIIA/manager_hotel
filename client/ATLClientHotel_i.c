/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Wed May 19 20:17:20 2010
 */
/* Compiler settings for C:\Users\Katen'ka\Documents\Univer\kurs_2\practicalIBM\__model\ATL\ATLClientHotel\ATLClientHotel.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_ICreateClient = {0x4A78D949,0xBFE9,0x4E83,{0xA1,0x7B,0xEE,0x7C,0xD4,0xA6,0x1E,0x85}};


const IID IID_IGetData = {0x4A777949,0xBFE9,0x4E77,{0xA1,0x7B,0xEE,0x7C,0xD4,0xA6,0x17,0x75}};


const IID LIBID_ATLCLIENTHOTELLib = {0x1047E3CA,0xED85,0x4FB9,{0xAC,0x77,0xD2,0x23,0xBF,0x84,0x84,0x4A}};


const CLSID CLSID_CoClient = {0xC4B0E494,0x6662,0x4AE6,{0xB7,0x37,0xC2,0x07,0x9D,0x51,0xF7,0xE0}};


#ifdef __cplusplus
}
#endif

