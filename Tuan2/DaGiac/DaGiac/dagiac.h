#pragma once
#include "diem.h"
class dagiac
{
private:
	int n;
	diem d[100];
public:
	dagiac();
	void nhapdagiac();
	void xuatdagiac();
	void setn(int);
	int getn();
	void tinhtiendagiac(float, float);
	void quaydagiac(float);
	void thuphongdagiac(float);
	~dagiac();
};
