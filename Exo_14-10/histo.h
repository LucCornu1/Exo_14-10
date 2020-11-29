#pragma once

class histo
{
private:
	float* m_fltTab;
	float m_fltMin;
	float m_fltMax;
	int m_nInter;

public:
	//Constructeur
	histo(float = 0.0, float = 10.0, int = 10);

	//Destructeur
	~histo();


	//Fonctions membres
	void operator[](const int) const;


	//Fonctions amies
	friend void operator<<(histo&, const float);
};