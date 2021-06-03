#include "chuNhat.h"

void chuNhat::input() {
	cout << "\nNhap toa do cua hinh chu nhat ABCD: ";
loop:
	hinhHoc::input();
	if (a.getY() != b.getY() || c.getY() != d.getY() || (a.getX()!=d.getX()) || (b.getX()!=c.getX()))  {
		cout << "toa do ko phai hinh chu nhat, nhap lai!";
		goto loop;
	}

}

float chuNhat::area() {
	return ((b.getX() - a.getX()) * (b.getY() - c.getY()));
}

chuNhat::chuNhat()
{
}


chuNhat::~chuNhat()
{
}
