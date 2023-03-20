#include "Dacia.h"

void Dacia::set_atr(int a, int b, int c, int d, int e)
{
	this->fuel_capacity = a, this->fuel_consumption = b,
	this->average_speed_rain = c, this->average_speed_sunny = d, this->average_speed_snow = e;
}