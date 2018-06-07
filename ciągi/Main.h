#ifndef MAIN_H
#define MAIN_H

#include <iostream>

typedef int rozmiarCiagu;

typedef int* ciag;

typedef int (*operacja)(ciag, rozmiarCiagu);

ciag InicjalizujCiagGeometryczny(rozmiarCiagu rozmiar, float iloraz)
{
	int* nowy_ciag = new int[rozmiar];

	nowy_ciag[0] = 1;

	for (int i = 1; i < rozmiar; ++i)
	{
		nowy_ciag[i] = iloraz * nowy_ciag[i-1];
	}

	return nowy_ciag;
}

void Wypisz(ciag geometryczny, rozmiarCiagu rozmiar)
{
	std::cout << "(" << geometryczny[0];
	for (int i = 1; i < rozmiar; ++i)
	{
		std::cout << ", " << geometryczny[i];
	}
	std::cout << ")\n";
}

int Suma(ciag geometryczny, rozmiarCiagu rozmiar)
{
	int suma = 0;
	for (int i = 0; i < rozmiar; ++i)
	{
		suma += geometryczny[i];
	}
	return suma;
}

int Iloczyn(ciag geometryczny, rozmiarCiagu rozmiar)
{
	int iloczyn = 1;
	for (int i = 0; i < rozmiar; ++i)
	{
		iloczyn *= geometryczny[i];
	}
	return iloczyn;
}

int Max(ciag geometryczny, rozmiarCiagu rozmiar)
{
	int max = geometryczny[0];

	for (int i = 1; i < rozmiar; ++i)
	{
		if(max < geometryczny[i])	max = geometryczny[i];
	}

	return max;
}

int Min(ciag geometryczny, rozmiarCiagu rozmiar)
{
	int min = geometryczny[0];

	for (int i = 1; i < rozmiar; ++i)
	{
		if(geometryczny[i] < min)	min = geometryczny[i];
	}

	return min;
}

void WykonajIWypisz(int (*wsk)(ciag, rozmiarCiagu), ciag geometryczny, rozmiarCiagu rozmiar)
{
	if(wsk == Suma)
	{
		std::cout << "SUMA: " << wsk(geometryczny, rozmiar) << std::endl;
	}

	if(wsk == Iloczyn)
	{
		std::cout << "ILOCZYN: " << wsk(geometryczny, rozmiar) << std::endl;
	}

	if(wsk == Max)
	{
		std::cout << "MAX: " << wsk(geometryczny, rozmiar) << std::endl;
	}

	if(wsk == Min)
	{
		std::cout << "MIN: " << wsk(geometryczny, rozmiar) << std::endl;
	}
}



#endif