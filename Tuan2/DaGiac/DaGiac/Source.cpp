#include "dagiac.h"
#include "diem.h"

int main()
{
	float x, y, rad, k;
	int n;
	dagiac p;
	p.nhapdagiac();
	cout << "Da giac vua nhap co cac dinh la:";
	p.xuatdagiac();
	cout << "\nTinh tien da giac theo vecto(x,y):" << endl;
	cout << "x="; cin >> x;
	cout << "y="; cin >> y;
	cout << "Da giac sau khi tinh tien la:";
	p.tinhtiendagiac(x, y);
	cout << endl;
	p.xuatdagiac();
	cout << "\nQuay theo goc rad:";
	cin >> rad;
	p.quaydagiac(rad);
	p.xuatdagiac();
	cout << "\nNhap he so thu phong k:";
	cin >> k;
	p.thuphongdagiac(k);
	cout << "Da giac sau khi thu phong:";
	p.xuatdagiac();
	system("pause");
	return 0;

}