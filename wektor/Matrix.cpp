#include <iostream> 
#include "Matrix.h"

Matrix::~Matrix() 
{
	for (int i = 0; i < rows; ++i)
	{
		delete[] mat[i];
	}
	delete mat;
}

void Matrix::memory_alloc(const int n_rows, const int n_columns)
{
	this->rows = n_rows;
	this->columns = n_columns;
	mat = new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		mat[i] = new int[columns];
	}
}