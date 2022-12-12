#pragma once
#include <iostream>
#include "Dob.h"
using namespace std;

class Student
{
private:
	string id;
	string name;
	Dob date_of_birth;
	string gender;
	string classroom; // "classroom" stands for "class" in require because "class" maybe "class" can be confused with class 
public:
	Student();
	Student(string, string, Dob, string, string);

	void Set_Id(string);
	void Set_Name(string);
	void Set_Date_of_birth(Dob);
	void Set_Gender(string);
	void Set_Class(string);

	string Get_ID();
	string Get_Name();
	Dob Get_Date_of_birth();
	string Get_Gender();
	string Get_Class();

	void Show();
};