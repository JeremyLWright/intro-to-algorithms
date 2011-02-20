/**
 * @file main.cpp
 *
 * @par
 * C++ Practicum Solutions
 * Problem Set X, Problem Y
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */
#include <iostream>
#include "Application.h"
using namespace cpp_practicum;
int main(int argc, char* argv[])
{
	Application* app = new Application();
	app->run(argv[1]);

}
