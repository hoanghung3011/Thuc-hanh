#include <iostream>
#include "point.h"
using namespace std;
Point::Point()
{
	x = 0;
	y = 0;
}
void Point::nhap()
{
	cout << "Nhap tung do: " << endl;
	cin >> x;
	cout << "Nhap hoanh do : " << endl;
	cin >> y;
}
void Point::xuat()
{
	cout << "Toa do diem la: (" << x << "," << y << ") " << endl;
}
void Point::tinhtien()
{
	int a, b;
	cout << "Nhap toa do tinh tien (a, b): ";
	cin >> a >> b;
	x += a;
	y += b;
}
Point::~Point()
{
}