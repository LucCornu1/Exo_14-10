#pragma once

class int2d
{
private:
	int** m_nAdr;
	int m_nMaxX;
	int m_nMaxY;
	int m_nElemX;
	int m_nElemY;

public:
	//Constructeur
	int2d(int = 20, int = 20);

	//Destructeur
	~int2d();


	//Fonctions membres
	int& operator()(int const, int const);
};