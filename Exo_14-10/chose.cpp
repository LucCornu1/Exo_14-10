#include "chose.h"
#include <iostream>

using namespace std;

//Constructeur
chose::chose()
{
	this->m_nX = 0;
	cout << "Creation objet de type chose" << endl;
}

//Destructeur
chose::~chose()
{
	cout << "Destruction objet de type chose" << endl;
}