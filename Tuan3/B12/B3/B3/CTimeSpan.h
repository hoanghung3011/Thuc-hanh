#include <iostream>
using namespace std;
#pragma once
class CTimeSpan
{
private:
	int gio, phut, giay;
public:
	CTimeSpan(int = 0, int = 0, int = 0);
	friend istream& operator>>(istream&, CTimeSpan&);
	friend ostream& operator<<(ostream&, CTimeSpan);
	CTimeSpan operator+(CTimeSpan&);
	CTimeSpan operator-(CTimeSpan&);
	bool operator==(CTimeSpan&);
	bool operator!=(CTimeSpan&);
	bool operator>(CTimeSpan&);
	bool operator>=(CTimeSpan&);
	bool operator<(CTimeSpan&);
	bool operator<=(CTimeSpan&);
	~CTimeSpan();
};