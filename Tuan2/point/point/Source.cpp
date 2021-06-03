#include <iostream>
#include "point.h"
using namespace std;
int main()
{
	Point z;
	z.nhap();
	z.xuat();
	z.tinhtien();
	cout << "Sau khi tinh tien: ";
	z.xuat();
	system("pause");
	return 0;
}