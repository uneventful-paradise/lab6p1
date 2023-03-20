
#include <iostream>
#include "Circuit.h"
#include"Car.h"
#include"Dacia.h"
#include"Mercedes.h"
#include "Weather.h"
int main()
{
	Circuit falticeni;
	falticeni.SetWeather(Weather::Rain);
	falticeni.SetLenght(1000);
	falticeni.AddCar(new Dacia());
	falticeni.AddCar(new Dacia());
	falticeni.AddCar(new Dacia());
	falticeni.AddCar(new Mercedes());
	falticeni.Race();
	falticeni.ShowFinalRanks();
	falticeni.ShowWhoDidNotFinish();
}