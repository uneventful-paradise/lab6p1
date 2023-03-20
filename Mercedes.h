#pragma once
#include "Car.h"
class Mercedes:public Car
{
public:
	void set_atr(float fcap, float fcon, float speed_rain, float speed_sunny, float speed_snow);
	Mercedes()
	{
		set_atr(120, 320, 210, 12, 55);
	}
};

