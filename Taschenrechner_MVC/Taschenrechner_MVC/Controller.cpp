#include "Controller.h"
#include <iostream>

Model *contModel;

void Controller::setModel(Model *model)
{
	contModel = model;
}

void Controller::calculation()
{
	switch (contModel->modelData.opMode)
	{
	case '+':
	{
		contModel->modelData.result = contModel->modelData.firstVal + contModel->modelData.secondVal;
		break;
	}
	case '-':
	{
		contModel->modelData.result = contModel->modelData.firstVal - contModel->modelData.secondVal;
		break;
	}
	case '*':
	{
		contModel->modelData.result = contModel->modelData.firstVal * contModel->modelData.secondVal;
		break;
	}
	case '/':
	{
		contModel->modelData.result = contModel->modelData.firstVal / contModel->modelData.secondVal;
		break;
	}
	default:
		break;
	}
}

void Controller::setFirstVal()
{
	bool notGood = true;

	while (notGood)
	{
		std::cin >> contModel->modelData.firstVal;
		notGood = std::cin.fail();
		if (notGood)
		{
			std::cout << "Bitte Zahl eingeben!" << std::endl;
			
		}
	}
}

void Controller::setSecondVal()
{
	bool notGood = true;

	while (notGood)
	{
		std::cin >> contModel->modelData.secondVal;
		notGood = std::cin.fail();
		if (notGood)
		{
			std::cout << "Bitte Zahl eingeben!" << std::endl;
			
		}
	}
}

void Controller::setOperationMode()
{
	bool notGood = true;

	while (notGood)
	{
		std::cin >> contModel->modelData.opMode;

		if (contModel->modelData.opMode == '+' || contModel->modelData.opMode == '-' || contModel->modelData.opMode == '*' || contModel->modelData.opMode == '/')
		{
			notGood = false;
		}

		if (notGood)
		{
			std::cout << "Bitte eine der folgenden Operationen waehlen: +, -, *, \\!" << std::endl;
		}
	}
}

void Controller::runCalculator()
{
	std::cout << "Willkommen bei Powels shitty Taschenrechner,\nbitte gebe eine Zahl ein und bestaetige mit Enter!" << std::endl;
	setFirstVal();
	std::cout << "Bitte gebe eine Rechenoperation ein, bestaetige mit Enter!" << std::endl;
	setOperationMode();
	std::cout << "Bitte gebe eine zweite Zahl ein und bestaetige mit Enter!" << std::endl;
	setSecondVal();
	calculation();
	std::cout << "Das Ergebniss lautet: " << contModel->modelData.result << std::endl;
	std::cout << "Bestaetige bitte mit einem pinken Einhorn! " << std::endl;
}