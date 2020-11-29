#include "chose.h"
#include "CPoint.h"
#include "vecteur3D.h"
#include "set_int.h"
#include "vecteur3D_T.h"
#include "vect.h"
#include "int2d.h"
#include "histo.h"
#include <iostream>

using namespace std;

int main()
{
	/*//Exercice 74
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

	int nNb, i, cardinal;

	cout << "Veuillez entrer les valeurs a inserer dans l'ensemble : " << endl;

	for (i = 0; i < max; i++) // Ici on rempli forcément l'ensemble, mais on pourrai s'arrêter avant sans problème avec un while ou en modifiant la valeur max dans la boucle for
	{
		cin >> nNb;
		E.add_int(nNb);
	}

	cardinal = E.cardinal_int();

	cout << "Le cardinal est : " << cardinal << endl;

	if (E.search_int(1))
	{
		cout << "Le chiffre 1 est present" << endl;
	}
	else {
		cout << "Le chiffre 1 n'est pas present" << endl;
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

	cout << endl << endl;*/


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

	/*//Vérification !=
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
	
	set_int E1, E2;

	E2 = E1 = E;

	cout << endl << "Affichage de E1 :" << endl;
	E1.afficheSet_int();

	cout << endl << "Affichage de E2 :" << endl;
	E2.afficheSet_int();


	//Exercice 88
	cout << endl << endl << "Exercice 88" << endl;

	set_int E3;

	E3 < 2018;
	E3 < 2019;
	E3 < 2021;
	E3 < 2022;

	cout << endl << "Affichage de E3 :" << endl;
	E3.afficheSet_int();

	cout << endl;
	
	cout << "Presence de 2020 dans E3 : ";
	if (E3[2020])
	{
		cout << "Vrai" << endl;
	}
	else {
		cout << "Faux" << endl;
	}
	
	cout << "Presence de 2019 dans E3 : ";
	if (E3[2019])
	{
		cout << "Vrai" << endl;
	}
	else {
		cout << "Faux" << endl;
	}


	//Exercice 89
	cout << endl << endl << "Exercice 89" << endl;

	//Pour le premier point, voir "PREMIER POINT" dans vecteur3D_T.cpp, ou l'exercice 89

	vecteur3D_T VT2(1.3, 2.0, 3.0);

	float n_89 = 0.0;

	n_89 = VT2[0];

	cout << n_89 << endl;

	//VT2[0] = 159.3; //IMPOSSIBLE, car la surcharge de l'opérateur[] est défini comme étant constante
	

	//Exercice 90
	cout << endl << endl << "Exercice 90" << endl;

	vect t(3);

	float fltX, fltY, fltZ;

	cout << "Creation du vecteur t : " << endl;
	cout << "X : ";
	cin >> fltX;

	cout << endl << "Y : ";
	cin >> fltY;

	cout << endl << "Z : ";
	cin >> fltZ;

	t[0] = fltX;
	t[1] = fltY;
	t[2] = fltZ;

	cout << endl << "Affichage du vecteur t : " << endl;
	cout << "X : " << t[0] << endl << "Y : " << t[1] << endl << "Z : " << t[2] << endl;


	//Exercice 91
	cout << endl << endl << "Exercice 91" << endl;

	int2d R(10, 10);

	R(0, 0) = 32;

	cout << "R(0, 0) = " << R(0, 0) << endl;

	R(0, 1) = 50;

	cout << "R(0, 1) = " << R(0, 1) << endl;

	R(1, 0) = 19;

	cout << "R(1, 0) = " << R(1, 0) << endl;
	*/


	//Exercice 92
	//IMPORTANT, l'exercice a été complété de manière à démontrer que je sais surcharger les opérateurs. Cependant je n'ai pas compris l'énoncé, j'ai donc modifié certaines fonctions pour ne rien retourner
	cout << endl << endl << "Exercice 92" << endl;

	histo H(0.0, 10.0, 10);

	int nHisto, nHisto2;
	cout << "Veuillez enter un nombre entre 0.0 et 10.0 : ";
	cin >> nHisto;
	cout << endl;

	H << nHisto;

	cout << "Veuillez enter un nombre entre 0 et 10 : ";
	cin >> nHisto2;
	cout << endl;

	H[nHisto2];

	return 0;
}