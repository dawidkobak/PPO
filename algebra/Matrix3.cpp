#include <iostream> 
#include "Matrix3.h"
#include "VectorTrans3D.h"

void Matrix3::Print() const
{
	for (int i = 0; i < 3; ++i)
	{
		std::cout << "(" << M[i][0] << ", " << M[i][1] << ", " << M[i][2] << ")\n";
	}
}

VectorTrans3D& Matrix3::Times(const VectorTrans3D& vec)
{
	static VectorTrans3D wektorek(0,0,0);

	int tempX = M[0][0] * vec.GetX() + M[0][1] * vec.GetY() + M[0][2] * vec.GetZ();
	wektorek.SetX(tempX);
	int tempY = M[1][0] * vec.GetX() + M[1][1] * vec.GetY() + M[1][2] * vec.GetZ();
	wektorek.SetY(tempY);
	int tempZ = M[2][0] * vec.GetX() + M[2][1] * vec.GetY() + M[2][2] * vec.GetZ();
	wektorek.SetZ(tempZ);

	return wektorek;
}

Matrix3& Matrix3::Times(const Matrix3& mat)
{
	static Matrix3 nowa;

	nowa.M[0][0] = M[0][0] * mat.M[0][0] + M[0][1] * mat.M[1][0] + M[0][2] * mat.M[2][0];
	nowa.M[0][1] = M[0][0] * mat.M[0][1] + M[0][1] * mat.M[1][1] + M[0][2] * mat.M[2][1];
	nowa.M[0][2] = M[0][0] * mat.M[0][2] + M[0][1] * mat.M[1][2] + M[0][2] * mat.M[2][2];
	nowa.M[1][0] = M[1][0] * mat.M[0][0] + M[1][1] * mat.M[1][0] + M[1][2] * mat.M[2][0];
	nowa.M[1][1] = M[1][0] * mat.M[0][1] + M[1][1] * mat.M[1][1] + M[1][2] * mat.M[2][1];
	nowa.M[1][2] = M[1][0] * mat.M[0][2] + M[1][1] * mat.M[1][2] + M[1][2] * mat.M[2][2];
	nowa.M[2][0] = M[2][0] * mat.M[0][0] + M[2][1] * mat.M[1][0] + M[2][2] * mat.M[2][0];
	nowa.M[2][1] = M[2][0] * mat.M[0][1] + M[2][1] * mat.M[1][1] + M[2][2] * mat.M[2][1];
	nowa.M[2][2] = M[2][0] * mat.M[0][2] + M[2][1] * mat.M[1][2] + M[2][2] * mat.M[2][2];

	return nowa;
}