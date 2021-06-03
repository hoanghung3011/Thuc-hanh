#include "PhanSo.h"
#include <iostream>
using namespace std;
PhanSo::PhanSo(int a, int b)
{
	t = a;
	m = b;
}
void PhanSo::xuat()
{
	cout << t << "/" << m;
}
PhanSo PhanSo::operator+(PhanSo& a)
{
	PhanSo b;
	b.t = t * a.m + m * a.t;
	b.m = m * a.m;
	return b;
}
PhanSo::~PhanSo()
{
}
istream& operator>>(istream& in, PhanSo& a)
{
	cout << "\nNhap tu va mau: ";
	in >> a.t >> a.m;
	return in;
}
int main()
{
	PhanSo a;
	PhanSo b(1, 2);
	PhanSo c(3);
	a = b + c;
	a.xuat();
}