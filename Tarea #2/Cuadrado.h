#pragma once
#include "FiguraGeometrica.h"
class Cuadrado : public FiguraGeometrica
{
private:
	float lado;
public:
	Cuadrado(float l);
	float Area() override;
	float Perimetro() override;
	void mostrar();
};

