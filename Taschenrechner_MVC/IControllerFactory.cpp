#include "IControllerFactory.h"


Controller *ControllerFactory::createController(Model *model, View *view)
{
	Controller *controller = new Controller(model, view);

	return controller;
}