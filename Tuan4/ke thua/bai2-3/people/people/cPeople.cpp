#include "cPeople.h"

istream& operator >>(istream& is, cPeople& n) {
	cout << "\nNhap ten: ";
	cin.ignore();
	getline(is, n.name);
	cout << "\nNhap que quan: ";
	getline(is, n.constry);
	cout << "\nNhap ngay sinh: ";
	is >> n.brithday;
	cout << "\nNhap sdt: ";
	is >> n.phone;
	return is;
}
ostream& operator <<(ostream& os, cPeople n) {
	os << "\nHo ten: " << n.name;
	os << "\nNgay sinh: " << n.brithday;
	os << "\nQue quan: " << n.constry;
	os << "\nSdt: " << n.phone;
	return os;
}

cPeople::cPeople()
{
}


cPeople::~cPeople()
{
}
