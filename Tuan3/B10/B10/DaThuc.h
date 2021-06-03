#pragma once
#include <iostream>
using namespace std;
class DaThuc
{
private:
	int a, b, c;
public:
	DaThuc();
	friend istream& operator>>(istream&, DaThuc&);
	friend ostream& operator<<(ostream&, DaThuc&);
	int giatri(int);
	DaThuc operator+(DaThuc&);
	~DaThuc();
};