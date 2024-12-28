#ifndef YF_S201_SENSOR_INCLUDE_YF_S201_H_
#define YF_S201_SENSOR_INCLUDE_YF_S201_H_

#include <stm32c0xx_hal.h>

typedef struct
{
	uint16_t GPIO_pin;
	uint16_t total_pulses;
	uint16_t pulses_per_liter;
}YF_S201_HandleTypedef;

void count_pulses(YF_S201_HandleTypedef *YF_S201);

int read_volume_milliliters(YF_S201_HandleTypedef *YF_S201);

int read_volume_liters(YF_S201_HandleTypedef *YF_S201);



#endif /* YF_S201_SENSOR_INCLUDE_YF_S201_H_ */
