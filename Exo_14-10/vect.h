#pragma once

class vect
{
private:
	float* m_fltV;
	int m_nMax;
	int m_nElem;

public:
	//Constructeur
	vect(int = 2);

	//Destructeur
	~vect();


	//Fonctions membres
	float& operator[](int);
};