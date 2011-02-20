#include <limits.h>
#include <gtest/gtest.h>
#include "MergeSort.h"
#include "file_utils/InputFileFormat.h"
#include "file_utils/InputFile.h"
#include "MergeSortInputFileFormat.h"
#include "Application.h"
#include <vector>
#include <stdint.h>
#include <iostream>
using std::vector;
using std::cout;
using std::endl;
using namespace cpp_practicum;
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

TEST(InputFileTest, Test0File){

	Application* app = new Application();
	app->run("test0.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test0.out", format_test);
	InputFile calc_output = InputFile("test0.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test1Files){

	Application* app = new Application();
	app->run("test1.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test1.out", format_test);
	InputFile calc_output = InputFile("test1.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test2Files){

	Application* app = new Application();
	app->run("test2.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test2.out", format_test);
	InputFile calc_output = InputFile("test2.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test3Files){

	Application* app = new Application();
	app->run("test3.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test3.out", format_test);
	InputFile calc_output = InputFile("test3.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test4Files){

	Application* app = new Application();
	app->run("test4.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test4.out", format_test);
	InputFile calc_output = InputFile("test4.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test5Files){

	Application* app = new Application();
	app->run("test5.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test5.out", format_test);
	InputFile calc_output = InputFile("test5.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test6Files){

	Application* app = new Application();
	app->run("test6.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test6.out", format_test);
	InputFile calc_output = InputFile("test6.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test7Files){

	Application* app = new Application();
	app->run("test7.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test7.out", format_test);
	InputFile calc_output = InputFile("test7.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}


TEST(InputFileTest, Test8Files){

	Application* app = new Application();
	app->run("test8.in");
	MergeSortInputFileFormat format_test = MergeSortInputFileFormat();
	MergeSortInputFileFormat format_calc = MergeSortInputFileFormat();
	InputFile test_output = InputFile("test8.out", format_test);
	InputFile calc_output = InputFile("test8.in.out", format_calc);
	test_output.next();
	calc_output.next();
	uint32_t input_size = format_test.get_input_size();
	for(uint32_t i = 0; i < input_size; ++i)
	{
		test_output.next();
		calc_output.next();
		EXPECT_EQ(format_test.get_input_value(), format_calc.get_input_value());
	}
	delete app;
}
