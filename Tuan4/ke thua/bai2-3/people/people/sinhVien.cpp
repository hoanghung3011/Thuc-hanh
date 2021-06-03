#include "sinhVien.h"

istream& operator >>(istream& is, sinhVien& n) {
	cPeople* cha = static_cast<cPeople*>(&n);
	is >> *cha;
	cout << "\nNhap ID: ";
	is >> n.ID;
	cout << "\nNhap ten truong: ";
	cin.ignore();
	getline(is, n.school);
	cout << "\nnhap ten lop: ";
	getline(is, n.lop);
	
	return is;
}
ostream& operator <<(ostream& os, sinhVien n) {
	cPeople cha = static_cast<cPeople>(n);
	os << cha;
	cout << "\nID: " << n.ID;
	cout << "\nTruong: " << n.school;
	cout << "\nLop: " << n.lop;
	return os;
}

sinhVien::sinhVien()
{
}


sinhVien::~sinhVien()
{
}
