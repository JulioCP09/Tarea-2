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

void Circulo::mostrar()
{
	float radio;
	cout << "Ingrese el radio del circulo: ";
	cin >> radio;
	Circulo circulo(radio);
	cout << "Area del circulo: " << circulo.Area() << endl;
	cout << "Perimetro del circulo: " << circulo.Perimetro() << endl;
}
