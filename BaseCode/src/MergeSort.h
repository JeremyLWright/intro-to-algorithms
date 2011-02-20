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
	MergeSort();
	static void merge(uint32_t a[], uint32_t l, uint32_t m, uint32_t r);
	static void mergesort(uint32_t a[], uint32_t l, uint32_t r);
private:

	const uint32_t array_max;
	virtual ~MergeSort();
};

#endif /* MERGESORT_H_ */
