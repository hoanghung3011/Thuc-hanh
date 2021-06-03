#include <iostream>
#include "thoigian.h"
using namespace std;
Thoigian::Thoigian()
{
	gio = 0;
	phut = 0;
	giay = 0;
}
void Thoigian::set(int gio, int phut, int giay)
{
	gio = phut = giay = 0;
}
void Thoigian::nhap()
{
	do
	{
		cout << "\nNhap vao gio: ";
		cin >> gio;
		if (gio < 0 || gio > 24)
			cout << "Nhap sai, yeu cau nhap lai gio: ";
	} while (gio < 0 || gio > 24);
	do
	{
		cout << "Nhap vao phut: ";
		cin >> phut;
		if (phut < 0 || phut > 60)
			cout << "Nhap sai, yeu cau nhap lai phut: ";
	} while (phut < 0 || phut > 60);
	do
	{
		cout << "Nhap vao giay: ";
		cin >> giay;
		if (giay < 0 || giay > 60)
			cout << "Nhap sai, yeu cau nhap lai giay: ";
	} while (giay < 0 || giay > 60);
}
void Thoigian::xuat()
{
	cout << gio << ":" << phut << ":" << giay << "\n";
}
void Thoigian::tanggiay()
{
	if (giay < 59)
	{
		giay += 1;
	}
	else
	{
		giay = 0;
		if (phut < 59)
		{
			phut += 1;
		}
		else
		{
			phut = 0;
			if (gio < 23)
				gio += 1;
			else gio = 0;
		}
	}
}
Thoigian::~Thoigian()
{

}