#pragma once
#include <iostream>
using namespace std;
class Thoigian
{
private:
	int gio;
	int phut;
	int giay;
public:
	Thoigian();
	void set(int, int, int);
	void nhap();
	void xuat();
	void tanggiay();
	~Thoigian();
};