#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include "VectorTrans.h"
#include "Matrix.h"

class Vector
{
public:
	friend std::ostream& operator << (std::ostream& output, const Vector& vec);
	friend Matrix operator *(const VectorTrans& vec1, const Vector& vec2);
	friend double operator *(const Vector& vec1, const VectorTrans& vec2);
	Vector(const int n_size);
	~Vector();

	int& operator[] (int index) const;

	Vector(const Vector& vec);

	Vector& operator = (const Vector& vec);

private:
	int size;
	int* table;
	
};



#endif
