#pragma once
#include <iostream>
#include "Student.h"
using namespace std;

class Node
{
private:
	Student* student;
	Node* P_previous;
	Node* P_next;
public:
	Node();
	Node(Student*, Node*, Node*);

	void Set_Student(Student*);
	void Set_P_previous(Node*);
	void Set_P_next(Node*);

	Student* Get_Student();
	Node* Get_P_previous();
	Node* Get_P_next();
};
