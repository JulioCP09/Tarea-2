#pragma once
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
private:
	float base, altura, lado1, lado2;
public:
	Triangulo(float b, float a, float l1, float l2);
	float Area() override;
	float Perimetro() override;
};

