#include "dagiac.h"
dagiac::dagiac()
{
}
void dagiac::setn(int a)
{
	n = a;
}
int dagiac::getn()
{
	return n;
}

void dagiac::nhapdagiac()
{
	cout << "Nhap so luong dinh cua da giac:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap diem thu " << i << " :" << endl;
		d[i].nhap();
	}

}

void dagiac::xuatdagiac()
{
	for (int i = 1; i <= n; i++)
	{
		d[i].xuat();
	}
}

void dagiac::tinhtiendagiac(float m, float n)
{
	for (int i = 1; i <= n; i++)
	{
		d[i].tinhtien(m, n);
	}
}

void dagiac::quaydagiac(float rad)
{
	for (int i = 1; i <= n; i++)
	{
		d[i].quay(rad);
	}
}

void dagiac::thuphongdagiac(float k)
{
	for (int i = 1; i < n; i++)
	{
		d[i].setxy(d[i].getx()*k, d[i].gety()*k);
	}
}

dagiac::~dagiac()
{
}