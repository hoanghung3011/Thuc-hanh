#include "DaThuc.h"
DaThuc::DaThuc()
{
}
int DaThuc::giatri(int x)
{
	return (a * x * 2) + (b * x) + c;
}
DaThuc DaThuc::operator+(DaThuc& x)
{
	DaThuc y;
	y.a = a + x.a;
	y.b = b + x.b;
	y.c = c + x.c;
	return y;
}
DaThuc::~DaThuc()
{
}
istream& operator>>(istream& in, DaThuc& x)
{
	cout << "\nNhap a, b ,c: ";
	in >> x.a >> x.b >> x.c;
	return in;
}
ostream& operator<<(ostream& out, DaThuc& x)
{
	out << x.a << "x^2 + " << x.b << "x + " << x.c;
	return out;
}
