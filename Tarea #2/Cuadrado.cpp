#include "Cuadrado.h"

Cuadrado::Cuadrado(float l) : lado(l)
{
}

float Cuadrado::Area()
{
	return lado * lado;
}

float Cuadrado::Perimetro()
{
	return lado * 4;
}

void Cuadrado::mostrar()
{
	float lado;
	cout << "Ingrese el lado del cuadrado: ";
	cin >> lado;
	Cuadrado cuadrado(lado);
	cout << "Area del cuadrado: " << cuadrado.Area() << endl;
	cout << "Perimetro del cuadrado: " << cuadrado.Perimetro() << endl;
}
