#pragma once
#include "CLParcours.h"

class CLparcours3D : public CLParcours{
public : 
	CLparcours3D();
	CLparcours3D(int a);
	void ajouterPoint(CLpoint3D* point) override;
	double calculDistance() override;
	void message() override;
};

