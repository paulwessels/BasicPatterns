#include "Model.h"
#include <stdio.h>
#include <string.h>


Model::Model(double result, double firstValue, double secondValue, Operator_e operation)
{
	this->result = result;
	this->firstValue = firstValue;
	this->secondValue = secondValue;
	this->operation = operation;
}