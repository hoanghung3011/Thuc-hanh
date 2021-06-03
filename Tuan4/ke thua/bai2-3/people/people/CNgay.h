#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class CNgay
{
private:
	int ngay, thang, nam;
public:
	friend istream& operator >>(istream&, CNgay&);
	friend ostream& operator <<(ostream&, CNgay);
	CNgay();
	~CNgay();
};

