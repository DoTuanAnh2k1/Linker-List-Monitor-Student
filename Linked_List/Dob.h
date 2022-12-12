#pragma once
#include <iostream>
using namespace std;

class Dob
{
private:
	int day;
	int month;
	int year;
public:
	Dob();
	Dob(int, int, int);

	void Set_day(int);
	void Set_month(int);
	void Set_year(int);

	int Get_day();
	int Get_month();
	int Get_year();

	void Show();
};