#ifndef OPERATORS_H
#define OPERATORS_H

#include "VectorTrans.h"
#include "Matrix.h"
#include "Vector.h"

std::ostream& operator << (std::ostream& output, const VectorTrans& vec);

Matrix operator *(const VectorTrans& vec1, const Vector& vec2);

std::ostream& operator << (std::ostream& output, const Matrix& matrix);

std::ostream& operator << (std::ostream& output, const Vector& vec);

double operator *(const Vector& vec1, const VectorTrans& vec2);

#endif