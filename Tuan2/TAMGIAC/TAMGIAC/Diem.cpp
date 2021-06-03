#include "Diem.h"



Diem::Diem()
{
	x = 0;
	y = 0;
}


Diem::~Diem()
{
}


void Diem::Nhap()
{
	float ox, oy;
	cin >> ox >> oy;
	x = ox;
	y = oy;
}


void Diem::Xuat()
{
	cout << "(" << x << ", " << y << ")\n";
}


void Diem::SetDiem(float a, float b)
{
	x = a;
	y = b;
}


float Diem::GetHoanhDo()
{
	return x;
}


float Diem::GetTungDo()
{
	return y;
}


void Diem::TinhTien(float a, float b)
{
	x += a;
	y += b;
}


void Diem::Quay(int degrees)
{
	double a, b;
	a = x * cos(degrees*PI / 180) - y * sin(degrees*PI / 180);
	b = x * sin(degrees*PI / 180) + y * cos(degrees*PI / 180);
	x = float(a);
	y = float(b);
}


void Diem::PhongTo(int k)
{
	x = x * k;
	y = y * k;

}


void Diem::ThuNho(int k)
{
	x = x * (float(1) / k);
	y = y * (float(1) / k);
}