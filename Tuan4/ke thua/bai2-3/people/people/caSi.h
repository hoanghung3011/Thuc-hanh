#pragma once
#include "cPeople.h"
class caSi : public cPeople
{
private:
	string type;
	int tuoiNghe;
public:
	friend istream& operator >>(istream&, caSi&);
	friend ostream& operator <<(ostream&, caSi);
	caSi();
	~caSi();
};

