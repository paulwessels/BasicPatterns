#include "Controller.h"
#include "View.h"
#include <iostream>

Controller::Controller()
{

}

double Controller::calculation(Operator_e operation, double firstValue, double secondValue)
{
	double result = 0;

	switch (operation)
	{
	case ADDITION:
	{
		result = firstValue + secondValue;
		break;
	}
	case SUBTRACTION:
	{
		result = firstValue - secondValue;
		break;
	}
	case MULTIPLICATION:
	{
		result = firstValue * secondValue;
		break;
	}
	case DIVISION:
	{
		result = firstValue / secondValue;
		break;
	}
	default:
		break;
	}

	return result;
}









