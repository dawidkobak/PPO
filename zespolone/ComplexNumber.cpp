#include <iostream> 
#include "ComplexNumber.h"

void ComplexNumber::Print() const
{
	if(imaginary)
	{
		std::cout << real << " + " << imaginary <<"i\n";
	}
	else
	{
		std::cout << real << std::endl;
	}
}

double& ComplexNumber::Real()
{
	return real;
}

double ComplexNumber::Real() const
{
	return real;
}

double& ComplexNumber::Imaginary()
{
	return imaginary;
}

double ComplexNumber::Imaginary() const
{
	return imaginary;
}

ComplexNumber& ComplexNumber::Add(const ComplexNumber& complex)
{
	this->real += complex.real;
	this->imaginary += complex.imaginary;
	return *this;
}

ComplexNumber& ComplexNumber::Add(double n_real)
{
	this->real += n_real;
	return *this;
}

bool ComplexNumber::operator > (const ComplexNumber& complex) const
{
	if (this->real * this->real + this->imaginary * this-> imaginary > complex.real * complex.real + complex.imaginary * complex.imaginary)
		return true;
	else
		return false;
}