#ifndef STUDENT_H
#define STUDENT_H

struct Student
{
	char first_letter_name;
	char first_letter_surname;
	int grade;
	Student* next;
};

#endif