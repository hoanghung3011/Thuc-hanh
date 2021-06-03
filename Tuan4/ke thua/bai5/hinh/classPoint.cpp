#include "classPoint.h"

istream& operator >>(istream& is, classPoint& n){
	cout << "\nnhap tung do: ";
	cin >> n.x;
	cout << "nhap hoanh do: ";
	cin >> n.y;
	return is;
}
ostream& operator <<(ostream& os, classPoint n){
	cout << "( " << n.x << ", " << n.y << " )";
	return os;
}
float classPoint::getY() {
	return y;
}
float classPoint::getX() {
	return x;
}
void classPoint::setAbs(float a) {
	y = a;
}
void classPoint::setOrd(float a) {
	x = a;
}
void classPoint::setOA(float a,float b) {
	x = a;
	y = b;
}
void classPoint::translate(float a, float b) {
	x += a;
	y += b;
}
classPoint classPoint::vector(classPoint a) {
	classPoint t;
	t.setOrd(a.getX() - x);
	t.setAbs(a.getY() - y);
	return t;
}
void classPoint::rotative(float rad) {
	x = x * cos(rad) + y * sin(rad);
	y = x * sin(rad) + y * cos(rad);
}
classPoint::classPoint()
{
	x = 0;
	y = 0;
}
classPoint::classPoint(float a, float b)
{
	x = a;
	y = b;
}

classPoint::~classPoint()
{
}
