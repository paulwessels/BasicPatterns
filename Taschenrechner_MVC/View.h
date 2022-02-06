#pragma once
#include "Controller.h"
#include "Model.h"
#include "IControllerFactory.h"

class ControllerFactory;
class View
{
public:
	View(Model *model, ControllerFactory *controllerFactory);
	void actualizeView();
	double readValue();
	Operator_e readOperation();
private:
	Model *model;
	Controller *controller;
};

