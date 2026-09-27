#pragma once
#include <string>

struct LinearEquation
{
	double first;
	double second;
	bool init(double f, double s);
	void Read();
	void Display();
	double function(double X);
	std::string toString();
};