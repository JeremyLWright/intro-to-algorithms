/*
 * main.cpp
 *
 *  Created on: Feb 5, 2011
 *      Author: jwright
 */
#include <iostream>
#include "Application.h"
using namespace cpp_practicum;
int main(int argc, char* argv[])
{
	std::cout << "Hello Testable application." << std::endl;
	Application::Ptr app = Application::construct();
	app->run();

}
