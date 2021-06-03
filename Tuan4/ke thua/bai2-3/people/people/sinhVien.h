#pragma once
#include "cPeople.h"
class sinhVien : public  cPeople
{
private:
	int ID;
	string lop;
	string school;
public:
	friend istream& operator >>(istream&, sinhVien&);
	friend ostream& operator <<(ostream&, sinhVien);
	sinhVien();
	~sinhVien();
};

