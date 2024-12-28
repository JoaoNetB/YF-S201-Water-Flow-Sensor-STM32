#include "YF-S201.h"

int read_volume_milliliters(YF_S201_HandleTypedef *YF_S201)
{
	int volume = (YF_S201->total_pulses * 1000) / YF_S201->pulses_per_liter;

	return volume;
}

int read_volume_liters(YF_S201_HandleTypedef *YF_S201)
{
	int volume = (YF_S201->total_pulses/YF_S201->pulses_per_liter);

	return volume;
}

void count_pulses(YF_S201_HandleTypedef *YF_S201)
{
	YF_S201->total_pulses++;
}
