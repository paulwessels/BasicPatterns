#pragma once
#include "Controller.h"

class View
{
public:
	View(Controller *Controller, Model *model);
	void actualizeView();
	
private:
	Controller *controller;
	Model *model;

	double setValue();
	Operator_e readOperation();
};

