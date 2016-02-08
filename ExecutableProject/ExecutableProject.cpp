// ExecutableProject.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "simplemath.h"

int main()
{
	SimpleMath* simpleMath = new SimpleMath();
	printf("Cubical of %d = %f", 10, simpleMath->cubic(10));
	getchar();
    return 0;
}

