#include "View.h"
#include "Controller.h"
#include <iostream> 
#include <string>


void View::actualizeView(Controller *controller)
{
	while (true)
	{
		controller->runCalculator();
		getchar();
		getchar();
		std::cout << std::string(10, '\n');
	}
}