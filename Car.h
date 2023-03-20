#pragma once
class Car
{
public:
	float fuel_capacity;
	float fuel_consumption;
	float average_speed_rain;
	float average_speed_sunny;
	float average_speed_snow;
	float time_to_finish;
	Car() {
	}
	~Car() {};
	//metoda virtuala
	virtual void set_atr(float fcap, float fcon, float speed_rain, float speed_sun, float speed_snow) = 0;
};

