#pragma once

class CPoint
{
private:
	int m_nNombre;

	static int m_nCompt;

public:
	//Constructeur
	CPoint();

	//Destructeur
	~CPoint();

	int nombre();
};