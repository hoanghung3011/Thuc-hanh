#include "sophuc.h"
#include <iostream>
using namespace std;
sophuc::sophuc()
{
	thuc = 0;
	ao = 0;
}
void sophuc::nhap()
{
	cout << "Nhap phan thuc = ";
	cin >> thuc;
	cout << "Nhap phan ao = ";
	cin >> ao;
}
void sophuc::xuat()
{
	cout << thuc << " + " << ao << 'i' << endl;
}
sophuc sophuc::tong(sophuc sp1, sophuc sp2)
{
	sophuc sp3;
	sp3.thuc = sp1.thuc + sp2.thuc;
	sp3.ao = sp1.ao + sp2.ao;
	return sp3;
}
sophuc sophuc::hieu(sophuc sp1, sophuc sp2)
{
	sophuc sp3;
	sp3.thuc = sp1.thuc - sp2.thuc;
	sp3.ao = sp1.ao - sp2.ao;
	return sp3;
}
sophuc sophuc::tich(sophuc sp1, sophuc sp2)
{
	sophuc sp3;
	sp3.thuc = sp1.thuc * sp2.thuc - sp1.ao * sp2.ao ;
	sp3.ao = sp1.thuc * sp2.ao + sp1.ao * sp2.thuc;
	return sp3;
}
bool sophuc::kiemtra()
{
	if (thuc == 0 && ao == 0) return false;
	return true;
}

sophuc sophuc::thuong(sophuc sp1, sophuc sp2)
{
	sophuc sp3;
	sp3.thuc = (sp2.thuc * sp1.thuc + sp2.ao * sp1.ao) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
	sp3.ao = (sp2.thuc * sp1.ao - sp2.ao * sp1.thuc) / (sp2.thuc * sp2.thuc + sp2.ao * sp2.ao);
	return sp3;
}





sophuc::~sophuc()
{
}
