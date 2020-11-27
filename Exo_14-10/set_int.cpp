#include "set_int.h"
#include <iostream>
#include <algorithm>

using namespace std;

//Constructeur
set_int::set_int(int max)
{
	this->m_nElem = 0;
	this->m_nMax = max;
	this->m_nAdr = new int[this->m_nMax];
}

//Constructeur par copie
set_int::set_int(set_int& E)
{
	this->m_nElem = E.m_nElem;
	this->m_nMax = E.m_nMax;
	this->m_nAdr = new int[this->m_nMax];

	int i;
	for (i = 0; i < this->m_nElem; i++)
	{
		this->m_nAdr[i] = E.m_nAdr[i];
	}
}

//Destructeur
set_int::~set_int()
{
	delete[] this->m_nAdr;
}


//Fonctions membres
void set_int::add_int(int const n)
{
	if (this->m_nElem < this->m_nMax)
	{
		this->m_nAdr[m_nElem] = n;
		this->m_nElem++;
		//cout << this->m_nAdr[m_nElem] << endl;
	}
}

int set_int::countSet_int() const
{
	int compt = 1;

	int i, j, b;

	//Ma version
	for (i = 1; i < this->m_nElem; i++)
	{
		j = 0;
		b = 0;

		while (j < i && b == 0)
		{
			if (this->m_nAdr[i] == this->m_nAdr[j])
			{
				b = 1;
			}

			j++;
		}
 
		if (i == j && b == 0)
		{
			compt++;
		}
	}

	/* //Version donnée par un ami, je l'ai utilisée pour tester et comparer les résultats. Elle est interessante dans sa manière de fonctionner, et semble plus optimisée
	std::sort(this->m_nAdr, this->m_nAdr + this->m_nElem); //http://www.cplusplus.com/reference/algorithm/sort/

	int k;
	compteur = 0;

	for (k = 0; k < this->m_nElem; k++)
	{
		while ((k < this->m_nElem - 1) && (this->m_nAdr[k] == this->m_nAdr[k + 1]))
		{
			k++;
		}

		compt++;
	}
	*/

	return compt;
}

set_int& set_int::operator=(set_int& E)
{
	this->m_nElem = E.m_nElem;
	this->m_nMax = E.m_nMax;
	this->m_nAdr = new int[this->m_nMax];

	int i;
	for (i = 0; i < this->m_nElem; i++)
	{
		this->m_nAdr[i] = E.m_nAdr[i];
	}

	return *this;
}

void set_int::afficheSet_int()
{
	cout << "Nombre d'elements dans l'ensemble : " << this->m_nElem << endl;
	cout << "Nombre maximum d'elements dans l'ensemble : " << this->m_nMax << endl;
	cout << "Liste des nombres de l'ensemble : " << endl;

	int i;
	for (i = 0; i < this->m_nElem; i++)
	{
		cout << "-- Emplacement " << i << " : " << this->m_nAdr[i] << endl;
	}
}

void set_int::operator<(int n)
{
	if (this->m_nElem < this->m_nMax)
	{
		this->m_nAdr[m_nElem] = n;
		this->m_nElem++;
		//cout << this->m_nAdr[m_nElem] << endl;
	}
	else {
		cout << "Vous avez déjà atteint le maximum" << endl;
	}
}

bool set_int::operator[](int n)
{
	int i;
	for (i = 0; i < this->m_nElem; i++)
	{
		if (this->m_nAdr[i] == n)
		{
			return 1;
		}
	}

	return 0;
}