/*
 * AgriTech.c
 *
 *  Created on: Mar 24, 2024
 *      Author: admin
 */
#include "AgriTechSys.h"
#include "adc.h"
#include "gpio.h"

/****************************************************************************************
 * 	Prototype definition
 ****************************************************************************************/
static uint8_t Average_Tempereture_Reading(uint16_t *rowData);
static uint8_t Average_Humidity_Reading(uint16_t *rowData);
static uint8_t Average_Soil_Reading(uint16_t *rowData);
static void Update_RunTime_Instance(RunTimeINstanceType *runtimeInst);
static void Send_Data_To_Wifi(RunTimeINstanceType runtimeInst);

/****************************************************************************************
 * 	Function Header
 * 	Function Name	:
 * 	Return Type		:
 * 	Function Arg	:
 ****************************************************************************************/
static uint8_t Average_Tempereture_Reading(uint16_t *actualData)
{
	uint8_t retValue = FALSE;
	/* Averaging Sensor input data here */
	return retValue;
}

/****************************************************************************************
 * 	Function Header
 * 	Function Name	:
 * 	Return Type		:
 * 	Function Arg	:
 ****************************************************************************************/
static uint8_t Average_Humidity_Reading(uint16_t *actualData)
{
	uint8_t retValue = FALSE;
	/* Averaging Sensor input data here */
	return retValue;
}

/****************************************************************************************
 * 	Function Header
 * 	Function Name	:
 * 	Return Type		:
 * 	Function Arg	:
 ****************************************************************************************/
static uint8_t Average_Soil_Reading(uint16_t *actualData)
{
	uint8_t retValue = FALSE;
	/* Averaging Sensor input data here */
	return retValue;
}

/****************************************************************************************
 * 	Function Header
 * 	Function Name	:
 * 	Return Type		:
 * 	Function Arg	:
 ****************************************************************************************/
static void Update_RunTime_Instance(RunTimeINstanceType *runtimeInst)
{
	(void)Average_Humidity_Reading(&(runtimeInst->InputSensors.dht11_humidity));
	(void)Average_Tempereture_Reading(&(runtimeInst->InputSensors.dht11_tempereture));
	(void)Average_Soil_Reading(&(runtimeInst->InputSensors.soil_sensor));

}

/****************************************************************************************
 * 	Function Header
 * 	Function Name	:
 * 	Return Type		:
 * 	Function Arg	:
 ****************************************************************************************/
static void Send_Data_To_Wifi(RunTimeINstanceType runtimeInst)
{
	/* Send runtime instance value to Wifi Module */

}
