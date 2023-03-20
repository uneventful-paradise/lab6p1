#include "Mercedes.h"
void Mercedes::set_atr(float a, float b, float c, float d, float e)
{
	this->fuel_capacity = a, this->fuel_consumption = b,
		this->average_speed_rain = c, this->average_speed_sunny = d, this->average_speed_snow = e;
}