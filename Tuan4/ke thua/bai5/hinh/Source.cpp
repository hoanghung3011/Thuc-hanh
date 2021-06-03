#include "hinhThang.h"
#include "binhHanh.h"
#include "chuNhat.h"
#include "hinhVuong.h"
int main() {
	int choise;
	do {
		cout << "\n-----------Menu---------------\n";
		cout << "\n1.Hinh thang";
		cout << "\n2.Hinh binh hanh";
		cout << "\n3.Hinh chu nhat";
		cout << "\n4.Hinh vuong";
		cout << "\n5.thoat";

		do {
			cout << "\nChon tu 1-5: ";
			cin >> choise;
		} while (choise < 1 || choise>5);
		if (choise == 1) {
			hinhThang a;
			a.input();
			float dt = a.area();
			a.inDienTich(dt);
		}
		if (choise == 2) {
			binhHanh a;
			a.input();
			float dt = a.area();
			a.inDienTich(dt);
		}
		if (choise == 3) {
			chuNhat a;
			a.input();
			float dt = a.area();
			a.inDienTich(dt);
		}
		if (choise == 4) {
			hinhVuong a;
			a.input();
			float dt = a.area();
			a.inDienTich(dt);
		}
	} while (choise != 5);

	system("pause");
	return 0;
}