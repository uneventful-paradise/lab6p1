#pragma once
#include "Car.h"
class Circuit
{
	float length;
	Car** array;
	int cont = 0;
	int max_size = 100;
	public:
		int weather;
		void SetLenght(int val);
		void SetWeather(enum Weather);
		void AddCar(Car*car_ptr);
		void Race();
		void ShowFinalRanks();
		void ShowWhoDidNotFinish();
		Circuit();
		~Circuit();
};

