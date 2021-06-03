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
	cout << "Nhap ma so : ";
	cin.getline(id, 8);
	cout << "Nhap ten hoc sinh : ";
	cin.getline(name, 30);
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
void cStudent::outputStudent()
{
	cout << name << endl ; 
	cout << "Ma so : " << id << endl;
	cout << "Diem toan : " << math << endl ;
	cout << "Diem van : " << literature <<endl ;
}