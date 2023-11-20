#include "CLparcours3D.h"
#include "CLParcours.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <string>

CLparcours3D::CLparcours3D()
{	points3D.reserve(0);	}

CLparcours3D::CLparcours3D(int a)
{	points3D.reserve(a);	}

void CLparcours3D::ajouterPoint(CLpoint3D* point)
{
	CLParcours::ajouterPoint(point);
}

double CLparcours3D::calculDistance()
{
 double resultat = 0.0;
 for (size_t i = 1; i < points3D.size(); i++) {
	 double dx = points3D[i]->x - points3D[i - 1]->x;
	 double dy = points3D[i]->y - points3D[i - 1]->y;
	 double dz = points3D[i]->z - points3D[i - 1]->z;
	 resultat += sqrt(pow(dx, 2) + pow(dy, 2) + pow(dz, 2));

 }
    return resultat;
}

void CLparcours3D::message()
{
	cout << "La distance d'un parcours 3D est : ";

}
