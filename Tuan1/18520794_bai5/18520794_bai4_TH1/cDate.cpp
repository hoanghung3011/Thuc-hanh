#include "cDate.h"
#include <iostream>
using namespace std;
int cDate::dayofmonth[] = {0,31,28,31,30,31,30,31,31 };

cDate::cDate()
{
}


cDate::~cDate()
{
}

void cDate::inputDate()
{
	cout << "Nhap ngay : ";
	cin >> d;
	cout << "Nhap thang : ";
	cin >> m;
	cout << "Nhap nam : ";
	cin >> y;
}
void cDate::outputDate()
{
	cout << d << "/" << m << "/" << y;
}
bool cDate::checkYear()
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return true;
	return false;
}
bool cDate::checkDate()
{
	if (y < 0) return false;
	if (m < 1 || m > 12) return false;
	if (checkYear() && m == 2 && d <= 29 && d >= 1) return true;
	if (d > dayofmonth[m] || d < 1) return false;
}
cDate cDate::increaseDay()
{
	cDate day;
	day.m = m;
	day.y = y;
	day.d = d + 1;
	if (!day.checkDate())
	{
		if (d == dayofmonth[m])
		{
			day.d = 1;
			day.m = m + 1;
			if (m == 13)
			{
				day.m = 1;
				day.y = y + 1;
			}
		}
		if (m == 2)
		{
			if (!checkYear() && d == 28)
			{
				day.d = 1;
				day.m = 3;
			}
			if (d == 29)
			{
				day.d = 1;
				day.m = 3;
			}
		}
	}
	return day;
}
