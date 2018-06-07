#include <iostream> 
#include "VectorTrans3D.h"
#include "Vector3D.h"
#include "Matrix3.h"

void VectorTrans3D::Print() const
{
	std::cout << x << std::endl;
	std::cout << y << std::endl;
	std::cout << z << std::endl;
}

Matrix3& VectorTrans3D::Times(const Vector3D& vec) const
{
	static Matrix3 matrix;

	matrix.M[0][0] = x * vec.GetX();
	matrix.M[0][1] = x * vec.GetY();
	matrix.M[0][2] = x * vec.GetZ();
	matrix.M[1][0] = y * vec.GetX();
	matrix.M[1][1] = y * vec.GetY();
	matrix.M[1][2] = y * vec.GetZ();
	matrix.M[2][0] = z * vec.GetX();
	matrix.M[2][1] = z * vec.GetY();
	matrix.M[2][2] = z * vec.GetZ();

	return matrix;
}
