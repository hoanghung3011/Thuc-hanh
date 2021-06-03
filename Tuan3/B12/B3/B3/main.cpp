#include "CTimeSpan.h"
int main()
{
	CTimeSpan a, b;
	cout << "\nNhap gio thu nhat: ";
	cin >> a;
	cout << "\nNhap gio thu hai: ";
	cin >> b;
	cout << a + b << "\n";
	cout << a - b << "\n";
	if (a == b) cout << "\nBang nhau";
	if (a != b) cout << "\nKhac nhau";
	if (a > b) cout << "\na lon hon b";
	if (a >= b) cout << "\na lon hon hoac bang b";
	if (a < b) cout << "\na nho hon b";
	if (a <= b) cout << "\na nho hon hoac bang b";
	system("pause");
	return 0;
}