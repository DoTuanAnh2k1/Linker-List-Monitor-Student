#include <iostream>
#include "List.h"
using namespace std;

List::List()
{

	size = 0;
}

int List::Get_Size_of_list()
{
	return size;
}

void List::Push_Student(Student* P_student)
{
	Node* P_node = new Node;
	P_node->Set_Student(P_student);

	P_node->Set_P_next(nullptr);
	P_node->Set_P_previous(nullptr);
	if (size == 0)
	{
		P_head = P_node;
		P_tail = P_node;
		size++;
	}
	else
	{
		P_tail->Set_P_next(P_node);
		P_node->Set_P_previous(P_tail);
		P_tail = P_node;
		size++;
	}
}

void List::Delete_Student_by_Id(string id)
{
	if (size == 0)
	{
		cout << "List Empty";
	}
	else if (size == 1)
	{
		Node* P_temp = new Node;
		P_temp->Set_P_next(P_head);
		
		if (P_temp->Get_Student()->Get_ID() == id)
		{
			P_head = nullptr;
			P_tail = nullptr;
			size = 0;
			delete(P_temp);
		}
		else
		{
			cout << "Could not found this student's Id in this List" << endl;
		}
	}
	else if (size == 2)
	{
		Node* P_temp1 = new Node;
		Node* P_temp2 = new Node;

		P_temp1->Set_P_next(P_head);
		P_temp2->Set_P_previous(P_tail);

		if (P_temp1->Get_Student()->Get_ID() == id)
		{
			P_head->Set_P_next(P_temp2);
			delete(P_temp1);
			size--;
		}
		else if (P_temp2->Get_Student()->Get_ID() == id)
		{
			P_tail->Set_P_previous(P_temp1);
			delete(P_temp2);
			size--;
		}
		else
		{
			cout << "Could not found this student's Id in this List" << endl;
		}
	}
	else
	{
		Node* P_temp_previous = new Node;
		Node* P_temp_next = new Node;
		Node* P_temp = new Node;

		P_temp_previous->Set_P_next(P_head);
		P_temp->Set_P_next(P_head);
		P_temp_next->Set_P_previous(P_head->Get_P_next());

		while (P_temp_next->Get_P_next() != nullptr)
		{
			if (P_temp->Get_Student()->Get_ID() == id && P_temp->Get_P_next() != P_head)
			{
				P_temp_previous->Set_P_next(P_temp_next);
				P_temp_next->Set_P_previous(P_temp_previous);
				delete(P_temp);
				size--;
				break;
			}
			else
			{
				if (P_temp_next != nullptr)
				{
					P_temp_previous->Set_P_next(P_temp);
					P_temp->Set_P_next(P_temp_next);
					P_temp_next->Set_P_next(P_temp_next->Get_P_next());
				}
				else
				{
					P_temp_previous->Set_P_next(P_temp);
					P_temp->Set_P_next(P_temp_next);
				}
			}
		}
	}
	
}

void Update_Information(Student*& student)
{
	while (true)
	{
		int n;
		cout << "Which field do you want to update? ";
		cout << "Update: \tName\tDate of birth\tGender\tClass" << endl;
		cout << "Press:  \t  1 \t     2       \t   3  \t  4  " << endl;
		cout << "Press 0 to escape" << endl;
		cin >> n;

		if (n == 1)
		{
			string new_name;
			cout << "Enter name update: ";
			cin >> new_name;
			
			student->Set_Name(new_name);
			
			continue;
		}
		else if (n == 2)
		{
			int new_day;
			int new_month;
			int new_year;

			cout << "Enter day update: ";
			cin >> new_day;

			cout << "Enter month update: ";
			cin >> new_month;

			cout << "Enter year update: ";
			cin >> new_year;
			
			Dob new_date_of_birth(new_day, new_month, new_year);

			student->Set_Date_of_birth(new_date_of_birth);

			continue;
		}
		else if (n == 3)
		{
			string new_gender;
			cout << "Enter gender update: ";
			cin >> new_gender;

			student->Set_Gender(new_gender);

			continue;
		}
		else if (n == 4)
		{
			string new_class;
			cout << "Enter class update: ";
			cin >> new_class;

			student->Set_Class(new_class);

			continue;
		}
		else
		{
			break;
		}
	}
}

void List::Update_Student(string id)
{
	Node* P_temp = new Node;
	P_temp->Set_P_next(P_head);

	if (size == 0)
	{
		delete(P_temp);
		cout << "List Empty";
	}
	else
	{
		while (P_temp->Get_P_next() != nullptr)
		{
			if (P_temp->Get_Student()->Get_ID() == id)
			{
				Student* Student_temp = new Student;

				Student_temp = P_temp->Get_Student();

				Update_Information(Student_temp);

				P_temp->Set_Student(Student_temp);

				delete(Student_temp);
				break;
			}
			else
			{
				P_temp->Set_P_next(P_temp->Get_P_next());
			}
		}
		
		if (P_temp->Get_P_next() == nullptr)
		{
			cout << "Could not found this student's Id in this List" << endl;
		}
	}

	delete(P_temp);
}

void List::Searching_Student_by_Name(string name)
{
	Node* P_temp = new Node;
	P_temp->Set_P_next(P_head);

	if (size == 0)
	{
		delete(P_temp);
		cout << "List Empty";
	}
	else
	{
		while (P_temp->Get_P_next() != nullptr)
		{
			if (P_temp->Get_Student()->Get_ID() == name)
			{
				P_temp->Get_Student()->Show();
				cout << endl;
			}
			else
			{
				P_temp->Set_P_next(P_temp->Get_P_next());
			}
		}

		if (P_temp->Get_P_next() == nullptr)
		{
			cout << "Could not found this student's name in this List" << endl;
		}
	}
	
	delete(P_temp);
}

void List::Show()
{
	Node* P_temp = new Node;
	P_temp->Set_P_next(P_head);

	if (size == 0)
	{
		delete(P_temp);
		cout << "List Empty";
	}
	else
	{
		while (P_temp->Get_P_next() != nullptr)
		{
			P_temp->Get_Student()->Show();
			P_temp->Set_P_next(P_temp->Get_P_next());
		}
	}
}