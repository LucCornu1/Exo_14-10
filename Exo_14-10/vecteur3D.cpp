#include "vecteur3D.h"
#include <iostream>

using namespace std;

//Constructeur
vecteur3D::vecteur3D(float fltC1 = 0.0, float fltC2 = 0.0, float fltC3 = 0.0)
{
	this->m_fltX = fltC1;
	this->m_fltY = fltC2;
	this->m_fltZ = fltC3;

	cout << "Creation objet de type vecteur3D" << endl;
}

//Destructeur
vecteur3D::~vecteur3D()
{
	cout << "Destruction objet de type vecteur3D" << endl;
}