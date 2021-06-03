#include "TamGiac.h"

int main()
{
	TamGiac ABC;
	float x, y;
	int degrees, k;
	ABC.Nhap();
	ABC.Xuat();
	cout << "Nhap vecto tinh tien: ";
	cin >> x >> y;
	ABC.TinhTien(x, y);
	ABC.Xuat();
	cout << "Nhap goc quay (degrees): ";
	cin >> degrees;
	ABC.Quay(degrees);
	ABC.Xuat();
	cout << "Nhap he so phong to: ";
	cin >> k;
	ABC.PhongTo(k);
	ABC.Xuat();
	cout << "Nhap he so thu nho: ";
	cin >> k;
	ABC.ThuNho(k);
	ABC.Xuat();
	system("pause");
	return 0;
}