#include "CTime.h"
int main()
{
	CTime a, b;
	cout << "\nNhap gio thu nhat: ";
	cin >> a;
	cout << "\nNhap gio thu hai: ";
	cin >> b;
	cout << "\nCong x so nguyen giay: ";
	cout << "\n" << a + 2;
	cout << "\n" << b + 2;
	cout << "\nTru x so nguyen giay: ";
	cout << "\n" << a - 2;
	cout << "\n" << b - 2;
	cout << "\nTru 2 thoi gian: ";
	cout << a - b;
	cout << "\nTang 1 giay: ";
	++a;
	cout << a;
	cout << "\nGiam 1 giay: ";
	b--;
	cout << b;
	system("pause");
	return 0;
}