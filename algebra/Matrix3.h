#ifndef MATRIX3_H
#define MATRIX3_H

class VectorTrans3D;
class Matrix3
{
public:
	friend VectorTrans3D;
	Matrix3() {}
	~Matrix3() {}

	void Print() const;

	VectorTrans3D& Times(const VectorTrans3D& vec);

	Matrix3& Times(const Matrix3& mat);

private:
	int M[3][3];
	
};

#endif
