#include <gtest/gtest.h>
extern "C"
{
#include "../includes/libr.h"
}
TEST(Desyat, Test1)
{
	ASSERT_DOUBLE_EQ(StringToDouble("123.456", 10), 123.456);
}
TEST(Desyat, Test2)
{
	ASSERT_DOUBLE_EQ(StringToDouble(".456", 10), 0.456);
}
TEST(Desyat, Test3)
{
	ASSERT_DOUBLE_EQ(StringToDouble("-123.", 10), -123);
}
/*TEST(Desyat, Test4)
{
	ASSERT_DOUBLE_EQ(StringToDouble("-qaz.AyN", 36), -qaz.AyN);
}*/


