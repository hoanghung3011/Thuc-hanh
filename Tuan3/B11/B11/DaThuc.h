#pragma once
#include <iostream>
using namespace std;
class DaThuc
{
private:
	int bac;
	float* heso;
public:
	DaThuc();
	friend istream& operator>>(istream&, DaThuc&);
	friend ostream& operator<<(ostream&, DaThuc&);
	DaThuc operator+(DaThuc&);
	~DaThuc();
};

