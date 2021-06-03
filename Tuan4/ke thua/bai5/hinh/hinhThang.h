#pragma once
#include "hinhHoc.h"
#include "classPoint.h"
class hinhThang : public hinhHoc
{
private:
	classPoint h;
public:
	void input();
	float area();
	hinhThang();
	~hinhThang();
};

