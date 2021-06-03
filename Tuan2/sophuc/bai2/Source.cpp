#include <iostream>
#include "sophuc.h"
using namespace std;
int main()
{	
	sophuc sp1, sp2;
	cout << "Nhap so phuc 1 " << endl;
	sp1.nhap();
	cout << "Nhap so phuc 2 " << endl;
	sp2.nhap();
	cout << " Tong = ";
	sp1.tong(sp1, sp2).xuat();
	cout << " Hieu = ";
	sp1.hieu(sp1, sp2).xuat();
	cout << " Tich = ";
	sp1.tich(sp1, sp2).xuat();
	if (sp2.kiemtra())
	{
		cout << "Thuong = ";
		sp1.thuong(sp1, sp2).xuat();
	}
	else cout << "Khong ton tai thuong ";
	system("pause");
}