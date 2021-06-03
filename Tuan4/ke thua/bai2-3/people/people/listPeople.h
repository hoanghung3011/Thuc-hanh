#pragma once
#include <vector>
#include "caSi.h"
#include "congNhan.h"
#include "ngheSi.h"
#include "sinhVien.h"
#include "hocSinh.h"

class listPeople
{
private:
	vector<hocSinh> listHS;
	vector<sinhVien> listSV;
	vector<ngheSi> listNS;
	vector<congNhan> listCN;
	vector<caSi> listCS;
public:
	friend istream& operator >>(istream&, listPeople&);
	friend ostream& operator <<(ostream&, listPeople);
	listPeople();
	~listPeople();
};

