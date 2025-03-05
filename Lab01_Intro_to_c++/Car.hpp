#pragma once

#include <iostream>

class Car
{
public:
	std::string make;
	std::string model;
	int year;
	float speed = 0.0f;

	Car(const std::string, const std::string, const int);

	void outputDetails();
	void accelerate(const float);
	static float mph2kph(const float);
};