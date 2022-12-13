#include <iostream>
#include "Node.h"
using namespace std;

Node::Node()
{

	student = new Student;
}

Node::Node(Student* student, Node* P_previous, Node* P_next)
{
	this->student->Set_Class(student->Get_Class());
	this->student->Set_Date_of_birth(student->Get_Date_of_birth());
	this->student->Set_Gender(student->Get_Gender());
	this->student->Set_Id(student->Get_ID());
	this->student->Set_Name(student->Get_Name());

	this->P_previous = P_previous;
	this->P_next = P_next;
}

void Node::Set_Student(Student* s)
{
	this->student->Set_Class(s->Get_Class());
	this->student->Set_Date_of_birth(s->Get_Date_of_birth());
	this->student->Set_Gender(s->Get_Gender());
	this->student->Set_Id(s->Get_ID());
	this->student->Set_Name(s->Get_Name());
}

void Node::Set_P_previous(Node* P_previous)
{
	this->P_previous = P_previous;
}

void Node::Set_P_next(Node* P_next)
{
	this->P_next = P_next;
}

Student* Node::Get_Student()
{
	return student;
}

Node* Node::Get_P_previous()
{
	return P_previous;
}

Node* Node::Get_P_next()
{
	return P_next;
}

