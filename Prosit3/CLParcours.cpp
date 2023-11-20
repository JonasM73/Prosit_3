#include "CLParcours.h"

CLParcours::CLParcours()
{
	this->points.reserve(0);
}

CLParcours::CLParcours(int a)
{
	this->points.reserve(a);
}

void CLParcours::ajouterPoint(CLpoint* point)
{
	this->points.push_back(point);
}

void CLParcours::ajouterPoint(CLpoint3D* point)
{
	this->points3D.push_back(point);

}
