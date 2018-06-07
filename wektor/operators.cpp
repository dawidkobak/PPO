#include <iostream>
#include "operators.h"

std::ostream& operator << (std::ostream& output, const Matrix& matrix)
{
	for (int i = 0; i < matrix.rows; ++i)
	{
		output << "[" << matrix.mat[i][0];
		for (int j = 1; j < matrix.columns; ++j)
		{
			output << ", " << matrix.mat[i][j];
		}
		output << "]\n";
	}
	return output;
}


std::ostream& operator << (std::ostream& output, const Vector& vec)
{
	output << "[" << vec.table[0];
	for (int i = 1; i < vec.size; ++i)
	{
		output << ", " << vec.table[i];
	}
	output << "]";
	return output;
}

double operator *(const Vector& vec1, const VectorTrans& vec2)
{
	double result = 0;
	for (int i = 0; i < vec1.size; ++i)
	{
		result += vec1.table[i] * vec2.table[i];
	}
	return result;
}


std::ostream& operator << (std::ostream& output, const VectorTrans& vec)
{
	for (int i = 0; i < vec.size; ++i)
	{
		output << "[" << vec.table[i] << "]\n";
	}
	return output;
}

Matrix operator *(const VectorTrans& vec1, const Vector& vec2)
{
	Matrix result;
	result.memory_alloc(vec1.size,vec2.size);

	for (int i = 0; i < vec1.size; ++i)
	{
		for (int j = 0; j < vec2.size; ++j)
		{
			result.mat[i][j] = vec1.table[i] * vec2.table[j];
		}
	}
	return result;
}