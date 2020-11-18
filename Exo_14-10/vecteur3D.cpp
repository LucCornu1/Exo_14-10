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
	//cout << "Destruction objet de type vecteur3D" << endl;
}


//Fonctions membres
bool vecteur3D::operator==(vecteur3D V)
{
	return (this->m_fltX == V.m_fltX && this->m_fltY == V.m_fltY && this->m_fltZ == V.m_fltZ);
}