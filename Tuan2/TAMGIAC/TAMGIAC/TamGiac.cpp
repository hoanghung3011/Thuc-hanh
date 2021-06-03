#include "TamGiac.h"



TamGiac::TamGiac()
{
	a = (float(0), float(0));
	b = (float(0), float(0));
	c = (float(0), float(0));
}


TamGiac::~TamGiac()
{
}


void TamGiac::Nhap()
{
	cout << "Nhap diem A: ";
	a.Nhap();
	cout << "Nhap diem B: ";
	b.Nhap();
	cout << "Nhap diem C: ";
	c.Nhap();
}


void TamGiac::Xuat()
{
	cout << "A";
	a.Xuat();
	cout << "B";
	b.Xuat();
	cout << "C";
	c.Xuat();
}


void TamGiac::TinhTien(float ox, float oy)
{
	a.TinhTien(ox, oy);
	b.TinhTien(ox, oy);
	c.TinhTien(ox, oy);
}


void TamGiac::Quay(int degrees)
{
	a.Quay(degrees);
	b.Quay(degrees);
	c.Quay(degrees);
}


void TamGiac::PhongTo(int k)
{
	a.PhongTo(k);
	b.PhongTo(k);
	c.PhongTo(k);
}


void TamGiac::ThuNho(int k)
{
	a.ThuNho(k);
	b.ThuNho(k);
	c.ThuNho(k);
}