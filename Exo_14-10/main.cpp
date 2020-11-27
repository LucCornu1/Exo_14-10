#include "chose.h"
#include "CPoint.h"
#include "vecteur3D.h"
#include "set_int.h"
#include "vecteur3D_T.h"
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

	int nNb, i;

	for (i = 0; i < max; i++)
	{
		cin >> nNb;
		E.add_int(nNb);
	}

	set_int Ep(E);

	int count = Ep.countSet_int();

	cout << endl << "Il y a : " << count << " nombre(s) different(s)" << endl << endl;

	cout << "Pour qu'un objet du type set_int puisse etre transmis par valeur, il faudrait créer un constructeur de copie, pour que l'objet ne soit pas détruit au return d'une fonction" << endl;


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
	vecteur3D V3;
	V3 = V1 + V2;

	cout << "Le vecteur V3 est egal a : " << endl;
	V3.afficheVecteur();

	float flt_S;
	flt_S = V1 * V2;
	cout << endl << "Le (produit) Scalaire de V1 par V2 est : " << flt_S << endl;


	//Exercice 86
	cout << endl << endl << "Exercice 86" << endl;

	vecteur3D_T VT1(1.3, 2.0, 3.0);

	float n_86 = 0.0;

	n_86 = VT1[0];

	cout << n_86 << endl;

	VT1[0] = 89.3;

	cout << VT1[0] << endl;

	//Exercice 87
	cout << endl << endl << "Exercice 87" << endl;
	

	return 0;
}