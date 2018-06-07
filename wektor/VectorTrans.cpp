#include <iostream> 
#include "VectorTrans.h"

VectorTrans::VectorTrans(const int n_size)
{
	size = n_size;
	table = new int[size];
}

VectorTrans::~VectorTrans()
{
	delete[] table;
}

int& VectorTrans::operator[] (int index) const
{
	return table[index];
}
