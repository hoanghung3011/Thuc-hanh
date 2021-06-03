#include <iostream>
#include "thoigian.h"
using namespace std;
int main()
{
	Thoigian a;
	a.nhap();
	a.xuat();
	a.tanggiay();
	cout << "Thoi gian sau khi tang: ";
	a.xuat();
	system("pause");
	return 0;
}