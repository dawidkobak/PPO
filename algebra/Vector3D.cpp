#include <iostream> 
#include "Vector3D.h"
#include "VectorTrans3D.h"

void Vector3D::Print() const
{
	std::cout << "(" << x << ", " << y << ", " << z << ")\n"; 
}

int Vector3D::Times(const VectorTrans3D& vec) const
{
	return x * vec.GetX() + y * vec.GetY() + z * vec.GetZ();
}