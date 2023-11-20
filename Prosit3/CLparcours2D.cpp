#include "CLparcours2D.h"
#include "CLParcours.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

CLparcours2D::CLparcours2D():CLParcours()
{}

CLparcours2D::CLparcours2D(int a): CLParcours(a)
{}

void CLparcours2D::ajouterPoint(CLpoint* point)
{
	CLParcours::ajouterPoint(point);
}

double CLparcours2D::calculDistance()
{
double resultat = 0.0;
for (size_t i = 1; i < points.size(); i++) {
	double dx = points[i]->x - points[i-1]->x;
	double dy = points[i]->y - points[i-1]->y;
	resultat = sqrt(pow(dx,2) + pow(dy,2));
	}
	return resultat;
}

void CLparcours2D::message()
{
	cout << "La distance d'un parcours 2D est : ";
}
