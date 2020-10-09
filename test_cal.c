#include "unity.h"
#include "cal.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_sum(void)
{
  TEST_ASSERT_EQUAL(120, add(60,60));
  TEST_ASSERT_EQUAL(-10, add(-30,20));
}
void test_difference(void)
{
  TEST_ASSERT_EQUAL(20, subtract(50,30));
  TEST_ASSERT_EQUAL(-10, subtract(10,20));
}
void test_multiply(void)
{
  TEST_ASSERT_EQUAL(5, multiply(5,1));
  TEST_ASSERT_EQUAL(-10, multiply(-5,2));
}
void test_divide(void)
{
    TEST_ASSERT_EQUAL(2, divide(40,20));
    TEST_ASSERT_EQUAL(0.5, divide(20,40));
}
void test_power(void)
{

    TEST_ASSERT_EQUAL(1, power(2,0));
    TEST_ASSERT_EQUAL(125, power(5,3));
}
void test_exponent(void)
{
    TEST_ASSERT_EQUAL(1, exponent(0));
    TEST_ASSERT_EQUAL(7.389056, exponent(2));
}
void test_squareroot(void)
{
    TEST_ASSERT_EQUAL(0,squareroot(0));
    TEST_ASSERT_EQUAL(19.052558,squareroot(363));
}
void test_logten(void)
{
    TEST_ASSERT_EQUAL(1,logten(10));
    TEST_ASSERT_EQUAL(1.748188,logten(56));
}
void test_sine(void)
{
    TEST_ASSERT_EQUAL(0,sine(0));
    TEST_ASSERT_EQUAL(1,sine(90));
}
void test_cosine(void)
{
    TEST_ASSERT_EQUAL(1,cosine(0));
    TEST_ASSERT_EQUAL(0,cosine(90));
}
void test_tangent(void)
{
    TEST_ASSERT_EQUAL(0,tangent(0));
    TEST_ASSERT_EQUAL(1,tangent(45));
}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_sum);
  RUN_TEST(test_difference);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
  RUN_TEST(test_power);
  RUN_TEST(test_exponent);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_logten);
  RUN_TEST(test_sine);
  RUN_TEST(test_cosine);
  RUN_TEST(test_tangent);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
