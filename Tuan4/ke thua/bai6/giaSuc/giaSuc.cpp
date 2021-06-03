#include "giaSuc.h"

void giaSuc::input() {
	cout << "\nNhap so luong gia suc: ";
	cin >> soLuong;
}

void giaSuc::output() {
	
}

void giaSuc::listBaby() {
	srand(time(NULL));
	int sum = 0;
	for (int i = 0; i < soLuong; i++) {
		baby.push_back(1 + rand() % 4);
		sum += baby[i];
		cout << "\nso baby cua con thu " << i + 1 << " la: " << baby[i];
	}
	cout << "\nTong so baby la: " << sum;
}


void giaSuc::listMilk(int maxMilk) {
	srand(time(NULL));
	int sum = 0;
	for (int i = 0; i < soLuong; i++) {
		milk.push_back(rand() % maxMilk);
		sum += milk[i];
		cout << "\nSo lit sua cua gia suc thu " << i + 1 << " la: " << milk[i];
	}
	cout << "\nTong so lit sua la: " << sum;
}
string giaSuc::getKeu() {
	return keu;
}

int giaSuc::getSoLuong() {
	return soLuong;
}

giaSuc::giaSuc()
{
}


giaSuc::~giaSuc()
{
}
