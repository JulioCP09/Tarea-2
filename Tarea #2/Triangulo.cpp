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

void Triangulo::mostrar()
{
	float base, altura, lado1, lado2;
	cout << "Ingrese la base del triangulo: ";
	cin >> base;
	cout << "Ingrese la altura del triangulo: ";
	cin >> altura;
	cout << "Ingrese el lado 1 del triangulo: ";
	cin >> lado1;
	cout << "Ingrese el lado 2 del triangulo: ";
	cin >> lado2;
	Triangulo triangulo(base, altura, lado1, lado2);
	cout << "Area del triangulo: " << triangulo.Area() << endl;
	cout << "Perimetro del triangulo: " << triangulo.Perimetro() << endl;
}
