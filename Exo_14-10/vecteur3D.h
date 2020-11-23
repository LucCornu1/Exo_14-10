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
	bool operator==(vecteur3D&) const;

	bool operator!=(vecteur3D&) const;
	*/

	void afficheVecteur() const;


	//Fonctions amies
	friend bool operator==(vecteur3D&, vecteur3D&);

	friend bool operator!=(vecteur3D&, vecteur3D&);

	friend vecteur3D operator+(vecteur3D&, vecteur3D&);
};