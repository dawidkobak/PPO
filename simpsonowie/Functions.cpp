#include <iostream>
#include "Student.h"
#include "Iterator.h"

void set_student(const char first_l_name,const char first_l_surname,const int mark,Student* student)
{
	student->first_letter_name = first_l_name;
	student->first_letter_surname = first_l_surname;
	student->grade = mark;
	student->next = nullptr;
}

void print(const Student& student)
{
	std::cout << "Initials: " << student.first_letter_name << ". " 
	<< student.first_letter_surname << ".  grade: " << student.grade
	<<std::endl;
}

void attach_back(Student* student1, Student* student2)
{
	Student* help = student1;
	while (help->next != nullptr)
		help = help->next;
	help->next = student2;
}

void init_iter(Student* student, Iterator* iterator)
{
	iterator->object = student;
	iterator->counter = 0;
}

void print_iter(Iterator* iterator)
{
	std::cout << iterator->counter << ". ";
	print(*(iterator->object));
	(iterator->counter)++;
}

void move_forward(Iterator* iterator)
{
	iterator->object = (iterator->object)->next;
}

void clear_all(Student* student)
{
	student->next = nullptr;
}