#include <iostream>
#include "Dob.h"
#include "Student.h"
#include "Node.h"
#include "List.h"
#include <vector>
using namespace std;




int main()
{
	List* list = new List;
	vector<Student*> students;
	Student* student1 = new Student(string("1"), string("1"), Dob(), string(), string());
	list->Push_Student(student1);
	list->Push_Student(new Student(string("2"), string("2"), Dob(), string(), string()));
	list->Push_Student(new Student(string("3"), string("3"), Dob(), string(), string()));
	list->Push_Student(new Student(string("4"), string("4"), Dob(), string(), string()));
	list->Push_Student(new Student(string("5"), string("5"), Dob(), string(), string()));
	list->Push_Student(new Student(string("6"), string("6"), Dob(), string(), string()));
	list->Push_Student(new Student(string("7"), string("7"), Dob(), string(), string()));
	list->Push_Student(new Student(string("8"), string("8"), Dob(), string(), string()));
	list->Push_Student(new Student(string("9"), string("9"), Dob(), string(), string()));
	list->Push_Student(new Student(string("0"), string("0"), Dob(), string(), string()));
	//Student* student1 = new Student(string("1"), string("1"), Dob(), string(), string());
	//Node node;
	//node.Set_Student(student1);

	cout << 1 << endl;
	return 0;
}