#include "CTime.h"
#include <iostream>
using namespace std;
CTime::CTime(int h, int m, int s)
{
	gio = h;
	phut = m;
	giay = s;
}
CTime CTime::operator+(int x)
{
	CTime b;
	int c, d, e;
	c = gio * 3600 + phut * 60 + giay + x; // tang x so nguyen giay
	b.giay = c % 60;
	d = c / 60;
	b.phut = d % 60;
	e = d / 60;
	b.gio = e;
	return b;
}
CTime CTime::operator-(int x)
{
	CTime b;
	int c, d, e;
	c = gio * 3600 + phut * 60 + giay - x; // giam x so nguyen giay
	b.giay = c % 60;
	d = c / 60;
	b.phut = d % 60;
	e = d / 60;
	b.gio = e;
	return b;
}
CTime CTime::operator-(CTime& a)
{
	int b, c, d;
	int m, n;
	CTime k;
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
CTime CTime::operator++()
{
	giay++;
	if (giay >= 60)
	{
		giay -= 60;
		phut++;
	}
	if (phut >= 60)
	{
		phut -= 60;
		gio++;
	}
	return *this;
}
CTime CTime::operator--(int x)
{
	giay--;
	return *this;
}
CTime::~CTime()
{
}
istream& operator>>(istream& in, CTime& a)
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
ostream& operator<<(ostream& out, CTime a)
{
	out << a.gio << "::" << a.phut << "::" << a.giay;
	return out;
}