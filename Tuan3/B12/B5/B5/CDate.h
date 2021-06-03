#pragma once
#include <iostream>
using namespace std;
class CDate
{
private:
	int ngay, thang, nam;
public:
	CDate(int = 1, int = 1, int = 1);
	friend istream& operator>>(istream& in, CDate&);
	friend ostream& operator<<(ostream& out, CDate);
	bool kt(int&, int&, int&);
	CDate operator+(int);
	CDate operator-(int);
	void operator++();
	void operator--();
	int operator-(CDate&);
	~CDate();
};

