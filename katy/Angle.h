#ifndef ANGLE_H
#define ANGLE_H

class Angle
{
public:
	~Angle();

	static Angle fromRadians(double n_rad);

	static Angle fromDegrees(double n_degrees);

	double toRad() const;

	double toDeg() const;

	static Angle distance(const Angle& ang1, const Angle& ang2);

	Angle(const Angle& angle);

	Angle& add(const Angle& angle);

	operator double() const; 

private:
	Angle(double n_degrees):
	degrees(n_degrees) {}
	double degrees;
};

#endif
