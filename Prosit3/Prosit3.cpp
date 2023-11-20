// Inclusion des bibliothèques nécessaires
#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

// Inclusion des classes définies localement
#include "CLParcours.h"
#include "CLparcours2D.h"
#include "CLparcours3D.h"
#include "CLpoint3D.h"
#include "CLpoint.h"

// Fonction principale du programme
int main() {

	// Déclaration des pointeurs vers des objets CLpoint et CLpoint3D
	CLpoint* p1;
	CLpoint* p2;
	CLpoint* p3;
	CLpoint3D* p4;
	CLpoint3D* p5;
	CLpoint3D* p6;

	// Déclaration d'un pointeur vers un objet CLParcours
	CLParcours* parcours;

	// Création de trois objets CLpoint et d'un objet CLparcours2D
	p1 = new CLpoint(0.0, 0.0);
	p2 = new CLpoint(1.0, 1.0);
	p3 = new CLpoint(2.0, 2.0);
	parcours = new CLparcours2D(3);

	// Ajout des points au parcours 2D
	parcours->ajouterPoint(p1);
	parcours->ajouterPoint(p2);
	parcours->ajouterPoint(p3);

	// Affichage du message du parcours et de la distance calculée
	parcours->message();
	cout << parcours->calculDistance() << endl;

	// Création de trois objets CLpoint3D et d'un objet CLparcours3D
	p4 = new CLpoint3D(1.0, 2.0, 4.0);
	p5 = new CLpoint3D(1.0, 1.0, 1.0);
	p6 = new CLpoint3D(2.0, 2.0, 2.0);
	parcours = new CLparcours3D(3);

	// Ajout des points au parcours 3D
	parcours->ajouterPoint(p4);
	parcours->ajouterPoint(p5);
	parcours->ajouterPoint(p6);

	// Affichage du message du parcours et de la distance calculée
	parcours->message();
	cout << parcours->calculDistance() << endl;

	// Réaffectation du pointeur p1 et p4 pour illustrer l'utilisation de la méthode afficherCoordo()
	p1 = new CLpoint(0.0, 0.0);
	p4 = new CLpoint3D(1.0, 1.0, 1.0);

	// Appel de la méthode afficherCoordo() après la réaffectation
	(p1 = p2)->afficherCoordo();

	// Fin du programme
	return 0;
}
