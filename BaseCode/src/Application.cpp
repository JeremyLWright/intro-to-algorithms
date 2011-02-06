/*
 * Application.cpp
 *
 *  Created on: Feb 5, 2011
 *      Author: jwright
 */

#include "Application.h"
#include <iostream>
namespace cpp_practicum {

Application::Ptr Application::construct()
{
	Application::Ptr c(new Application());
	return c;
}

Application::~Application() {
	// TODO Auto-generated destructor stub
}

void Application::run()
{
	std::cout << "Hello OO World" << std::endl;
}

Application::Application()
{
}

}
