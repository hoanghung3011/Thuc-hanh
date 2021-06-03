#include "nhanVien.h"

istream& operator >>(istream& is, nhanVien& n) {
	cout << "\nNhap ten nhan vien: ";
	is >> n.name;
	cout << "\nNhap ngay sinh nhan vien: ";
	is >> n.birthday;
	return is;
}
ostream& operator <<(ostream& os, nhanVien n) {
	cout << "\nTen: " << n.name;
	cout<<"\nNgay sinh: "<<n.birthday;
	return os;
}
int nhanVien::getSalary() {
	return salary;
}
void nhanVien::setSalary(int n) {
	salary = n;
}

nhanVien::nhanVien()
{
}


nhanVien::~nhanVien()
{
}
