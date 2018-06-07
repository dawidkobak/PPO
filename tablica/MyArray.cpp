#include <iostream> 
#include "MyArray.h"

MyArray::MyArray(int* array, const int n_size)
:size(array_size)
{	
	array_size = n_size;	
	table = array;
	bare = array;
}
	
MyArray::MyArray(const MyArray& to_copy)
:size(array_size)
{
	array_size = to_copy.size;
	table = new int[size];
	for (int i = 0; i < size; ++i)
	{
		table[i] = to_copy.table[i];
	}
	ID = to_copy.ID;
}

MyArray::~MyArray()
{
	delete[] table;
}

int& MyArray::id()
{
	return ID;
}

int& MyArray::at(int i) const
{
	return table[i];
}

void MyArray::print() const
{
	std::cout << "Content of array with ID=" << ID << std::endl;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "array[" << i << "] = " << table[i] << std::endl;
	}
}

void MyArray::resize(int n_size)
{
	int* new_table = new int[n_size];

	for (int i = 0; i < size; ++i)
	{
		new_table[i] = table[i];
	}

	delete[] table;

	table = new_table;

	array_size = n_size;

	bare = new int[n_size];

	for (int i = 0; i < size; ++i)
	{
		bare[i] = table[i];
	}
	delete[] table;

	table = bare;
}

int MyArray::id() const
{
	return ID;
}