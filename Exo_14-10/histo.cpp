#include "histo.h"
#include <iostream>

using namespace std;

//Constructeur
histo::histo(float min, float max, int nInter)
{
	this->m_nInter = nInter;
	this->m_fltMin = min;
	this->m_fltMax = max;
	this->m_fltTab = new float[this->m_nInter];
}

histo::~histo()
{
	delete[] this->m_fltTab;
}


//Fonctions membres
void histo::operator[](const int X) const
{
	if ((X >= 0) && (X < this->m_nInter))
	{
		//return this->m_fltTab[X];
		cout << "On retourne la valeur de h[" << X << "]" << endl;
	}
	else {
		cout << "On retourne la valeur de h[1]" << endl;
	}
}


//Fonctions amies
void operator<<(histo& h, const float X)
{
	if (X < h.m_fltMin || X > h.m_fltMax)
	{
		cout << "Vous depassez les bornes" << endl; //N'ayant pas compris l'énoncé, voici une ligne de remplacement
	}
	else
	{
		cout << "Insertion d'une valeur" << endl; //N'ayant pas compris l'énoncé, voici une ligne de remplacement
	}
}