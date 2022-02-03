#pragma once

typedef enum {
	ADDITION,
	SUBTRACTION,
	MULTIPLICATION,
	DIVISION,
	DEFAULT,
}Operator_e;

class Model
{
public:
	double result, firstValue, secondValue;
	Operator_e operation;

	Model(double result, double firstValue, double secondValue, Operator_e operation);
};