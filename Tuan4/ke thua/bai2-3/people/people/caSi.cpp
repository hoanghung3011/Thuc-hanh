#include "caSi.h"

istream& operator >>(istream& is, caSi& n) {
	cPeople* cha = static_cast<cPeople*>(&n);
	is >> *cha;
	cout << "\nTuoi nghe: ";
	is >> n.tuoiNghe;
	cout << "\nNhap dong nhac: ";
	cin.ignore();
	getline(is, n.type);

	return is;
}
ostream& operator <<(ostream& os, caSi n) {
	cPeople cha = static_cast<cPeople>(n);
	os << cha;
	cout << "\nDong nhac: " << n.type;
	cout << "\nTuoi nghe: " << n.tuoiNghe;
	return os;
}

caSi::caSi()
{
}


caSi::~caSi()
{
}
