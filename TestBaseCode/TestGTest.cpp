#include <limits.h>
#include <gtest/gtest.h>
#include <MergeSort.h>
#include <vector>
#include <stdint.h>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;
TEST(BasicSort, ItemCount5) {
	uint32_t array[] = {5, 3, 4, 1, 2, 0};
	MergeSort m = MergeSort(6);
	m.mergesort(array, 0, 6);
	for(int i = 0;
			i < 6;
			++i)
		EXPECT_EQ( array[i], i);


}


TEST(BasicSort, ItemCount15) {
	uint32_t array[] = {70, 21, 45, 61, 23, 0, 91, 84, 68, 3, 60, 55, 63, 41, 40};
	uint32_t sorted[] = {0, 3, 21, 23, 40, 41, 45, 55, 60, 61, 63, 68, 70, 84, 91};
	MergeSort m = MergeSort(16);
	m.mergesort(array, 0, 16);
	for(int i = 0;
			i < 6;
			++i)
		EXPECT_EQ( array[i], sorted[i]);


}

