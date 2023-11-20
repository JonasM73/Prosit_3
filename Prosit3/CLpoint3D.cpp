#include "CLpoint3D.h"
#include "CLpoint.h"

CLpoint3D::CLpoint3D(double a, double b, double c): CLpoint(a, b), z(c)
{}

void CLpoint3D::afficherCoordo() const
{
	cout << "Point(" << x << "; " << y << "; " << z << ")" << endl;
}
