#include "vecteur3D_T.h"
#include <iostream>

using namespace std;

//Constructeur
vecteur3D_T::vecteur3D_T(float fltC1 = 0.0, float fltC2 = 0.0, float fltC3 = 0.0)
{
	this->m_fltV[1] = fltC1;
	this->m_fltV[2] = fltC2;
	this->m_fltV[3] = fltC3;

	//cout << "Creation objet de type vecteur3D" << endl;
}

//Destructeur
vecteur3D_T::~vecteur3D_T()
{
	//cout << "Destruction objet de type vecteur3D" << endl;
}