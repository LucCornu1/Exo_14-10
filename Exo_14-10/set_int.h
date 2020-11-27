#pragma once

class set_int
{
private:
	int *m_nAdr;
	int m_nMax;
	int m_nElem;

public:
	//Constructeur
	set_int(int max = 20);

	//Constructeur par copie
	set_int(set_int& const);

	//Destructeur
	~set_int();


	//Fonctions membres
	void add_int(int const);

	void afficheSet_int();

	int countSet_int() const;

	set_int& operator=(set_int& const);
};