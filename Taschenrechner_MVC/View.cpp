#include "View.h"
#include "Controller.h"
#include "Model.h"
#include <iostream> 
#include <string>


View::View(Controller *controller, Model *model)
{
	this->controller = controller;
	this->model = model;
}

void View::actualizeView()
{
	while (true)
	{
		std::cout << "Willkommen bei Powels shitty Taschenrechner,\nbitte gebe eine Zahl ein und bestaetige mit Enter!" << std::endl;
		model->firstValue = setValue();
		std::cout << "Bitte gebe eine Rechenoperation ein, bestaetige mit Enter!" << std::endl;
		model->operation = readOperation();
		std::cout << "Bitte gebe eine zweite Zahl ein und bestaetige mit Enter!" << std::endl;
		model->secondValue = setValue();
		model->result = controller->calculation(model->operation, model->firstValue, model->secondValue);
		std::cout << "Das Ergebniss lautet: " << model->result << std::endl;
		std::cout << "Bestaetige bitte mit einem pinken Einhorn! " << std::endl;
		getchar();
		getchar();
		std::cout << std::string(10, '\n');
	}
}

double View::setValue()
{
	double result = 0;

	std::cin >> result;

	while (!std::cin.good())
	{
		std::cout << "Bitte Zahl eingeben!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> result;
	}

	return result;
}

Operator_e View::readOperation()
{
	char operation;
	Operator_e result;
	bool valid = true;

	do
	{
		valid = true;
		std::cin >> operation;

		switch (operation)
		{
		case '+':
			result = ADDITION;
			break;
		case '-':
			result = SUBTRACTION;
			break;
		case '*':
			result = MULTIPLICATION;
			break;
		case '/':
			result = DIVISION;
			break;
		default:
			valid = false;
			std::cin.clear();
			std::cout << "Bitte eine der folgenden Operationen waehlen: +, -, *, \\!" << std::endl;
			break;
		}
	} 
	while (!valid);

	return result;
}
