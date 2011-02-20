/*
 * MergeSort.cpp
 *
 *  Created on: Feb 20, 2011
 *      Author: jwright
 */
#include <iostream>
#include "MergeSort.h"
using std::cout;
using std::endl;
MergeSort::MergeSort(size_t max_input_size)
{
	aux = new uint32_t[max_input_size];
}

MergeSort::~MergeSort() {
	delete[] aux;
}
void MergeSort::merge(uint32_t a[], uint32_t l, uint32_t m, uint32_t r)
{
	uint32_t i, j;

	for(i = m+1; i > l; i--)
		aux[i-1] = a[i-1];
	for(j = m; j < r; j++)
		aux[r+m-j]=a[j+1];
	for(uint32_t k = l; k <= r; k++)
	{
		if(aux[j] < aux[i])
			a[k] = aux[j--];
		else
			a[k] = aux[i++];
	}
}
void MergeSort::mergesort(uint32_t a[], uint32_t l, uint32_t r)
{

	if(r <= l) return;
	uint32_t m = (r+l)/2;
	mergesort(a, l, m);
	mergesort(a, m+1, r);
	merge(a, l, m, r);
}
