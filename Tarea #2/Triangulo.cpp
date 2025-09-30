#include "Triangulo.h"

Triangulo::Triangulo(float b, float a, float l1, float l2) : base(b), altura(a), lado1(l1), lado2(l2)
{
}

float Triangulo::Area()
{
	return (base * altura) / 2;
}

float Triangulo::Perimetro()
{
	return base + lado1 + lado2;
}
