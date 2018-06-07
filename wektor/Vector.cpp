#include <iostream> 
#include "Vector.h"

Vector::Vector(const int n_size)
{
	size = n_size;
	table = new int[size];
}

Vector::~Vector()
{
	delete[] table;
}

int& Vector::operator[] (int index) const
{
	return table[index];
}

Vector::Vector(const Vector& vec)
{
	size = vec.size;
	table = new int[size];
	for (int i = 0; i < size; ++i)
	{
		table[i] = vec.table[i];
	}
}

Vector& Vector::operator = (const Vector& vec)
{
	if(this == &vec)
	{
		return *this;
	}
	this-> size = vec.size;

	delete[] this->table;

	table = new int[this->size];

	for (int i = 0; i < size; ++i)
	{
		table[i] = vec.table[i];
	}

	return *this;
}
