#pragma once
class cNgay
{
private:
	int d, m, y;
public:
	cNgay(int = 1, int = 1, int = 1);
	friend istream& operator>>(istream&, cNgay&);
	friend ostream& operator<<(ostream&, cNgay&);
	bool operator<(cNgay&);
	~cNgay();
};