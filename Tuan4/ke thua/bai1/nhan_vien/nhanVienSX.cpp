#include "nhanVienSX.h"

istream& operator >>(istream& is, nhanVienSX& n) {
	nhanVien* cha = static_cast<nhanVien*>(&n);
	is >> *cha;
	cout << "\nNhap luong co ban: ";
	is >> n.salaryBasic;
	cout << "\nNhap so san pham: ";
	is >> n.numProduct;
	return is;
}
ostream& operator <<(ostream& os, nhanVienSX n) {
	int sal = n.Salary;
	os << "\nLuong: " << sal;
	return os;
}

int& nhanVienSX::Salary(nhanVienSX &n) {
	return n.salaryBasic + n.numProduct * 5000;
}


nhanVienSX::nhanVienSX()
{
}


nhanVienSX::~nhanVienSX()
{
}
