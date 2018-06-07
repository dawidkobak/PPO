#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "Student.h"
#include "Iterator.h"

void set_student(const char first_l_name,const char first_l_surname,const int mark,Student* student);

void print(const Student& student);

void attach_back(Student* student1, Student* student2);

void init_iter(Student* student, Iterator* iterator);

void print_iter(Iterator* iterator);

void move_forward(Iterator* iterator);

void clear_all(Student* student);

#endif