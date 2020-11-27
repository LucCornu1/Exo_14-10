#include "vecteur3D_T.h"
#include <iostream>

using namespace std;

//Constructeur
vecteur3D_T::vecteur3D_T(float fltC1, float fltC2, float fltC3)
{
	this->m_fltV[0] = fltC1;
	this->m_fltV[1] = fltC2;
	this->m_fltV[2] = fltC3;

	//cout << "Creation objet de type vecteur3D_T" << endl;
}

//Destructeur
vecteur3D_T::~vecteur3D_T()
{
	//cout << "Destruction objet de type vecteur3D_T" << endl;
}


//Fonctions membres
/* //PREMIER POINT
float& vecteur3D_T::operator[](int i)
{
	if ((i >= 0) && (i < 3))
	{
		return this->m_fltV[i];
	}
	else {
		cout << "Vous êtes hors du tableau" << endl;
		exit(1);
	}
}*/

float vecteur3D_T::operator[](int i) const
{
	if ((i >= 0) && (i < 3))
	{
		return this->m_fltV[i];
	}
	else {
		cout << "Vous êtes hors du tableau" << endl;
		exit(1);
	}
}