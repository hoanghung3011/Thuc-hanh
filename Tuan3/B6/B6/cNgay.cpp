#include "cNgay.h"
#include <iostream>
using namespace std;
cNgay::cNgay(int a, int b, int c)
{
	y = a;
	m = b;
	d = c;
}
bool cNgay::operator<(cNgay& a)
{
	if (y < a.y)
	{
		if (m < a.m)
			if (d < a.d)
				return true;
	}
	return false;
}
cNgay::~cNgay()
{
}
istream& operator>>(istream& in, cNgay& a)
{
	cout << "\nNhap ngay: ";
	in >> a.d;
	cout << "\nNhap thang: ";
	in >> a.m;
	cout << "\nNhap nam: ";
	in >> a.y;
	return in;
}
ostream& operator<<(ostream& out, cNgay& a)
{
	out << a.d << "/" << a.m << "/" << a.y;
	return out;
}
int main()
{
	cNgay ng1;
	cNgay ng2(2017, 1);
	cNgay ng3(2017, 1, 7);
	cin >> ng1;
	cout << ng1;
	if (ng1 < ng2)
		cout << "Ngay 1 truoc ngay 2";
	else
		cout << "Ngay 1 khong truoc ngay 2";
}