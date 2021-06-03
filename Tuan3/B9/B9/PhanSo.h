#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int t, m;
public:
	PhanSo(int = 0, int = 1);
	friend istream& operator>>(istream&, PhanSo&);
	void xuat();
	PhanSo operator+(PhanSo&);
	~PhanSo();
};