#include "set_int.h"
#include <iostream>

using namespace std;

//Constructeur
set_int::set_int(int max)
{
	this->m_nElem = 0;
	this->m_nMax = max;
	this->m_nAdr = new int[this->m_nMax];
}

//Destructeur
set_int::~set_int()
{
	
}


//Fonctions membres
void set_int::add_int(int n)
{
	if (this->m_nElem < this->m_nMax)
	{
		this->m_nElem++;

		this->m_nAdr[m_nElem] = n;
		cout << this->m_nAdr[m_nElem] << endl;
	}
}