#include <string>
#include <iostream>
#include <fstream>
#include "cdate.h"
using namespace std;
#pragma once
class nhanVien
{
private: 
	string name;
	cdate birthday;
	int salary;
public:
	friend istream& operator >>(istream&, nhanVien&);
	friend ostream& operator <<(ostream&, nhanVien);
	int getSalary();
	void setSalary(int);
	nhanVien();
	~nhanVien();
};

