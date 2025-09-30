#include "Circulo.h"

Circulo::Circulo(float r) : radio(r)
{
}

float Circulo::Area()
{
	return 3.14 * (radio * radio);
}

float Circulo::Perimetro()
{
	return (2 * radio) * 3.14;
}
