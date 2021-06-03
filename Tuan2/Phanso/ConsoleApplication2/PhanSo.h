#pragma once
#include <iostream>
#include <math.h>
using namespace std;
class PhanSo
{
private :
	int TuSo, MauSo;
public:
	void Nhap();
	void Xuat();
	int UCLN(int a, int b);
	void RutGon();
	PhanSo TongPhanSo(PhanSo ps1, PhanSo ps2);
	PhanSo HieuPhanSo(PhanSo ps1, PhanSo ps2);
	PhanSo TichPhanSo(PhanSo ps1, PhanSo ps2);
	PhanSo ThuongPhanSo(PhanSo ps1, PhanSo ps2);
	PhanSo PhanSoMAX(PhanSo ps1, PhanSo ps2, PhanSo ps3);

	PhanSo();
	~PhanSo();
};

