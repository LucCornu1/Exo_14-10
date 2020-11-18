#include "chose.h"
#include "CPoint.h"
#include "vecteur3D.h"
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

	bool b;
	int X, Y, Z;


	//Création de V1
	cout << "X : ";
	cin >> X;

	cout << endl << "Y : ";
	cin >> Y;

	cout << endl << "Z : ";
	cin >> Z;

	vecteur3D V1(X, Y, Z);


	//Création de V2
	cout << endl << "X : ";
	cin >> X;

	cout << endl << "Y : ";
	cin >> Y;

	cout << endl << "Z : ";
	cin >> Z;

	vecteur3D V2(X, Y, Z);


	//Vérification
	b = (V1 == V2);

	if (b)
	{
		cout << "Les deux vecteurs sont egaux" << endl;
	}
	else {
		cout << "Les deux vecteurs ne sont pas egaux" << endl;
	}

	return 0;
}