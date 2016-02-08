// UTBase.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include "stdafx.h"
#include "gtest/gtest.h"
#include "simplemath.h"

TEST(SimpleMath, testCubical)
{
	SimpleMath* math = new SimpleMath();
	EXPECT_EQ(1000, math->cubic(10));
}