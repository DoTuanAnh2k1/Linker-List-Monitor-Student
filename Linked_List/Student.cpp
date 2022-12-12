#include <iostream>
#include "Student.h"
#include "Dob.h"
using namespace std;

Student::Student()
{
	id = ' ';
	name = ' ';
	gender = ' ';
	classroom = ' ';
}

Student::Student(string id, string name, Dob date_of_birth, string gender, string classroom)
{
	this->id = id;
	this->name = name;
	this->gender = gender;
	this->classroom = classroom;

	this->date_of_birth.Set_day(date_of_birth.Get_day());
	this->date_of_birth.Set_month(date_of_birth.Get_month());
	this->date_of_birth.Set_year(date_of_birth.Get_year());
}

void Student::Set_Id(string id)
{
	this->id = id;
}

void Student::Set_Name(string name)
{
	this->name = name;
}

void Student::Set_Date_of_birth(Dob date_of_birth)
{
	this->date_of_birth.Set_day(date_of_birth.Get_day());
	this->date_of_birth.Set_month(date_of_birth.Get_month());
	this->date_of_birth.Set_year(date_of_birth.Get_year());
}

void Student::Set_Gender(string gender)
{
	this->gender = gender;
}

void Student::Set_Class(string classroom)
{
	this->classroom = classroom;
}

string Student::Get_ID()
{
	return id;
}

string Student::Get_Name()
{
	return name;
}

Dob Student::Get_Date_of_birth()
{
	return date_of_birth;
}

string Student::Get_Gender()
{
	return gender;
}

string Student::Get_Class()
{
	return classroom;
}

void Student::Show()
{
	cout << "ID: " << id << endl;
	cout << "Name: " << name << endl;
	
	cout << "Date of birth: ";
	date_of_birth.Show();
	cout << endl;
	
	cout << "Gender: " << gender << endl;
	cout << "Class: " << classroom << endl;
}