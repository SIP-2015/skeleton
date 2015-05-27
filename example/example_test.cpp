/*
 * example_test.cpp
 *
 *  This is an example Google Test file to show you the
 *  basic structure. You should make your own test files
 *  and delete this one after you've finished using it as
 *  a template.
 *
 *  Make sure to name your test file something appropriate,
 *  and change the name of the Test class to match it.
 *
 *  Also remember that the first parameter to each TEST_F
 *  macro should be the name of the Test class.
 *
 *  Created on: May 7, 2015
 *      Author: Matthew Mussomele
 */

#include "gtest/gtest.h"
#include "example.h" //replace this line with your own header file
#include <math.h> //delete this line if you don't need it

namespace {

    /*
     * Fill in the constructor, destructor if needed,
     * along with the SetUp and TearDown methods.
     *
     * If you don't know what these are, leave them
     * alone because you probably don't need them.
     *
     * SetUp and TearDown are useful if you will be using
     * non-local variables in your tests.
     */
    class example_test : public ::testing::Test {
    protected:
        example_test() { }
        virtual ~example_test() { }
        virtual void SetUp() { } //called before every Test
        virtual void TearDown() { } //called after every Test
    };

    ///////////////////////
    //// Example Tests ////
    ///////////////////////

    /*
     * Note: These tests work with the example.cpp
     * and example.h files.
     *
     * When creating your own tests, the general
     * format is as follows:
     *
     * TEST_F(test_class_name, test_name) { //test name is arbitrary
     *    //Pre-test calculations/setup
     *    //ASSERT and EXPECT statements
     *    //post-test wrap up
     * }
     *
     * Here is a list of assertions and comparisons, for
     * your reference:
     *
     *   -ASSERT_TRUE
     *   -ASSERT_FALSE
     *   -ASSERT_EQ (equal)
     *   -ASSERT_NE (not equal)
     *   -ASSERT_LT (less than)
     *   -ASSERT_LE (less than or equal to)
     *   -ASSERT_GT (greater than)
     *   -ASSERT_GE (greater than or equal to)
     *   -ASSERT_STREQ (string equals)
     *   -ASSERT_STRNE (string not equals)
     *   -ASSERT_STRCASEEQ (string equals, ignore case)
     *   -ASSERT_STRCASENE (string not equals, ignore case)
     *
     * Every ASSERT_* statement has a corresponding
     * EXPECT_* partner.
     * ASSERT statements will stop execution of the
     * rest of the tests if they fail. This is useful
     * when testing core components that many things
     * rely on, since if they don't work, nothing else
     * will work anyway.
     * EXPECT statements will simply print a warning if
     * they fail. This is useful when you are testing
     * independent components that aren't relied on by
     * many other parts of your program.
     *
     * To have any ASSERT or EQUALS statement print a
     * custom error message upon failure, use the <<
     * operator.
     * Example (from code.google.com/p/googletest/wiki/Primer):
     *
     *   ASSERT_EQ(x.size(), y.size()) << "Vectors x and y are of unequal length";
     *
     *   for (int i = 0; i < x.size(); ++i) {
     *       EXPECT_EQ(x[i], y[i]) << "Vectors x and y differ at index " << i;
     *   }
     */

    TEST_F(example_test, add) {
        ASSERT_EQ(7, add(3, 4));
        ASSERT_EQ(0, add(-3, 3));
    }

    TEST_F(example_test, sumTo) {
        ASSERT_EQ(6, sumTo(3));
        ASSERT_EQ(10, sumTo(4));
        ASSERT_EQ(5050, sumTo(100));
    }

    TEST_F(example_test, isPrime) {
        ASSERT_TRUE(isPrime(2));
        ASSERT_TRUE(isPrime(17));
        ASSERT_FALSE(isPrime(81));
    }

    TEST_F(example_test, fib) {
        ASSERT_EQ(1, fib(2));
        ASSERT_EQ(0, fib(0));
        ASSERT_EQ(1, fib(1));
        ASSERT_EQ(6765, fib(20));
        ASSERT_EQ(102334155, fib(40));
    }

    TEST_F(example_test, mySqrt) {
        ASSERT_EQ(2, round(mySqrt(4)));
        ASSERT_EQ(4, round(mySqrt(16)));
        ASSERT_EQ(8, round(mySqrt(64)));
        ASSERT_EQ(9, round(mySqrt(81)));
    }

}

int main(int argc, char ** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

