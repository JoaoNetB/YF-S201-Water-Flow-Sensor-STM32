#include "YF-S201.h"

/**
 * @brief Reads the volume in milliliters.
 * @param  YF_S201: Pointer to the sensor handle
 * @retval The calculated volume in milliliters.
 */
int read_volume_milliliters(YF_S201_HandleTypedef *YF_S201)
{
	int volume = (YF_S201->total_pulses * 1000) / YF_S201->pulses_per_liter;

	return volume;
}

/**
 * @brief Reads the volume in liters.
 * @param  YF_S201: Pointer to the sensor handle
 * @return The calculated volume in liters.
 */
int read_volume_liters(YF_S201_HandleTypedef *YF_S201)
{
	int volume = (YF_S201->total_pulses/YF_S201->pulses_per_liter);

	return volume;
}

/**
 * @brief Increments the pulse count from the sensor.
 * @param  YF_S201: Pointer to the sensor handle.
 * @retval None.
 */
void count_pulses(YF_S201_HandleTypedef *YF_S201)
{
	YF_S201->total_pulses++;
}
