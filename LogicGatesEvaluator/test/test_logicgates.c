/*#include "unity.h"
#include "logic_gates.h"
void setUp(){}
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

  UNITY_BEGIN();

  RUN_TEST(test_not);
  RUN_TEST(test_and);
  RUN_TEST(test_or);
  RUN_TEST(test_nand);
  RUN_TEST(test_nor);
  RUN_TEST(test_xor);
  RUN_TEST(test_xnor);

  
  UNITY_END();
}

*/




#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <logic_gates.h>
#define PROJECT_NAME    "LogicGatesEvaluator"

/* Prototypes for all the test functions */
void test_not(void);


/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "not", test_not);

            


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}
 void test_not(void)
{


  CU_ASSERT(0 == not(1));

  CU_ASSERT(1 == not(0));

}

