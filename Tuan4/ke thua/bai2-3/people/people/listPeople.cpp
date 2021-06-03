#include "listPeople.h"

istream& operator >>(istream& is, listPeople& n) {
	int choise;
	do {
		cout << "\n-------------Menu---------------";
		cout << "\n1.Hoc sinh";
		cout << "\n2.Sinh vien";
		cout << "\n3.Cong nhan";
		cout << "\n4.Nghe si";
		cout << "\n5.Ca si";
		cout << "\n6.thoat";
		do {
			cout << "\nNhap vao lua chon cua ban: ";
			cin >> choise;
			if (choise < 1 || choise>6)
				cout << "error, nhap lai!";
		} while (choise < 1 || choise>6);
		if (choise == 1) {
			hocSinh a;
			is >> a;
			n.listHS.push_back(a);
		}
		if (choise == 2) {
			sinhVien a;
			is >> a;
			n.listSV.push_back(a);
		}
		if (choise == 3) {
			congNhan a;
			is >> a;
			n.listCN.push_back(a);
		}
		if (choise == 4) {
			ngheSi a;
			is >> a;
			n.listNS.push_back(a);
		}
		if (choise == 5) {
			caSi a;
			is >> a;
			n.listCS.push_back(a);
		}
	}
	while (choise != 6);
	return is;
}
ostream& operator <<(ostream& os, listPeople n) {
	os << "\n-------------------Danh sach hoc sinh-----------------\n";
	int sizehs = n.listHS.size();
	for (int i = 0; i < sizehs; i++) {
		os << "\n-Hoc sinh thu " << i + 1 << n.listHS[i];
	}
	int sizesv = n.listSV.size();
	for (int i = 0; i < sizesv; i++) {
		os << "\n-Sinh vien thu " << i + 1 << n.listSV[i];
	}
	int sizecn = n.listCN.size();
	for (int i = 0; i < sizecn; i++) {
		os << "\n-Cong nhan thu " << i + 1 << n.listCN[i];
	}
	int sizens = n.listNS.size();
	for (int i = 0; i < sizens; i++) {
		os << "\n-Nghe si thu " << i + 1 << n.listNS[i];
	}
	int sizecs = n.listCS.size();
	for (int i = 0; i < sizecs; i++) {
		os << "\n-Ca si thu " << i + 1 << n.listCS[i];
	}
	return os;
}

listPeople::listPeople()
{

}


listPeople::~listPeople()
{
}
