#pragma once
#include "classPoint.h"
#include "hinhHoc.h"
class binhHanh : public hinhHoc
{
private:
	classPoint h;
public:
	void input();
	float area();
	binhHanh();
	~binhHanh();
};

