# GoogleTestVS2015
Complete Google Test Solution Template for VS 2015 with C++

This is a Visual Studio 2015 solution include a simple business logic implementation in a static library(LibraryProject), 
an executable console application uses static library as business logic(ExecutableProject), google test static library (GoogleTest) and
unit test project which tests the codes in Library project (UnitTest). 

You can open solution file in Visual Studio 2015 and use it without and additional dependencies.

[Google Test Runner](https://visualstudiogallery.msdn.microsoft.com/cbd1a9b2-790b-4d49-905f-d128ca21d3fb) is recommended for visualization of unit tests.

## LibraryProject
Bussiness logic of the solution has been implemented as a library project which eases unit testing.

## GoogleTest
Static google test library for using in Unit test project.

## ExecutableProject
Main executable project references to Library Project for using the logic implementation.

## UnitTest
Unit Test project references to LibraryProject and GoogleTest for testing the logic.

