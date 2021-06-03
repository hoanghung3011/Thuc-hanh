#pragma once
#include <iostream>
class sophuc
{
private:
	float thuc, ao;
public:
	void nhap();
	void xuat();
	sophuc tong(sophuc sp1, sophuc sp2);
	sophuc hieu(sophuc sp1, sophuc sp2);
	sophuc tich(sophuc sp1, sophuc sp2);
	bool kiemtra();
	sophuc thuong(sophuc sp1, sophuc sp2);
	sophuc();
	~sophuc();
};

