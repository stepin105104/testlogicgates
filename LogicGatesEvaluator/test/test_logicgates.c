#include "unity.h"
#include "logic_gates.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_not()
{


  TEST_ASSERT_EQUAL(0, not(1));

  TEST_ASSERT_EQUAL(1, not(0));

}
void test_and()
{


  TEST_ASSERT_EQUAL(0, and_two(0,0));
  TEST_ASSERT_EQUAL(0, and_two(0,1));
  TEST_ASSERT_EQUAL(0, and_two(1,0));
  TEST_ASSERT_EQUAL(1, and_two(1,1));

  TEST_ASSERT_EQUAL(0, and_three(0,0,0));
  TEST_ASSERT_EQUAL(0, and_three(0,0,1));
  TEST_ASSERT_EQUAL(0, and_three(0,1,0));
  TEST_ASSERT_EQUAL(0, and_three(0,1,1));
  TEST_ASSERT_EQUAL(0, and_three(1,0,0));
  TEST_ASSERT_EQUAL(0, and_three(1,0,1));
  TEST_ASSERT_EQUAL(0, and_three(1,1,0));
  TEST_ASSERT_EQUAL(1, and_three(1,1,1));
}
void test_or()
{


  TEST_ASSERT_EQUAL(0, or_two(0,0));
  TEST_ASSERT_EQUAL(1, or_two(0,1));
  TEST_ASSERT_EQUAL(1, or_two(1,0));
  TEST_ASSERT_EQUAL(1, or_two(1,1));

  TEST_ASSERT_EQUAL(0, or_three(0,0,0));
  TEST_ASSERT_EQUAL(1, or_three(0,0,1));
  TEST_ASSERT_EQUAL(1, or_three(0,1,0));
  TEST_ASSERT_EQUAL(1, or_three(0,1,1));
  TEST_ASSERT_EQUAL(1, or_three(1,0,0));
  TEST_ASSERT_EQUAL(1, or_three(1,0,1));
  TEST_ASSERT_EQUAL(1, or_three(1,1,0));
  TEST_ASSERT_EQUAL(1, or_three(1,1,1));
}

void test_nand()
{


  TEST_ASSERT_EQUAL(1, nand_two(0,0));
  TEST_ASSERT_EQUAL(1, nand_two(0,1));
  TEST_ASSERT_EQUAL(1, nand_two(1,0));
  TEST_ASSERT_EQUAL(0, nand_two(1,1));

  TEST_ASSERT_EQUAL(1, nand_three(0,0,0));
  TEST_ASSERT_EQUAL(1, nand_three(0,0,1));
  TEST_ASSERT_EQUAL(1, nand_three(0,1,0));
  TEST_ASSERT_EQUAL(1, nand_three(0,1,1));
  TEST_ASSERT_EQUAL(1, nand_three(1,0,0));
  TEST_ASSERT_EQUAL(1, nand_three(1,0,1));
  TEST_ASSERT_EQUAL(1, nand_three(1,1,0));
  TEST_ASSERT_EQUAL(0, nand_three(1,1,1));
}

void test_nor()
{

  TEST_ASSERT_EQUAL(1, nor_two(0,0));
  TEST_ASSERT_EQUAL(0, nor_two(0,1));
  TEST_ASSERT_EQUAL(0, nor_two(1,0));
  TEST_ASSERT_EQUAL(0, nor_two(1,1));

  TEST_ASSERT_EQUAL(1, nor_three(0,0,0));
  TEST_ASSERT_EQUAL(0, nor_three(0,0,1));
  TEST_ASSERT_EQUAL(0, nor_three(0,1,0));
  TEST_ASSERT_EQUAL(0, nor_three(0,1,1));
  TEST_ASSERT_EQUAL(0, nor_three(1,0,0));
  TEST_ASSERT_EQUAL(0, nor_three(1,0,1));
  TEST_ASSERT_EQUAL(0, nor_three(1,1,0));
  TEST_ASSERT_EQUAL(0, nor_three(1,1,1));
}
void test_xor()
{


  TEST_ASSERT_EQUAL(0, xor_two(0,0));
  TEST_ASSERT_EQUAL(1, xor_two(0,1));
  TEST_ASSERT_EQUAL(1, xor_two(1,0));
  TEST_ASSERT_EQUAL(0, xor_two(1,1));

  TEST_ASSERT_EQUAL(0, xor_three(0,0,0));
  TEST_ASSERT_EQUAL(1, xor_three(0,0,1));
  TEST_ASSERT_EQUAL(1, xor_three(0,1,0));
  TEST_ASSERT_EQUAL(0, xor_three(0,1,1));
  TEST_ASSERT_EQUAL(1, xor_three(1,0,0));
  TEST_ASSERT_EQUAL(0, xor_three(1,0,1));
  TEST_ASSERT_EQUAL(0, xor_three(1,1,0));
  TEST_ASSERT_EQUAL(1, xor_three(1,1,1));
}
void test_xnor()
{


  TEST_ASSERT_EQUAL(1, xnor(0,0));
  TEST_ASSERT_EQUAL(0, xnor(0,1));
  TEST_ASSERT_EQUAL(0, xnor(1,0));
  TEST_ASSERT_EQUAL(1, xnor(1,1));
}
void test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_not);
  RUN_TEST(test_and);
  RUN_TEST(test_or);
  RUN_TEST(test_nand);
  RUN_TEST(test_nor);
  RUN_TEST(test_xor);
  RUN_TEST(test_xnor);

  /* Close the Unity Test Framework */
  UNITY_END();
}
