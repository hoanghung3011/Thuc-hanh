#include <iostream>
#include "cDate.h"
using namespace std;
int main()
{
	cDate Day;
	Day.inputDate();
	while (!(Day.checkDate()))
	{
		cout << "Nhap sai quy tac ngay, thang, nam. Vui long nhap lai: \n";
		Day.inputDate();
	}
	cout << "Ngay sau khi tang them mot ngay la: " << endl;
	Day.increaseDay().outputDate();
	system("pause");
	return 0;
}