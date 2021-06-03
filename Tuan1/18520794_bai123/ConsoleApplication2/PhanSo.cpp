#include "pch.h"
#include "PhanSo.h"
#include <iostream>
#include <math.h>


PhanSo::PhanSo()
{
}

void PhanSo::Nhap()
{
	cout << "Nhap tu = ";
	cin >> TuSo;
	do 
	{ 
		cout << "Nhap mau = ";
		cin >> MauSo;
	} while (MauSo == 0);
}
void PhanSo::Xuat()
{
	cout << TuSo << " / " << MauSo;
}
int PhanSo::UCLN(int a, int b)
{	
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b) a = a - b;
		else b = b - a;
	}
	return a;
}
void PhanSo::RutGon()
{
	int ucln = UCLN(TuSo, MauSo);
	TuSo = TuSo / ucln;
	MauSo = MauSo / ucln;
}
PhanSo PhanSo::TongPhanSo(PhanSo ps1, PhanSo ps2)
{
	PhanSo pstong;
	pstong.MauSo = ps1.MauSo * ps2.MauSo;
	pstong.TuSo = ps1.TuSo * ps2.MauSo + ps2.TuSo * ps1.MauSo;
	pstong.RutGon();
	return pstong;
}
	
PhanSo PhanSo::HieuPhanSo(PhanSo ps1, PhanSo ps2)
{
	PhanSo pshieu;
	pshieu.MauSo = ps1.MauSo * ps2.MauSo;
	pshieu.TuSo = ps1.TuSo * ps2.MauSo - ps2.TuSo * ps1.MauSo;
	pshieu.RutGon();
	return pshieu;
}
PhanSo PhanSo::TichPhanSo(PhanSo ps1, PhanSo ps2)
{
	PhanSo pstich;
	pstich.TuSo = ps1.TuSo * ps2.TuSo;
	pstich.MauSo = ps1.MauSo * ps2.MauSo;
	pstich.RutGon();
	return pstich;
}
PhanSo PhanSo::ThuongPhanSo(PhanSo ps1, PhanSo ps2)
{
	PhanSo psthuong;
	psthuong.TuSo = ps1.TuSo * ps2.MauSo;
	psthuong.MauSo = ps1.MauSo * ps2.TuSo;
	psthuong.RutGon();
	return psthuong;
	
}
PhanSo PhanSo::PhanSoMAX(PhanSo ps1, PhanSo ps2, PhanSo ps3)
{	
	float a = float(ps1.TuSo) / float(ps1.MauSo);
	float b = float(ps2.TuSo) / float(ps2.MauSo);
	float c = float(ps3.TuSo) / float(ps3.MauSo);
	if ((a >= b) && (a >= c)) return  ps1;
	if ((b >= a) && (b >= c)) return  ps2;
	if ((c >= a) && (c >= b)) return  ps3;
}

PhanSo::~PhanSo()
{
}
