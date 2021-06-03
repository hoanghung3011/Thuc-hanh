#include "hinhVuong.h"

void hinhVuong::input() {
	cout << "\nNhap toa do cua hinh vuong ABCD: ";
loop:
	hinhHoc::input();
	if (a.getY() != b.getY() || c.getY() != d.getY() || (a.getX() != d.getX()) || (b.getX() != c.getX()) || (b.getX() != b.getY())) {
		cout << "toa do ko phai hinh vuong, nhap lai!";
		goto loop;
	}

}

float hinhVuong::area() {
	return ((b.getX() - a.getX()) * (b.getX() - a.getX()));
}


hinhVuong::hinhVuong()
{
}


hinhVuong::~hinhVuong()
{
}

