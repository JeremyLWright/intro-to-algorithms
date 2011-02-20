/**
 * @file Application.cpp
 *
 * @par
 * C++ Practicum Solutions
 * Problem Set X, Problem Y
 *
 * @par
 * Copyright Jeremy Wright (c) 2011
 * Creative Commons Attribution-ShareAlike 3.0 Unported License.
 */

#include "Application.h"
#include <iostream>
#include "file_utils/InputFile.h"
#include "MergeSortInputFileFormat.h"
#include "MergeSort.h"
namespace cpp_practicum {
using std::cout;
using std::endl;

Application::Application()
{
}

Application::~Application() {
	// TODO Auto-generated destructor stub
}

void Application::run(string filename)
{
	MergeSortInputFileFormat format = MergeSortInputFileFormat();
	InputFile file = InputFile(filename, format);
	file.next();
	uint32_t input_size = format.get_input_size();
	uint32_t* input_array = new uint32_t[input_size];
	for(uint32_t i = 0; i < input_size; ++i)
	{
		file.next();
		input_array[i] = format.get_input_value();
	}

	MergeSort m = MergeSort(input_size);
	m.mergesort(input_array, 0, input_size-1);
	string suffix = ".out";
	filename.append(suffix);
	ofstream f(filename.c_str());
	f << input_size << endl;
	for(uint32_t i = 0; i < input_size; ++i)
	{
		f << input_array[i] << endl;
	}
	delete[] input_array;
}

}
