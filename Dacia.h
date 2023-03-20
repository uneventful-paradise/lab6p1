#pragma once
#include"Car.h"
class Dacia : public Car
{
public:
	void set_atr(float a, float b, float c, float d, float e);
	Dacia()
	{
		set_atr(100, 200, 300, 10, 15);
	}
};

