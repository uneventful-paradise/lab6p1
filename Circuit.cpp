#include "Circuit.h"
#include"Car.h"
#include "Weather.h"
#include <cstdlib>
#include <iostream>
Circuit::Circuit(){
	this->array = (Car**)malloc(this->max_size*sizeof(Car*));//??watarfaker
}

Circuit::~Circuit()
{
	delete this->array;
}

void Circuit::SetLenght(int val)
{
	this->length = val;
}
//???
void Circuit::SetWeather(enum Weather weather_type)
{
	this->weather = weather_type;
}

void Circuit::AddCar(Car*car_ptr)
{
	if (this->cont < this->max_size)
		this->array[this->cont++] = car_ptr;
	//this->cont++;//??
}

void Circuit::Race()
{
	for (int i = 0; i < this->cont; ++i)
	{
		switch (this->weather)
		{
			case 0:{
				array[i]->time_to_finish = this -> length / (float)array[i]->average_speed_rain;
				break;
			}
			case 1: {
				array[i]->time_to_finish = this->length / (float)array[i]->average_speed_rain;
				break;
			}
			case 2: {
				array[i]->time_to_finish = this->length / (float)array[i]->average_speed_rain;
				break;
			}
		}
		
	}
	for (int i = 0; i < this->cont - 1; ++i)
		for (int j = i + 1; j < this->cont; ++j)
			if (array[i]->time_to_finish > array[j]->time_to_finish)
				std::swap(array[i], array[j]);
	for (int i = 0; i < this->cont; ++i)
		std::cout << i << " " << this->array[i]->time_to_finish << "\n";
}

void Circuit::ShowFinalRanks()
{
	for (int i = 0; i < this->cont;++i)
	{
		float l = 0;
		l = this->array[i]->fuel_capacity / array[i]->fuel_consumption*100;
		if (l >= this->length)
			std::cout << array[i]->time_to_finish << "\n";
	}
}
void Circuit::ShowWhoDidNotFinish()
{
	for (int i = 0; i < this->cont; ++i)
	{
		float l = 0;
		l = this->array[i]->fuel_capacity / array[i]->fuel_consumption*100;
		if (l < this->length)
			std::cout << i << " did not finish" << "\n";
	}
}