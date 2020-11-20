#pragma once

class vecteur3D
{
private:
	float m_fltX;
	float m_fltY;
	float m_fltZ;

public:
	//Constructeur
	vecteur3D(float, float, float);

	//Destructeur
	~vecteur3D();


	//Fonctions membres
	/*
	bool operator==(vecteur3D);

	bool operator!=(vecteur3D);
	*/


	//Fonctions amies
	friend bool operator==(vecteur3D, vecteur3D);

	friend bool operator!=(vecteur3D, vecteur3D);
};