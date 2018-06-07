#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

struct Fraction
{
	int nominator;
	int denominator;
};

typedef Fraction*** Matrix;

void InitMatrix(Matrix* matrix, const int size)
{
	*matrix = new Fraction**[size];

	for (int i = 0; i < size; ++i)
	{
		(*matrix)[i] = new Fraction*[size];
	}
}

void SetFraction(Fraction* frac, const int n_nominator, const int n_denominator)
{
	frac->nominator = n_nominator;
	frac->denominator = n_denominator;
}

void Print(Fraction* frac)
{
	int full_part = frac->nominator / frac->denominator;
	if (full_part) // jest jakaś część całkowita
	{
		int rest = frac->nominator - full_part * frac->denominator;
		if(not rest)
			std::cout << full_part << "\t";
		else
			std::cout << full_part << " " << rest << "/" << frac->denominator << "\t";
	}
	else
		std::cout << frac->nominator << "/" << frac->denominator << "\t";
}

void FillRowByColumnPlus1(Matrix* matrix, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			//if(*matrix[i][j]) delete *matrix[i][j];
			(*matrix)[i][j] = new Fraction;
			SetFraction((*matrix)[i][j], i+1, j+1);
		}
	}
}

void FillRowByColumnPlus5(Matrix* matrix, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			//if(*matrix[i][j]) delete *matrix[i][j];
			(*matrix)[i][j] = new Fraction;
			SetFraction((*matrix)[i][j], i+1, j+5);
		}
	}
}

void PrintMatrix(Matrix matrix, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			Print(matrix[i][j]);
		}
		std::cout << std::endl;
	}
}

void Sum(Matrix m1, Matrix m2, const int size, Matrix* result)
{
	InitMatrix(result, size);

	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			(*result)[i][j] = new Fraction;
			int temp_nominator = m1[i][j]->nominator * m2[i][j]->denominator + m2[i][j]->nominator * m1[i][j]->denominator;
			int temp_denominator = m1[i][j]->denominator * m2[i][j]->denominator;
			SetFraction((*result)[i][j], temp_nominator, temp_denominator);
		}
	}
}

void Clear(Matrix matrix, const int size)
{
	for (int i = 0; i < size; ++i)
	{
		for(int j = 0; j < size; ++j)
		{
			delete matrix[i][j];
		}
		delete matrix[i];
	}
	delete matrix;
}

#endif