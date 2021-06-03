#include "PhanSo.h"
#include <iostream>
using namespace std;
PhanSo::PhanSo(float a, float b)
{
	tu = a;
	mau = b;
}
PhanSo PhanSo::operator+(PhanSo& a)
{
	PhanSo tong;
	tong.tu = tu * a.mau + a.tu * mau;
	tong.mau = mau * a.mau;
	return tong;
}
PhanSo PhanSo::operator-(PhanSo& a)
{
	PhanSo hieu;
	hieu.tu = tu * a.mau - a.tu * mau;
	hieu.mau = mau * a.mau;
	return hieu;
}
PhanSo PhanSo::operator*(PhanSo& a)
{
	PhanSo tich;
	tich.tu = tu * a.tu;
	tich.mau = mau * a.mau;
	return tich;
}
PhanSo PhanSo::operator/(PhanSo& a)
{
	PhanSo thuong;
	thuong.tu = tu * a.mau;
	thuong.mau = mau * a.tu;
	return thuong;
}
bool PhanSo::operator==(PhanSo& a)
{
	if (((tu * a.mau - mau * a.tu) / (mau * a.mau)) == 0)
		return true;
	return false;
}
bool PhanSo::operator!=(PhanSo& a)
{
	if (((tu * a.mau - mau * a.tu) / (mau * a.mau)) != 0)
		return true;
	return false;
}
bool PhanSo::operator>(PhanSo& a)
{
	if (((tu * a.mau - mau * a.tu) / (mau * a.mau)) > 0)
		return true;
	return false;
}
bool PhanSo::operator>=(PhanSo& a)
{
	if (((tu * a.mau - mau * a.tu) / (mau * a.mau)) >= 0)
		return true;
	return false;
}
bool PhanSo::operator<(PhanSo& a)
{
	if (((tu * a.mau - mau * a.tu) / (mau * a.mau)) < 0)
		return true;
	return false;
}
bool PhanSo::operator<=(PhanSo& a)
{
	if (((tu * a.mau - mau * a.tu) / (mau * a.mau)) <= 0)
		return true;
	return false;
}
PhanSo::~PhanSo()
{
}
istream& operator>>(istream& in, PhanSo& a)
{
	cout << "\nNhap tu so: ";
	in >> a.tu;
	cout << "\nNhap mau so: ";
	in >> a.mau;
	return in;
}
ostream& operator<<(ostream& out, PhanSo a)
{
	out << a.tu << "/" << a.mau;
	return out;
}