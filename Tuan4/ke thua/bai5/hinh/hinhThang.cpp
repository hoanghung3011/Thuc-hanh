#include "hinhThang.h"

void hinhThang::input() {
	cout << "\nNhap toa do cua hinh thang ABCD voi AH la chieu cao: ";
	loop:
	hinhHoc::input();
	if (a.getY() != b.getY() || c.getY() != d.getY() || a.getX() <d.getX() || b.getX() >c.getX()) {
		cout << "toa do ko phai hinh thang, nhap lai!";
		goto loop;
	}
	loop1:
	cout << "\nNhap chieu cao: ";
	cin >> h;
	if (h.getX() < d.getX() || h.getY() != c.getY()) {
		cout << "\nChieu cao khong hop le, nhap lai!";
		goto loop1;

	}
		
}

float hinhThang::area() {
	return (((b.getX() - a.getX()) + (c.getX() - d.getX())) * (a.getY() - h.getY()) / 2);
}

hinhThang::hinhThang()
{
}


hinhThang::~hinhThang()
{
}
