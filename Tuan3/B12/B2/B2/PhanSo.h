#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	float tu;
	float mau;
public:
	PhanSo(float = 0, float = 1);
	friend istream& operator>>(istream&, PhanSo &);
	friend ostream& operator<<(ostream&, PhanSo);
	PhanSo operator+(PhanSo&);
	PhanSo operator-(PhanSo&);
	PhanSo operator*(PhanSo&);
	PhanSo operator/(PhanSo&);
	bool operator==(PhanSo&);
	bool operator!=(PhanSo&);
	bool operator>(PhanSo&);
	bool operator>=(PhanSo&);
	bool operator<(PhanSo&);
	bool operator<=(PhanSo&);
	~PhanSo();
};