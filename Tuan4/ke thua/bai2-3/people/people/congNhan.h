#pragma once
#include "cPeople.h"
class congNhan : public cPeople
{
private:
	string noiLamViec;
	int salary;
public:
	friend istream& operator >>(istream&, congNhan&);
	friend ostream& operator <<(ostream&, congNhan);
	congNhan();
	~congNhan();
};

