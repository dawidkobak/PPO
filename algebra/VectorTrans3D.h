#ifndef VECTORTRANS3D_H
#define VECTORTRANS3D_H

class Matrix3;
class Vector3D;

class VectorTrans3D
{
public:
	VectorTrans3D(int n_x, int n_y, int n_z)
	:x(n_x), y(n_y), z(n_z) {}
	~VectorTrans3D() {}

	void Print() const;

	Matrix3& Times(const Vector3D& vec) const;

	int GetX() const { return x; }
	int GetY() const { return y; }
	int GetZ() const { return z; }

	void SetX(int n_x) { x = n_x; }
	void SetY(int n_y) { y = n_y; }
	void SetZ(int n_z) { z = n_z; }

private:
	int x;
	int y;
	int z;
	
};

#endif
