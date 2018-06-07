#ifndef VECTOR3D_H
#define VECTOR3D_H

class VectorTrans3D;

class Vector3D
{
public:
	Vector3D(int n_x, int n_y, int n_z)
	:x(n_x), y(n_y), z(n_z) {}
	~Vector3D() {}

	void Print() const;

	int Times(const VectorTrans3D& vec) const;

	int GetX() const { return x; }
	int GetY() const { return y; }
	int GetZ() const { return z; }

private:
	int x;
	int y;
	int z;
	
};

#endif
