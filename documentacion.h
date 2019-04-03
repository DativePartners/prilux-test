/*
 * documentacion.h
 *
 *  Created on: 10 de may. de 2018
 *      Author: aruiz
 */

#ifndef DOCUMENTACION_H_
#define DOCUMENTACION_H_


/*
 ************************** Activación puerto comunicaciones UART y deshabilitación del VCOM para uso printf *****************************
 * La variable HAL_VCOM_ENABLE ubicada en hal-config.h, tiene que deshabilitarse
 * #define HAL_VCOM_ENABLE                               (0)

PARA EL PRINTF se necesita
 * Drag and drop these files into your project:
retargetio.c
retargetserial.c
retargetserial.h
retargetserialconfig.h
Insert this code in the very beginning with the other "#include" code
#include "retargetserial.h"
 This is the code you must add in the beginning of main to initialize serial communication
RETARGETSerialInit();
 *************************** Activación puerto comunicaciones I2C y deshabilitación del GPIO D-15*****************************
 * La variable HAL_I2CSENSOR_ENABLE ubicada en hal-config.h, tiene quehabilitarse
 *	#define HAL_I2CSENSOR_ENABLE                          (1)
 *  //Enable I2C sensor if requested en init_app.c
 *	//  GPIO_PinModeSet(BSP_I2CSENSOR_ENABLE_PORT, BSP_I2CSENSOR_ENABLE_PIN, gpioModePushPull, DISPLAY_SENSOR_COMMON_ENABLE);
 *
 *	en el SDK 2.9 me encuentro:
 *
 *	no hay que inicializar en el main con
 *	 // Inicialización I2c0- No es necesario inicializarlo , lo hace en iniapp()
 *  I2CSPM_Init_TypeDef i2cInit = I2CSPM_INIT_DEFAULT;
 *  I2CSPM_Init(&i2cInit);
 *
 *	 con que los puertos del I2C son diferentes a los que tengo en mi versión inicial
 *	// $[I2CSENSOR]

#define BSP_I2CSENSOR_ENABLE_PIN                      (15U)
#define BSP_I2CSENSOR_ENABLE_PORT                     (gpioPortD)

#define BSP_I2CSENSOR_PERIPHERAL                      (HAL_I2C_PORT_I2C0)
#define BSP_I2CSENSOR_SDA_PIN                         (10U) - -> (11U)
#define BSP_I2CSENSOR_SDA_PORT                        (gpioPortC)
#define BSP_I2CSENSOR_SDA_LOC                         (15U) - -> (16U)

#define BSP_I2CSENSOR_SCL_PIN                         (11U) - -> (10U)
#define BSP_I2CSENSOR_SCL_PORT                        (gpioPortC)
#define BSP_I2CSENSOR_SCL_LOC                         (15U) - -> (14U)

// [I2CSENSOR]$
 *
 *
 * *********************** Store Flash ***************************************************************************************************
 * Total capacity of PS storage is 2kB. The total length of all keys put together can't exceed this value.
 * (The actual capacity is slightly less due to some overhead needed by the PS storage bookkeeping).
 * You can consider PS storage as a primitive file system where the "name of the file" is an integer value between 0x4000 - 0x407F.
 *
 * *********************** Timers ***************************************************************************************************
 * https://www.silabs.com/community/wireless/bluetooth/knowledge-base.entry.html/2016/10/15/using_rtcc_as_timer-cFRe
 * 32768 ticks equal to 1 second, and the ticks parameter can be set between 328 and 2147483647 that is between 10ms and 18.2 hours.
 * Multiple (up to 256) concurrent timers can be running simultaneously, referred with the timerID.
 * Timers can be set to continuous mode (mode=0) or single-shot mode (mode=1).
 * The device can be sent into deep sleep mode, and will automatically wake up before a timeout event is to be raised.
 */




#endif /* DOCUMENTACION_H_ */
