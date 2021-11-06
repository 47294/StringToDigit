#include <gtest/gtest.h>
extern "C"
{
#include "../includes/libr.h"
}
TEST(Desyat, Test1)
{
	ASSERT_DOUBLE_EQ(StringToDouble('123.456', 10), 123.456);
}
TEST(Desyat, Test2)
{
	//ASSERT_DOUBLE_EQUAL();
}
TEST(Desyat, Test3)
{
	//ASSERT_DOUBLE_EQUAL();
}
TEST(Desyat, Test4)
{
	//ASSERT_DOUBLE_EQUAL();
}
TEST(Desyat, Test5)
{
	//ASSERT_DOUBLE_EQUAL();
}

