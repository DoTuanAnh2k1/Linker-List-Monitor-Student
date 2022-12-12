#include <iostream>
#include "Dob.h"
using namespace std;

Dob::Dob()
{
	day = 0;
	month = 0;
	year = 0;
}

Dob::Dob(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

void Dob::Set_day(int day)
{
	this->day = day;
}

void Dob::Set_month(int month)
{
	this->month = month;
}

void Dob::Set_year(int year)
{
	this->year = year;
}

int Dob::Get_day()
{
	return day;
}

int Dob::Get_month()
{
	return month;
}

int Dob::Get_year()
{
	return year;
}

void Dob::Show()
{
	cout << day << "/" << month << "/" << year;
}