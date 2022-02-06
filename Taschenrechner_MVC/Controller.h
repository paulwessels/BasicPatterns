#pragma once
#include "Model.h"
#include "View.h"

class View;
class Controller
{
public:
	Controller(Model *model, View *view);

	void calculateResult();
	void setFirstValue();
	void setSecondValue();
	void setOperation();
	double getResult();
private:
	Model *model;
	View *view;
};

