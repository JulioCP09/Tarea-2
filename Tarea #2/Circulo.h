#pragma once
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica
{
private:
	float radio;
public:
	Circulo(float r);
	float Area() override;
	float Perimetro() override;
};

