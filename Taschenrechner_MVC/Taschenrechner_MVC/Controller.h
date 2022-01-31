#pragma once
#include "Model.h"

class Controller
{
public:
	void setModel(Model *model);
	void runCalculator();
private:
	void calculation();
	void setFirstVal();
	void setSecondVal();
	void setOperationMode();
};



