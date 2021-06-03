#include "pch.h"
#include "PhanSo.h"
#include <iostream>
#include <math.h>
using namespace std;
void Menu() 
{
	PhanSo ps,ps1, ps2, ps3, pstong, pshieu, psthuong, pstich, psmax;
	int choice;
	ps.Nhap();
	do
	{
		cout << "\n----------------------------------------------------------";
		cout << "\n0: Thoat";
		cout << "\n1 : Rut gon phan so";
		cout << "\n2 : Tong 2 phan so";
		cout << "\n3 : Hieu 2 phan so";
		cout << "\n4 : Tich 2 phan so";
		cout << "\n5 : Thuong 2 phan so";
		cout << "\n6 : Phan so lon nhat 3 phan so";
		cout << "\n Nhap lua chon cua ban : ";
		cin >> choice;
		switch (choice)
		{
		case 0: break;
		case 1: ps.RutGon(); ps.Xuat(); break;
		case 2:
		{
			ps1.Nhap();
			ps2.Nhap();
			pstong = ps1.TongPhanSo(ps1, ps2);
			pstong.Xuat();
			break;
		}
		case 3:
		{
			ps1.Nhap();
			ps2.Nhap();
			pshieu = ps1.HieuPhanSo(ps1, ps2);
			pshieu.Xuat();
			break;
		}
		case 4:
		{
			ps1.Nhap();
			ps2.Nhap();
			psthuong = ps1.TichPhanSo(ps1, ps2);
			pstich.Xuat();
			break;
		}
		case 5:
		{
			ps1.Nhap();
			ps2.Nhap();
			psthuong = ps1.ThuongPhanSo(ps1, ps2);
			psthuong.Xuat();
			break;
		}
		case 6:
		{
			ps1.Nhap();
			ps2.Nhap();
			ps3.Nhap();
			psmax.PhanSoMAX(ps1, ps2, ps3);
			psmax.Xuat();
			break;
		}
		}
	} while (choice != 0);
}
int main()
{
	Menu();
}


