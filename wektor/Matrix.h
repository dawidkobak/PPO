#ifndef MATRIX_H
#define MATRIX_H

class VectorTrans;
class Vector;

class Matrix
{
public:
	Matrix() {}
	~Matrix();
	friend std::ostream& operator << (std::ostream& output, const Matrix& matrix);
	friend Matrix operator* (const VectorTrans& vec1, const Vector& vec2);

	void memory_alloc(const int rows, const int columns);
	
private:
	int** mat;
	int columns;
	int rows;
};



#endif
