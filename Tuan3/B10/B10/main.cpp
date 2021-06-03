#include "DaThuc.h"
int main()
{
	DaThuc a, b, c;
	int s;
	cout << "\n-------------------------------------------\n";
	cin >> a;
	cout << a;
	cout << "\n-------------------------------------------\n";
	cin >> b;
	cout << b;
	cout << "\n-------------------------------------------\n";
	int x;
	cout << "\nNhap x: ";
	cin >> x;
	s = a.giatri(x);
	cout << s;
	cout << "\n-------------------------------------------\n";
	c = a + b;
	cout << c;
	system("pause");
	return 0;
}