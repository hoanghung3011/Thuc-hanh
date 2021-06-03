#include "hocSinh.h"

istream& operator >>(istream& is, hocSinh& n) {
	cPeople* cha = static_cast<cPeople*>(&n);
	is >> *cha;
	cout << "\nNhap ten truong: ";
	cin.ignore();
	getline(is, n.school);
	cout << "\nnhap ten lop: ";
	getline(is, n.lop);

	return is;
}
ostream& operator <<(ostream& os, hocSinh n) {
	cPeople cha = static_cast<cPeople>(n);
	os << cha;
	cout << "\nTruong: " << n.school;
	cout << "\nLop: " << n.lop;
	return os;
}

hocSinh::hocSinh()
{
}


hocSinh::~hocSinh()
{
}
