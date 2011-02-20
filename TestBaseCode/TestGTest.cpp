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

	MergeSort::mergesort(array, 0, 6);
	for(int i = 0;
			i < 6;
			++i)
		EXPECT_EQ( array[i], i);


}
