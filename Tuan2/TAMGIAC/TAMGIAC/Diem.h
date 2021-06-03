#include <iostream>
#include <math.h>

#define PI 3.14159265

using namespace std;

class Diem
{
private:
	float x;	
	float y;	
public:
	Diem();
	Diem(float ox, float oy = 0) { x = oy; y = oy; }
	~Diem();
	void Nhap();
	void Xuat();
	void SetDiem(float, float);
	float GetHoanhDo();
	float GetTungDo();
	void TinhTien(float, float);
	void Quay(int);
	void PhongTo(int);
	void ThuNho(int);
};
