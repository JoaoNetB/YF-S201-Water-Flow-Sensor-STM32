#ifndef YF_S201_SENSOR_INCLUDE_YF_S201_H_
#define YF_S201_SENSOR_INCLUDE_YF_S201_H_

#include <stm32c0xx_hal.h>

/**
 * @brief Represents the sensor structure. 
*/
typedef struct
{
	uint16_t GPIO_pin; 				// GPIO pin connected to the sensor.
	uint16_t total_pulses;			// Total number of pulses recorded by the sensor.
	uint16_t pulses_per_liter;		// Number of pulses equivalent to one liter.
}YF_S201_HandleTypedef;

/**
 * @brief Increments the pulse count from the sensor.
 * @param  YF_S201: Pointer to the sensor handle.
 */
void count_pulses(YF_S201_HandleTypedef *YF_S201);

/**
 * @brief Reads the volume in milliliters.
 * @param  YF_S201: Pointer to the sensor handle.
 */
int read_volume_milliliters(YF_S201_HandleTypedef *YF_S201);

/**
 * @brief Reads the volume in liters.
 * @param  YF_S201: Pointer to the sensor handle.
 */
int read_volume_liters(YF_S201_HandleTypedef *YF_S201);



#endif /* YF_S201_SENSOR_INCLUDE_YF_S201_H_ */
