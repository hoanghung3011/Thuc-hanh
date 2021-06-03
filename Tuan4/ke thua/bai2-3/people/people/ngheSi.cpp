#include "ngheSi.h"

istream& operator >>(istream& is, ngheSi& n) {
	cPeople* cha = static_cast<cPeople*>(&n);
	is >> *cha;
	cout << "\nTuoi nghe: ";
	is >> n.tuoiNghe;
	cout << "\nNhap loai hinh nghe thuat: ";
	cin.ignore();
	getline(is, n.loaiHinhNgheThuat);

	return is;
}
ostream& operator <<(ostream& os, ngheSi n) {
	cPeople cha = static_cast<cPeople>(n);
	os << cha;
	cout << "\nLoai hinh nghe  thuat: " << n.loaiHinhNgheThuat;
	cout << "\nTuoi nghe: " << n.tuoiNghe;
	return os;
}

ngheSi::ngheSi()
{
}


ngheSi::~ngheSi()
{
}
