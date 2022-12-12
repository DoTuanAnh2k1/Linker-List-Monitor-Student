#pragma once
#include <iostream>
#include "Node.h"
#include "Student.h"
using namespace std;

class List
{
private:
	Node* P_head;
	Node* P_tail;
	int size;
public:
	List();
	
	int Get_Size_of_list();

	void Push_Student(Student*);
	void Delete_Student_by_Id(string);
	void Update_Student(string);
	void Searching_Student_by_Name(string);
	void Show();

	~List();
};