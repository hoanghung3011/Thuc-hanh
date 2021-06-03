#include <string>
#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
#pragma once
class giaSuc
{
protected:
	int soLuong;
	vector<int> baby;
	vector<int> milk;
	string keu;
public:
	void input();
	void output();
	void listBaby();
	string getKeu();
	int getSoLuong();
	void listMilk(int);
	giaSuc();
	~giaSuc();
};

