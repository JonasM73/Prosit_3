#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "CLpoint3D.h"
using namespace std;

class CLParcours
{
public :
	vector <CLpoint*> points;
	vector <CLpoint3D*> points3D;
	CLParcours();
	CLParcours(int a);
	virtual void ajouterPoint(CLpoint* point);
	virtual void ajouterPoint(CLpoint3D* point);
	virtual double calculDistance() = 0;
	virtual void message() = 0;
};

