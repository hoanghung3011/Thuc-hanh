#pragma once
#include "cPeople.h"
class hocSinh : public cPeople
{
private: 
	string lop;
	string school;
public:
	friend istream& operator >>(istream&, hocSinh&);
	friend ostream& operator <<(ostream&, hocSinh);
	hocSinh();
	~hocSinh();
};

