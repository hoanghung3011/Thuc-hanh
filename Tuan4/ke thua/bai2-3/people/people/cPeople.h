#pragma once
#include "CNgay.h"
#include <string>
class cPeople
{
private:
	string name;
	CNgay brithday;
	string constry;
	int phone;
public:
	friend istream& operator >>(istream&, cPeople&);
	friend ostream& operator <<(ostream&, cPeople);
	cPeople();
	~cPeople();
};

