#include "CLpoint.h"
#include <iostream>
using namespace std;

CLpoint::CLpoint(double a, double b)
{
	this->x = a;
	this->y = b;
}


void CLpoint::afficherCoordo() const
{
	cout << "Point(" << x << "; " << y << ")" << endl;
}
