#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Сourse_work/Flow.h"
#include <fstream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestFlowPushRelabel
{
	TEST_CLASS(UnitTestFlowPushRelabel)
	{
	public:

		TEST_METHOD(TestMethod_Сorrect_output_for_6_vertexes)
		{
			ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input1.txt");
			Flow flow(input);
			Assert::AreEqual(flow.max_flow(), 5);
		}
		TEST_METHOD(TestMethod_Exception_entering_the_first_character) {
			try {
				ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input2.txt");
				Flow flow(input);
			}
			catch (exception & ex) {
				Assert::AreEqual(ex.what(), "Error entering the first character in the string or missing a space after it. Check the correctness of the input in the file and correct these errors in the line under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Exception_entering_the_second_character) {
			try {
				ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input3.txt");
				Flow flow(input);
			}
			catch (exception & ex) {
				Assert::AreEqual(ex.what(), "Error entering the second character in the string or missing a space after it. Check the correctness of the input in the file and correct these errors in the line under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Exception_entering_the_third_number_flow) {
			try {
				ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input4.txt");
				Flow flow(input);
			}
			catch (exception & ex) {
				Assert::AreEqual(ex.what(), "Error entering the third character (bandwidth) in the string or the presence of a space after it.Please note that the bandwidth cannot be negative. Check that you entered the file correctly and correct these errors in the line number: 2");
			}
		}
		TEST_METHOD(TestMethod_Exception_empty_string) {
			try {
				ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input5.txt");
				Flow flow(input);
			}
			catch (exception & ex) {
				Assert::AreEqual(ex.what(), "A data-entry error. Check the correctness of the input in the file and correct these errors in the line under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Сorrect_output_for_6_vertexes_and_edge_from_source_to_sink)
		{
			ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input6.txt");
			Flow flow(input);
			Assert::AreEqual(flow.max_flow(), 25);
		}
		TEST_METHOD(TestMethod_Сorrect_output_for_2_vertexes_edges_from_source_to_sink)
		{
			ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input7.txt");
			Flow flow(input);
			Assert::AreEqual(flow.max_flow(), 20);
		}
		TEST_METHOD(TestMethod_Exception_there_is_a_path_from_the_vertex_to_itself) {
			try {
				ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input8.txt");
				Flow flow(input);
			}
			catch (exception & ex) {
				Assert::AreEqual(ex.what(), "The path from the vertex to itself is impossible in the string under the number: 2");
			}
		}
		TEST_METHOD(TestMethod_Сorrect_output_for_20_vertexes)
		{
			ifstream input("C:\\Users\\NikRER\\Desktop\\Учебный материал\\АиСД(Лабы)\\Курсач\\Сourse_work\\UnitTest1\\Input9.txt");
			Flow flow(input);
			Assert::AreEqual(flow.max_flow(), 19);
		}

	};
}
