#include "CPoint.h"
#include <iostream>

using namespace std;

int CPoint::m_nCompt = 0;

//Constructeur
CPoint::CPoint()
{
	m_nCompt++;
	this->m_nNombre = m_nCompt;

	cout << "Le point numero : " << m_nCompt << " a ete cree" << endl;
}

//Destructeur
CPoint::~CPoint()
{
	cout << "Le point numero : " << m_nCompt << " a ete detruit" << endl;

	m_nCompt--;
}


//Fonctions membres
int CPoint::nombre()
//BUT : Fournir à l'utulisateur le nombre de points à un instant donné
//ENTREE : /
//SORTIE : Le nombre de points existants
{
	return m_nCompt;
}