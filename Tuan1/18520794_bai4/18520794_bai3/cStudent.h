#pragma once
#include <iostream>
#include <string>
using namespace std;
class cStudent
{
private:
	string name;
	string iClass;
	float math;
	float literature;
	float average;
public:
	cStudent();
	~cStudent();
	void inputStudent();
	float averageMark();
	void outputMark();

};

