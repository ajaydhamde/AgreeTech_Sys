/*
 * AgreeTechSys.h
 *
 *  Created on: Mar 16, 2024
 *      Author: admin
 */

#ifndef INC_AGRITECHSYS_H_
#define INC_AGRITECHSYS_H_

#include <stdint.h>
#define TRUE	1u
#define FALSE	0u
typedef enum
{
	IDEAL_STATE = 0,
	RUN_STATE,
	STOP_STATE,
}SytemStateType;

typedef struct
{
	uint16_t soil_sensor;				/* 3 no's of soil sensor shall be average */
	uint16_t temp_lm35;					/* 3 no's of lm35 sensor shall be average */
	uint16_t dht11_humidity;
	uint16_t dht11_tempereture;
}InputSensorsType;

typedef struct
{
	uint8_t motorpump_output;
	uint8_t led_output[4];				/* 4 no's of LED  strip outputs */
	uint8_t exhfan_output[2];			/* 2 no's of LED  strip outputs */
}OutputSignalsType;

/* Virtual output cmd */
typedef struct
{
	uint8_t v_motorpump_cmd;
	uint8_t v_led_cmd[4];				/* 4 no's of LED  strip cmd */
	uint8_t v_exhfan_cmd[2];			/* 2 no's of LED  strip cmd */
}vOutputCmdType;

typedef struct{
	SytemStateType		CurrState;		/* runtime state for system */
	InputSensorsType	InputSensors;	/* InputSensor struct of system */
	OutputSignalsType	OutputSignal;	/* OutputSignal struct of system */
	vOutputCmdType      vOutputCmd;
	uint8_t 			startEvent;
}RunTimeINstanceType;

/* Sharable runtime main instance */
extern volatile RunTimeINstanceType runTimeInstance;
extern volatile uint8_t tickFlage;


#endif /* INC_AGRITECHSYS_H_ */
