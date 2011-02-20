/*
 * MergeSort.h
 *
 *  Created on: Feb 20, 2011
 *      Author: jwright
 */

#ifndef MERGESORT_H_
#define MERGESORT_H_
#include <stdint.h>
#include <vector>
using std::vector;
class MergeSort {
public:
	MergeSort(size_t max_input_size);
	virtual ~MergeSort();
	void merge(uint32_t a[], uint32_t l, uint32_t m, uint32_t r);
	void mergesort(uint32_t a[], uint32_t l, uint32_t r);
private:
	uint32_t* aux;

};

#endif /* MERGESORT_H_ */
