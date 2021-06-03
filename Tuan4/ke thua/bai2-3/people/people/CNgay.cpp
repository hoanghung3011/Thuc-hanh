#include "CNgay.h"

istream& operator >>(istream &is, CNgay &x) {
	cout << "\nnhap ngay: ";
	is >> x.ngay;
	cout << "\nnhap thang: ";
	is >> x.thang;
	cout << "\nnhap nam: ";
	is >> x.nam;
	return is;
}
ostream& operator <<(ostream &os, CNgay x) {
	os << "Ngay " << x.ngay << " thang " << x.thang << " nam " << x.nam;
	return os; 
}
CNgay::CNgay()
{
}


CNgay::~CNgay()
{
}
