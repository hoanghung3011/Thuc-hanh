#include "CDate.h"
#include <iostream>
using namespace std;
CDate::CDate(int d, int m, int y)
{
	ngay = d;
	thang = m;
	nam = y;
}
bool CDate::kt(int& a, int& b, int& c)
{
	switch (b)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: if (a < 0 || a > 31) return false; break;
	case 4:
	case 6:
	case 9:
	case 11: if (a < 0 || a > 30) return false; break;
	case 2:
		if ((c % 400 == 0) || (c % 4 == 0 && c % 100 == 0))
		{
			if (a < 0 || a > 29) return false;
		}
		else if (a < 0 || a > 28) return false; break;
	}
	return true;
}
CDate CDate::operator+(int x)
{
	CDate a;
	a.ngay = ngay;
	a.thang = thang;
	a.nam = nam;
	int k = a.ngay + x;
	do
	{
		switch (a.thang)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (k > 31)
			{
				a.thang++;
				if (a.thang > 12)
				{
					a.thang = 1;
					a.nam++;
				}
				k -= 31;
			}
			else 
			{
				a.ngay = k;
			}
		case 4: case 6: case 9: case 11:
			if (k > 30)
			{
				a.thang++;
				k -= 30;
			}
			else
			{
				a.ngay = k;
			}
		case 2:
			if (a.nam % 400 == 0 || a.nam % 4 == 0 && a.nam % 100 != 0)
			{
				if (k > 29)
				{
					a.thang++;
					k -= 29;
				}
				else
				{
					a.ngay = k;
					k = 0;
				}
			}
			else
			{
				if (k > 28)
				{
					a.thang++;
					k -= 28;
				}
				else
				{
					a.ngay = k;
					k = 0;
				}
			}
		}
	} while (k > 0);
	return a;
}
CDate CDate::operator-(int x)
{
	CDate a;
	a.ngay = ngay;
	a.thang = thang;
	a.nam = nam;
	if (a.ngay > x)
	{
		a.ngay -= x;
		x = 0;
	}
	else
	{
		x -= a.ngay;
		a.thang--;
		switch (a.thang)
		{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			a.ngay = 31;
			break;
		}
		case 4: case 6: case 9: case 11:
		{
			a.ngay = 30;
			break;
		}
		case 2:
			if (a.nam % 400 == 0 || a.nam % 4 == 0 && a.nam % 100 != 0)
				a.ngay = 29;
			else a.ngay = 28; 
			break;
		case 0:
			a.thang = 12;
			a.nam--;
			a.ngay = 31;
			break;
		}
	}while (x > 0);
	return a;
}
void CDate::operator++()
{
	ngay++;
	switch(thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (ngay > 31)
		{
			ngay = 1;
			thang++;
			if (thang > 12)
			{
				thang = 1;
				nam++;
			}
		}
		break;
	case 4: case 6: case 9: case 11:
		if (ngay > 30)
		{
			ngay = 1;
			thang++;
		}
		break;
	case 2:
		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
		{
			if (ngay > 29)
			{
				ngay = 1;
				thang++;
			}
		}
		else 
		{
			if (ngay > 28)
			{
				ngay = 1;
				thang++;
			}
		}
	}
}
void CDate::operator--()
{
	ngay--;
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (ngay < 1)
		{
			ngay = 31;
			thang--;
			if (thang < 1)
			{
				thang = 12;
				nam--;
			}
		}
		break;
	case 4: case 6: case 9: case 11:
		if (ngay < 1)
		{
			ngay = 30;
			thang--;
		}
		break;
	case 2:
		if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
		{
			if (ngay < 1)
			{
				ngay = 29;
				thang--;
			}
		}
		else
		{
			if (ngay < 1)
			{
				ngay = 28;
				thang--;
			}
		}
	}
}
int CDate::operator-(CDate& a)
{
	int tg1, tg2;
	int b, c;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
		tg1 = thang * 31;
	else
		if (thang == 2)
		{
			if (nam % 400 == 0 || nam % 100 != 0 && nam % 4 == 0)
				tg1 = thang * 29;
			else tg1 = thang * 28;
		}
		else tg1 = thang * 30;
	if (nam % 400 == 0 || nam % 100 != 0 && nam % 4 == 0)
		tg2 = nam * 366;
	else tg2 = nam * 365;
	b = ngay + tg1 + tg2;

	if (a.thang == 1 || a.thang == 3 || a.thang == 5 || a.thang == 7 || a.thang == 8 || a.thang == 10 || a.thang == 12)
		tg1 = a.thang * 31;
	else
		if (a.thang == 2)
		{
			if (a.nam % 400 == 0 || a.nam % 100 != 0 && a.nam % 4 == 0)
				tg1 = a.thang * 29;
			else tg1 = a.thang * 28;
		}
		else tg1 = a.thang * 30;
	if (a.nam % 400 == 0 || a.nam % 100 != 0 && a.nam % 4 == 0)
		tg2 = a.nam * 366;
	else tg2 = a.nam * 365;
	c = a.ngay + tg1 + tg2;
	return abs(c - b);
}
CDate::~CDate()
{
}

istream& operator>>(istream& in, CDate& a)
{
	bool k;
	do  
	{
		cout << "Nhap ngay, thang, nam: ";
		in >> a.ngay >> a.thang >> a.nam;
		k = a.kt(a.ngay, a.thang, a.nam);
		if (k == false) cout << "\nKhong dung moi nhap lai!";
	} while (!k);
	return in;
}
ostream& operator<<(ostream& out, CDate a)
{
	out << a.ngay << "/" << a.thang << "/" << a.nam;
	return out;
}
