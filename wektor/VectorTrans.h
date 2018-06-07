#ifndef VECTORTRANS_H
#define VECTORTRANS_H

#include <iostream>
#include "Matrix.h"
#include "Vector.h"

class VectorTrans
{
public:
	friend double operator *(const Vector& vec1, const VectorTrans& vec2);
	friend std::ostream& operator << (std::ostream& output, const VectorTrans& vec);
	friend Matrix operator *(const VectorTrans& vec1, const Vector& vec2);
	VectorTrans(const int n_size);
	~VectorTrans();

	int& operator[] (int index) const;



private:
	int size;
	int* table;
	
};

#endif
