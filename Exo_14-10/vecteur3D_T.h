#pragma once

class vecteur3D_T
{
private:
	float m_fltV[3];

public:
	//Constructeur
	vecteur3D_T(float = 0.0, float = 0.0, float = 0.0);

	//Destructeur
	~vecteur3D_T();


	//Fonctions membres
	float& operator[](int);
};