#include "nongTrai.h"

void nongTrai::input() {
	listBo.input();
	listCuu.input();
	listDe.input();
}

void nongTrai::tiengKeu() {
	cout << "\nTieng loai vat keu trong nong trai: ";
	if (listBo.getSoLuong() > 0)
		cout << "\nBo keu";
	if (listCuu.getSoLuong() > 0)
		cout << "\nCuu keu";
	if (listDe.getSoLuong() > 0)
		cout << "\nDe keu";

}
void nongTrai::output() {

	cout << "\n--------------bo-------------------";
	listBo.listBaby();
	listBo.listMilk(21);
	cout << "\n--------------cuu-------------------";
	listCuu.listBaby();
	listCuu.listMilk(6);
	cout << "\n--------------de-------------------";
	listDe.listBaby();
	listDe.listMilk(11);
	tiengKeu();
}

nongTrai::nongTrai()
{
}


nongTrai::~nongTrai()
{
}
