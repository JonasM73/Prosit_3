#pragma once
#include "CLpoint.h"


class CLpoint3D : public CLpoint{
public :
	double z;
	CLpoint3D(double a, double b, double c);
	void afficherCoordo() const override;
};

