#pragma once
#include "bo.h"
#include "de.h"
#include "cuu.h"
class nongTrai
{
private:
	bo listBo;
	de listDe;
	cuu listCuu;
public:
	void input();
	void tiengKeu();
	void output();

	nongTrai();
	~nongTrai();
};

