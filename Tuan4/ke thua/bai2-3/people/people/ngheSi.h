#pragma once
#include "cPeople.h"
class ngheSi : public cPeople
{
private:
	string loaiHinhNgheThuat;
	int tuoiNghe;
public:
	friend istream& operator >>(istream&, ngheSi&);
	friend ostream& operator <<(ostream&, ngheSi);
	ngheSi();
	~ngheSi();
};

