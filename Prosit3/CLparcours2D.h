#pragma once
#include "CLParcours.h"

class CLparcours2D : public CLParcours {
public:
	CLparcours2D();
	CLparcours2D(int a);
	void ajouterPoint(CLpoint* point) override;
	double calculDistance()override;
	void message() override;
};

