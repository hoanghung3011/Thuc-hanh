
#pragma once
#include <iostream>
#include <string>
using namespace std;
class cStudent
{
private:
	char name[30];
	char id[8];
	float math;
	float literature;
public:
	cStudent();
	~cStudent();
	void inputStudent();
	void outputStudent();

};
