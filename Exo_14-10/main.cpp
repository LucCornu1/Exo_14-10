#include "chose.h"
#include "CPoint.h"
#include "vecteur3D.h"
#include "set_int.h"
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

	int n, max;
	
	cout << "Veuillez entrer un maximum : ";
	cin >> max;
	cout << endl;

	set_int E(max);

	E.add_int(1);

	E.add_int(43);


	//Exercice 84
	cout << endl << endl << "Exercice 84" << endl;

	bool b;
	int X, Y, Z;


	//Création de V1
	cout << "Creation de V1 : " << endl;
	cout << "X : ";
	cin >> X;

	cout << endl << "Y : ";
	cin >> Y;

	cout << endl << "Z : ";
	cin >> Z;

	vecteur3D V1(X, Y, Z);

	cout << endl << endl;


	//Création de V2
	cout << "Creation de V2 : " << endl;
	cout << "X : ";
	cin >> X;

	cout << endl << "Y : ";
	cin >> Y;

	cout << endl << "Z : ";
	cin >> Z;

	vecteur3D V2(X, Y, Z);

	cout << endl << endl;


	//Vérification ==
	/*
	b = (V1 == V2);

	if (b)
	{
		cout << "Les deux vecteurs sont egaux" << endl;
	}
	else {
		cout << "Les deux vecteurs ne sont pas egaux" << endl;
	}
	*/

	//Vérification !=
	b = (V1 != V2);

	if (!b)
	{
		cout << "Les deux vecteurs sont egaux" << endl;
	}
	else {
		cout << "Les deux vecteurs ne sont pas egaux" << endl;
	}


	//Exercice 85
	cout << endl << endl << "Exercice 85" << endl;
	//Vérification +
	vecteur3D V3 = V1 + V2;

	cout << "Le vecteur V3 est egal a : " << endl;
	V3.afficheVecteur();

	float flt_S;
	flt_S = V1 * V2;
	cout << endl << "Le (produit) Scalaire de V1 par V2 est : " << flt_S << endl;

	return 0;
}