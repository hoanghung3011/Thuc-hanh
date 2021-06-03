#include "DaThuc.h"
#include <iostream>
using namespace std;
DaThuc::DaThuc()
{
}
DaThuc DaThuc::operator+(DaThuc& a)
{
	DaThuc b, c;
	if (a.bac >= b.bac)
	{
		c.bac = a.bac;
		c.heso = new float[c.bac + 1];
		for (int i = c.bac; i >= 0; i--)
		{
			if (i > b.bac)
				c.heso[i] = a.heso[i];
			else
			{
				if (i == b.bac)
				{
					c.heso[i] = a.heso[i] + b.heso[i];
					b.bac--;
				}
				else c.heso[i] = b.heso[i];
			}
		}
	}
	else
	{
		c.bac = b.bac;
		c.heso = new float[c.bac + 1];
		for (int i = c.bac; i >= 0; i--)
		{
			if (i > a.bac)
				c.heso[i] = b.heso[i];
			else
			{
				if (i == a.bac)
				{
					c.heso[i] = a.heso[i] + b.heso[i];
					a.bac--;
				}
				else c.heso[i] = a.heso[i];
			}
		}
	}
	return c;
}
DaThuc::~DaThuc()
{
}

istream& operator>>(istream& in, DaThuc& a)
{
	do
	{
		cout << "\nNhap bac cua da thuc: ";
		in >> a.bac;
		if (a.bac < 1)
			cout << "\nKhong hop le";
	} while (a.bac < 1);
	cout << "\nNhap cac he so: ";
	a.heso = new float[a.bac + 1];
	for (int i = 0; i < a.bac; i++)
	{
		cout << "\nHe so a[" << i << "]";
		cin >> a.heso[i];
	}
	return in;
}
ostream& operator<<(ostream& out, DaThuc& a)
{
	out << "\nDa thuc: ";
	for (int i = a.bac - 1; i > 1; i--)
	{
		if (a.heso[i] != 0)
			out << a.heso[i] << "x^" << i;
		if (a.heso[i - 1] > 0)
			out << " + ";
	}
	out << a.heso[1] << "x";
	if (a.heso[0] > 0)
		out << " + " << a.heso[0];
	else
		if (a.heso[0] < 0) 
			out << a.heso[0];
	return out;
}
int main()
{
	DaThuc a, b, c;
	cin >> a;
	cout << a;
	cout << "\n------------------------------------------\n";
	cin >> b;
	cout << b;
	cout << "\n------------------------------------------\n";
	c = a + b;
	cout << c;
	system("pause");
}