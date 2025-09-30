#pragma once
#include <iostream>
using namespace std;

//acirculo 3.14 * (raiz * raiz)   pcirculo (raiz + raiz) * 3.14
//atriangulo (base * altura) / 2  ptriangulo base + lado1 + lado2 
//acuadrado lado * lado           pcuadrado lado * 4

class FiguraGeometrica
{
public:
	virtual float Area() = 0;
	virtual float Perimetro() = 0;
};