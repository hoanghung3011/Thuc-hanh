#include "PhanSo.h"
int main()
{
	PhanSo a, b;
	cout << "\nNhap phan so thu nhat: ";
	cin >> a;
	cout << "\nNhap phan so thu hai: ";
	cin >> b;
	cout << a + b << "\n";
	cout << a - b << "\n";
	cout << a * b << "\n";
	cout << a / b << "\n";
	if (a == b) cout << "\na bang b";
	if (a != b) cout << "\na khac b";
	if (a > b) cout << "\na lon hon b";
	if (a >= b) cout << "\na lon hon hoac bang b";
	if (a < b) cout << "\na nho hon b";
	if (a <= b) cout << "\na nho hon hoac bang b";
	system("pause");
	return 0;
}