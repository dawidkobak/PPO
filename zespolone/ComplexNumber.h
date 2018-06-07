#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

class ComplexNumber
{
public:
	ComplexNumber(double n_real, double n_imaginary)
	:real(n_real), imaginary(n_imaginary) {}
	~ComplexNumber() {}
	ComplexNumber(double n_real)
	:real(n_real), imaginary(0) {}

	void Print() const;

	double& Real();

	double Real() const;

	double& Imaginary();

	double Imaginary() const;

	ComplexNumber& Add(const ComplexNumber& complex);

	ComplexNumber& Add(double n_real);

	bool operator > (const ComplexNumber& complex) const;


private:
	double real;
	double imaginary;
};

#endif
