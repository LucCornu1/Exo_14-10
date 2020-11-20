#include "vecteur3D.h"
#include <iostream>

using namespace std;

//Constructeur
vecteur3D::vecteur3D(float fltC1 = 0.0, float fltC2 = 0.0, float fltC3 = 0.0)
{
	this->m_fltX = fltC1;
	this->m_fltY = fltC2;
	this->m_fltZ = fltC3;

	//cout << "Creation objet de type vecteur3D" << endl;
}

//Destructeur
vecteur3D::~vecteur3D()
{
	//cout << "Destruction objet de type vecteur3D" << endl;
}


//Fonctions membres
/*
bool vecteur3D::operator==(vecteur3D V)
{
	//cout << "test membre ==" << endl; //Ligne pour v�rifier si on passe bien dans la fonction
	return (this->m_fltX == V.m_fltX && this->m_fltY == V.m_fltY && this->m_fltZ == V.m_fltZ);
}

bool vecteur3D::operator!=(vecteur3D V)
{
	//cout << "test membre !=" << endl; //Ligne pour v�rifier si on passe bien dans la fonction
	return (this->m_fltX != V.m_fltX && this->m_fltY != V.m_fltY && this->m_fltZ != V.m_fltZ);
}
*/


//Fonctions amies
bool operator==(vecteur3D V1, vecteur3D V2)
{
	//cout << "test amie ==" << endl; //Ligne pour v�rifier si on passe bien dans la fonction
	return (V1.m_fltX == V2.m_fltX && V1.m_fltY == V2.m_fltY && V1.m_fltZ == V2.m_fltZ);
}

bool operator!=(vecteur3D V1, vecteur3D V2)
{
	cout << "test amie !=" << endl; //Ligne pour v�rifier si on passe bien dans la fonction
	return (V1.m_fltX != V2.m_fltX && V1.m_fltY != V2.m_fltY && V1.m_fltZ != V2.m_fltZ);
}