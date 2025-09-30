// Tarea #2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Triangulo.h"
using namespace std;

int main()
{
	string respuesta = "si";
	bool continuar = true;

	while (continuar)
	{
		string figura;
		cout << "Ingrese la figura geometrica (circulo, cuadrado, triangulo): ";
		cin >> figura;
		if (figura == "circulo")
		{
			Circulo circulo(0);
			circulo.mostrar();
		}
		else if (figura == "triangulo")
		{
			Triangulo triangulo(0, 0, 0, 0);
			triangulo.mostrar();
		}
		else if (figura == "cuadrado")
		{
			Cuadrado cuadrado(0);
			cuadrado.mostrar();
		}
		else
		{
			cout << "Figura no valida." << endl;
		}
		cout << "Desea calcular otra figura? (si/no): ";
		cin >> respuesta;
		if (respuesta != "si")
		{
			continuar = false;
		}
	}
}