#include "pch.h"
#include "../library/library.h"

TEST(FactorialTest, AtTest) {
	ASSERT_EQ(1, Factorial<int>::at(0));
	ASSERT_EQ(1, Factorial<int>::at(1));
	ASSERT_EQ(2, Factorial<int>::at(2));
	ASSERT_EQ(3628800, Factorial<int>::at(10));
}