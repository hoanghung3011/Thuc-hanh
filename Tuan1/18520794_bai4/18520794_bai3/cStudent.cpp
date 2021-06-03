#include "cStudent.h"
#include <iostream>
#include <string>
using namespace std;


cStudent::cStudent()
{
}


cStudent::~cStudent()
{
}
void cStudent::inputStudent()
{	
	cout << "Nhap ten hoc sinh : ";
	cin.ignore();
	getline(std::cin, name);
	cout << "Nhap lop : ";
	getline(std::cin, iClass);
	cout << "Nhap diem toan : ";
	cin >> math;
	while (math < 0 || math > 10)
	{
		cout << "Nhap lai diem toan dung : ";
		cin >> math;
	}
	cout << "Nhap diem van : ";
	cin >> literature;
	while (literature < 0 || literature > 10)
	{
		cout << "Nhap lai diem toan dung : ";
		cin >> math;
	}
}
float cStudent::averageMark()
{
	average = (math + literature) / 2;
	return average;
}
void cStudent::outputMark()
{
	cout << "Diem trung binh la : " << average;
}
