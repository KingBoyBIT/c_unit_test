
#include "app_code.h"
#include "unity.h"

/* sometimes you may want to get at local data in a module.
 * for example: If you plan to pass by reference, this could be useful
 * however, it should often be avoided */
extern int Counter;

void setUp(void)
{
	/* This is run before EACH TEST */
	Counter = 0x5a5a;
}

void tearDown(void)
{
}
/**
 * @brief 测试用例
 * 
 */
void unit_test_1(void)
{
	/*正常情况*/
	Counter = 0x1234;
	TEST_ASSERT_EQUAL_HEX(0x1234, Return_Local_Value());
	/*错误情况*/
	TEST_ASSERT_EQUAL_HEX(0x1235, Return_Local_Value());
}
