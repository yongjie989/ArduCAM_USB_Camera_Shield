#pragma once

#include "Common.h"

#ifdef	 USBCAMERALIB_EXPORTS
#define  ARDUCAM_API extern "C" _declspec(dllexport)
#else
#define  ARDUCAM_API extern "C" _declspec(dllimport)
#endif

typedef  Uint32* ArduCamHandle;

ARDUCAM_API Uint32 ArduCam_autoopen( ArduCamHandle &useHandle, ArduCamCfg* useCfg );

ARDUCAM_API Uint32 ArduCam_scan( Uint32* pUsbIdxArray, Uint16 useVID );
ARDUCAM_API Uint32 ArduCam_open( ArduCamHandle &useHandle, ArduCamCfg* useCfg, Uint32 usbIdx );
ARDUCAM_API Uint32 ArduCam_close( ArduCamHandle useHandle );

ARDUCAM_API Uint32 ArduCam_beginCaptureImage( ArduCamHandle useHandle );
ARDUCAM_API Uint32 ArduCam_captureImage( ArduCamHandle useHandle );
ARDUCAM_API Uint32 ArduCam_endCaptureImage( ArduCamHandle useHandle );

ARDUCAM_API Uint32 ArduCam_captureIMU( ArduCamHandle useHandle );

ARDUCAM_API Uint32 ArduCam_availiableImage( ArduCamHandle useHandle );
ARDUCAM_API Uint32 ArduCam_availiableIMU( ArduCamHandle useHandle );
ARDUCAM_API Uint32 ArduCam_readImage( ArduCamHandle useHandle, ArduCamOutData* &pstFrameData );	
ARDUCAM_API Uint32 ArduCam_readIMU( ArduCamHandle useHandle, Uint16 u16Index, ArduIMUData* &pstIMUData );
ARDUCAM_API Uint32 ArduCam_readImageAndIMU( ArduCamHandle useHandle, ArduCamOutData* &pstFrameData, ArduIMUData* &pstIMUData );

ARDUCAM_API Uint32 ArduCam_del( ArduCamHandle useHandle );							
ARDUCAM_API Uint32 ArduCam_flush( ArduCamHandle useHandle );

ARDUCAM_API Uint32 ArduCam_shot( ArduCamHandle useHandle );

ARDUCAM_API Uint32 ArduCam_writeSensorReg( ArduCamHandle useHandle, Uint32 regAddr, Uint32 val );
ARDUCAM_API Uint32 ArduCam_readSensorReg( ArduCamHandle useHandle, Uint32 regAddr, Uint32* pval );

ARDUCAM_API Uint32 ArduCam_getSensorCfg( ArduCamHandle useHandle, ArduCamCfg* useCfg );

ARDUCAM_API Uint32 ArduCam_writeReg_8_8( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32 val );
ARDUCAM_API Uint32 ArduCam_readReg_8_8( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32* pval );
ARDUCAM_API Uint32 ArduCam_writeReg_8_16( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32 val );
ARDUCAM_API Uint32 ArduCam_readReg_8_16( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32* pval );
ARDUCAM_API Uint32 ArduCam_writeReg_16_8( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32 val );
ARDUCAM_API Uint32 ArduCam_readReg_16_8( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32* pval );
ARDUCAM_API Uint32 ArduCam_writeReg_16_16( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32 val );
ARDUCAM_API Uint32 ArduCam_readReg_16_16( ArduCamHandle useHandle, Uint32 shipAddr, Uint32 regAddr, Uint32* pval );

ARDUCAM_API Uint32 ArduCam_boardConfig( ArduCamHandle useHandle, Uint8 u8Command, Uint16 u16Value, Uint16 u16Index, Uint32 u32BufSize, Uint8 *pu8Buf );

ARDUCAM_API Uint32 ArduCam_readUserData( ArduCamHandle useHandle, Uint16 u16Addr, Uint8 u8Len, Uint8* pu8Data );
ARDUCAM_API Uint32 ArduCam_writeUserData( ArduCamHandle useHandle, Uint16 u16Addr, Uint8 u8Len, Uint8* pu8Data );

ARDUCAM_API void ArduCam_enableForceRead( ArduCamHandle useHandle );
ARDUCAM_API void ArduCam_disableForceRead( ArduCamHandle useHandle );

ARDUCAM_API Uint32 ArduCam_setFrqDivPara( ArduCamHandle useHandle, Uint8 u8FrqDivPara );





