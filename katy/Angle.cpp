#include <iostream> 
#include "Angle.h"
#include <cmath>

Angle::~Angle()
{

}

Angle Angle::fromRadians(double n_rad)
{
	double degrees = n_rad * 180 / M_PI;
	if (degrees > 360)
	{
		while(degrees > 360) degrees -= 360;
	}
	else if (degrees < 0)
	{
		while(degrees < 0) degrees += 360;
	}
	Angle new_angle(degrees);
	return new_angle;

}

Angle Angle::fromDegrees(double n_degrees)
{
	double degrees = n_degrees;
	if (degrees > 360)
	{
		while(degrees > 360) degrees -= 360;
	}
	else if (degrees < 0)
	{
		while(degrees < 0) degrees += 360;
	}
	Angle new_angle(degrees);
	return new_angle;
}

double Angle::toRad() const
{
	double rad = degrees * M_PI / 180;
	return rad;
}

double Angle::toDeg() const
{
	return degrees;
}

Angle Angle::distance(const Angle& ang1, const Angle& ang2)
{
	if (ang1.degrees > ang2.degrees)
	{
		return fromDegrees(ang2-ang1);
	}
	else
	{
		return fromDegrees(ang1-ang2);
	}
}

Angle::Angle(const Angle& angle)
{
	degrees = angle.degrees;
}

Angle& Angle::add(const Angle& angle)
{
	this->degrees += angle.degrees;
	if (this->degrees > 360)
	{
		while(this->degrees > 360) degrees -= 360;
	}
	else if (this->degrees < 0)
	{
		while(this->degrees < 0) degrees += 360;
	}
	return *this;
}

Angle::operator double() const
{
	return degrees;
}
