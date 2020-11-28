#include "int2d.h"
#include <iostream>

using namespace std;

//Constructeur
int2d::int2d(int maxX, int maxY)
{
	this->m_nElemX = 0;
	this->m_nElemY = 0;
	//cout << maxX << " " << maxY << endl; //Vérification de maxX et maxY
	this->m_nMaxX = maxX;
	this->m_nMaxY = maxY;
	this->m_nAdr = new int* [this->m_nMaxX];

	int i;
	for (i = 0; i < this->m_nMaxX; i++)
	{
		this->m_nAdr[i] = new int[this->m_nMaxY];
	}
}

//Destructeur
int2d::~int2d()
{
	delete[] this->m_nAdr;
}


//Fonctions membres
int& int2d::operator()(int const X, int const Y)
{
	if ((X >= 0) && (X < this->m_nMaxX) && (X >= 0) && (Y < this->m_nMaxY))
	{
		return this->m_nAdr[X][Y];
	}
	else {
		cout << "Vous êtes hors du tableau" << endl;
		exit(1);
	}
}