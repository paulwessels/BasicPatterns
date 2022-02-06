#include "Controller.h"
#include "View.h"
#include <iostream>



Controller::Controller(Model *model, View *view)
{
	this->model = model;
	this->view = view;
}

void Controller::calculateResult()
{
	double result = 0;

	switch (model->operation)
	{
	case ADDITION:
	{
		result = model->firstValue + model->secondValue;
		break;
	}
	case SUBTRACTION:
	{
		result = model->firstValue - model->secondValue;
		break;
	}
	case MULTIPLICATION:
	{
		result = model->firstValue * model->secondValue;
		break;
	}
	case DIVISION:
	{
		result = model->firstValue / model->secondValue;
		break;
	}
	default:
		break;
	}

	model->result = result;
}

void Controller::setFirstValue()
{
	model->firstValue = view->readValue();
}

void Controller::setSecondValue()
{
	model->secondValue = view->readValue();
}

void Controller::setOperation()
{
	model->operation = view->readOperation();
}

double Controller::getResult()
{
	return model->result;
}


