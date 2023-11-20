#pragma once
#include <iostream>
using namespace std;

class CLpoint
{
public:
	double x, y;
	CLpoint(double a, double b);

	virtual void afficherCoordo() const;

};

