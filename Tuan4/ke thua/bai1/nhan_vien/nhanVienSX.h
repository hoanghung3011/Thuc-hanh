#pragma once
#include "nhanVien.h"
class nhanVienSX : public nhanVien 
{
private:
	int salaryBasic;
	int numProduct;
public:
	friend istream& operator >>(istream&, nhanVienSX&);
	friend ostream& operator <<(ostream&, nhanVienSX);
	int& Salary(nhanVienSX&);
	nhanVienSX();
	~nhanVienSX();
};

