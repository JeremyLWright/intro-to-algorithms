/*
 * MergeSortInputFileFormat.cpp
 *
 *  Created on: Feb 20, 2011
 *      Author: jwright
 */

#include "MergeSortInputFileFormat.h"
namespace cpp_practicum {
MergeSortInputFileFormat::MergeSortInputFileFormat():
	current_position(INPUT_SIZE)
{

}

MergeSortInputFileFormat::~MergeSortInputFileFormat() {
}

uint32_t MergeSortInputFileFormat::get_input_size()
{
	return input_size;
}
uint32_t MergeSortInputFileFormat::get_input_value()
{
	return current_value;
}
void MergeSortInputFileFormat::put_next_token(string token)
{
	switch(current_position)
	{
	case INPUT_SIZE:
		from_string<uint32_t>(input_size, token, std::dec);
		current_position = INPUT_VALUE;
	case INPUT_VALUE:
		from_string<uint32_t>(current_value, token, std::dec);
	}
}
}
