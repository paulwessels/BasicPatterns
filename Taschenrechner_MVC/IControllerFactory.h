#pragma once
#include "View.h"
#include "Model.h"
#include "Controller.h"


class View;
class Controller;
class IControllerFacotry
{
public:
	virtual Controller *createController(Model *model, View *view) = 0;
protected:
	virtual ~IControllerFacotry() {};
};

class ControllerFactory : public IControllerFacotry
{
public:
	virtual Controller *createController(Model *model, View *view);

};

