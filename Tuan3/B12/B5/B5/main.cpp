#include "CDate.h"
int main()
{
	CDate a, b;
	cin >> a;
	cout << "\nCong them 5 ngay: ";
	cout << a + 5;
	cout << "\nTru di 4 ngay: ";
	cout << a - 4;
	cout << "\nTang 1 ngay: \n";
	cin >> a;
	++a;
	cout << a;
	cout << "\nGiam 1 ngay: \n";
	cin >> b;
	--b;
	cout << b;
	cout << "\nTru 2 khoang thoi gian: ";
	cin >> a;
	cin >> b;
	cout << "Khoang thoi gian la: " << a - b << " ngay";
	system("pause");
	return 0;
}