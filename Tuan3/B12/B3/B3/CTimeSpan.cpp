#include "CTimeSpan.h"
#include <iostream>
using namespace std;
CTimeSpan::CTimeSpan(int h, int m, int s)
{
	gio = h;
	phut = m;
	giay = s;
}
CTimeSpan CTimeSpan::operator+(CTimeSpan& a)
{
	CTimeSpan b;
	int c, d;
	b.giay = (giay + a.giay) % 60;
	c = (giay + a.giay) / 60;
	b.phut = (phut + a.phut + c) % 60;
	d = (phut + a.phut + c) / 60;
	b.gio = (gio + a.gio + d);
	return b;
}
CTimeSpan CTimeSpan::operator-(CTimeSpan& a)
{
	int b, c, d;
	int m, n;
	CTimeSpan k;
	b = a.gio * 3600 + a.phut * 60 + a.giay;
	c = gio * 3600 + phut * 60 + giay;
	d = abs(b - c);
	k.giay = d % 60;
	m = d / 60;
	k.phut = m % 60;
	n = m / 60;
	k.gio = n;
	return k;
}
bool CTimeSpan::operator==(CTimeSpan& a)
{
	int b, c;
	b = gio * 3600 + phut * 60 + giay;
	c = a.gio * 3600 + a.phut * 60 + a.giay;
	if (b == c) return true;
	return false;
}
bool CTimeSpan::operator!=(CTimeSpan& a)
{
	int b, c;
	b = gio * 3600 + phut * 60 + giay;
	c = a.gio * 3600 + a.phut * 60 + a.giay;
	if (b != c) return true;
	return false;
}
bool CTimeSpan::operator>(CTimeSpan& a)
{
	int b, c;
	b = gio * 3600 + phut * 60 + giay;
	c = a.gio * 3600 + a.phut * 60 + a.giay;
	if (b > c) return true;
	return false;
}
bool CTimeSpan::operator>=(CTimeSpan& a)
{
	int b, c;
	b = gio * 3600 + phut * 60 + giay;
	c = a.gio * 3600 + a.phut * 60 + a.giay;
	if (b >= c) return true;
	return false;
}
bool CTimeSpan::operator<(CTimeSpan& a)
{
	int b, c;
	b = gio * 3600 + phut * 60 + giay;
	c = a.gio * 3600 + a.phut * 60 + a.giay;
	if (b < c) return true;
	return false;
}
bool CTimeSpan::operator<=(CTimeSpan& a)
{
	int b, c;
	b = gio * 3600 + phut * 60 + giay;
	c = a.gio * 3600 + a.phut * 60 + a.giay;
	if (b <= c) return true;
	return false;
}
CTimeSpan::~CTimeSpan()
{
}
istream& operator>>(istream& in, CTimeSpan& a)
{
	do
	{
		cout << "\nNhap gio: ";
		in >> a.gio;
		if (a.gio < 0 || a.gio >24)
			cout << "Moi nhap lai!";
	} while (a.gio < 0 || a.gio > 24);
	do
	{
		cout << "\nNhap phut: ";
		in >> a.phut;
		if (a.phut < 0 || a.phut > 60)
			cout << "Moi nhap lai!";
	} while (a.phut < 0 || a.phut > 60);
	do
	{
		cout << "\nNhap giay: ";
		in >> a.giay;
		if (a.giay < 0 || a.giay > 60)
			cout << "Moi nhap lai!";
	} while (a.giay < 0 || a.giay > 60);
	return in;
}
ostream& operator<<(ostream& out, CTimeSpan a)
{
	out << a.gio << "::" << a.phut << "::" << a.giay;
	return out;
}
