#pragma once
#include <iostream>
using namespace std;
class cDate
{
private:
	int d, m, y;
	static int dayofmonth[];
public:
	void inputDate();
	void outputDate();
	bool checkDate();
	bool  checkYear();
	cDate increaseDay();
	cDate();
	~cDate();
};

