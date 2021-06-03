#include "binhHanh.h"

void binhHanh::input() {
	cout << "\nNhap toa do cua hinh binh hanh ABCD voi AH la chieu cao: ";
loop:
	hinhHoc::input();
	if (a.getY() != b.getY() || c.getY() != d.getY() || (b.getX()-a.getX())!=(c.getX() - d.getX())) {
		cout << "toa do ko phai hinh binh hanh, nhap lai!";
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

float binhHanh::area() {
	return ((b.getX() - a.getX()) * (a.getY() - h.getY()));
}

binhHanh::binhHanh()
{
}


binhHanh::~binhHanh()
{
}
