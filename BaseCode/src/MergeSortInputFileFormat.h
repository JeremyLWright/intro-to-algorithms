/*
 * MergeSortInputFileFormat.h
 *
 *  Created on: Feb 20, 2011
 *      Author: jwright
 */

#ifndef MERGESORTINPUTFILEFORMAT_H_
#define MERGESORTINPUTFILEFORMAT_H_
#include "file_utils/InputFileFormat.h"
#include <stdint.h>
#include <string>

namespace cpp_practicum {
using std::string;
class MergeSortInputFileFormat: public InputFileFormat {
public:
	MergeSortInputFileFormat();
	virtual ~MergeSortInputFileFormat();
	virtual uint32_t get_input_size();
	virtual uint32_t get_input_value();
	virtual void put_next_token(string);
private:
	uint32_t current_value;
	uint32_t input_size;

	typedef enum {
		INPUT_SIZE,
		INPUT_VALUE
	} token_t;
	token_t current_position;
};
}
#endif /* MERGESORTINPUTFILEFORMAT_H_ */
