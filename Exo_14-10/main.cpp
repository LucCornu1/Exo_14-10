#include "chose.h"
#include "CPoint.h"
#include <iostream>

using namespace std;

int main()
{
	//Exercice 74
	cout << "Exercice 74" << endl;
	chose x;
	cout << "Bonjour" << endl;

	//chose* adc = new chose; //Cette ligne appellera le constructeur et affichera "Creation objet de type chose", mais pas "Destruction objet de type chose"


	//Exercice 76
	cout << endl << endl << "Exercice 76" << endl;

	CPoint* tab;

	tab = new CPoint[4];

	cout << tab[0].nombre() << endl;

	delete[] tab;


	//Exercice 77
	cout << endl << endl << "Exercice 77" << endl;


	//Exercice 84
	cout << endl << endl << "Exercice 84" << endl;

	return 0;
}