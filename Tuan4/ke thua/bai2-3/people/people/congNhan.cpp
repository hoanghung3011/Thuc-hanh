#include "congNhan.h"

istream& operator >>(istream& is, congNhan& n) {
	cPeople* cha = static_cast<cPeople*>(&n);
	is >> *cha;
	cout << "\nNhap luong: ";
	is >> n.salary;
	cout << "\nNhap noi lam viec: ";
	cin.ignore();
	getline(is, n.noiLamViec);

	return is;
}
ostream& operator <<(ostream& os, congNhan n) {
	cPeople cha = static_cast<cPeople>(n);
	os << cha;
	cout << "\nNoi lam viec: " << n.noiLamViec;
	cout << "\nLuong: " << n.salary;
	return os;
}

congNhan::congNhan()
{
}


congNhan::~congNhan()
{
}
