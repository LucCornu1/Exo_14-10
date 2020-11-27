#include "vect.h"
#include <iostream>

using namespace std;

//Constructeur
vect::vect(int n)
{
	this->m_nElem = 0;
	this->m_nMax = n;
	this->m_fltV = new float[this->m_nMax];

	//cout << "Creation objet de type vect" << endl;
}

//Destructeur
vect::~vect()
{
	//cout << "Destruction objet de type vect" << endl;
}


//Fonctions membres
float& vect::operator[](int i)
{
	if ((i >= 0) && (i < this->m_nMax))
	{
		return this->m_fltV[i];
	}
	else {
		cout << "Vous êtes hors du tableau" << endl;
		exit(1);
	}
}