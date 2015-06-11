/**
 * functions.cpp
 * 
 *   Created On: June 8, 2015
 *       Author: Matthew Mussomele   
 */

#include <iostream>
#include <iomanip>

/**
 * Question 1: Given two integers, print them on a single line, with no spaces,
 *             followed by a newline. 
 *             If the second number is negative, make it positive when joining.
 *             Example:
 *                 print_joined(500, 0)     prints 5000
 *                 print_joined(1283, 9123) prints 12839123
 *                 print_joined(-3, 15)     prints -315
 *                 print_joined(3, -15)     prints 315
 * 
 * @brief prints two integers concatenated as strings
 * 
 * @param a The first integer to print
 * @param b The second integer to print
 */
void print_joined(int32_t a, int32_t b) {
    /* YOUR CODE HERE */
}
 
/**
 * Question 2: Find the absolute value of the sum of two numbers.
 *      Bonus: None
 * 
 * @brief returns the absolute value of (a + b)
 * 
 * @param a the first integer to sum
 * @param b the second integer to sum
 * 
 * @return the absolute value of the sum of the two integers
 */
int32_t absolute_sum(int32_t a, int32_t b) {
    /* YOUR CODE HERE */
    return 0;
}

int32_t min_of_three(int32_t a, int32_t b, int32_t c); //forward declaration for min_of_three

/**
 * Question 3: Find the largest product of any two numbers from three given positive integers,
 *             using only a single expression.
 *      Bonus: None
 * @brief returns the largest product that can be made with any of the two integers
 * @details finds the largest product that can be made with any of the two integers,
 *          using only a single expression.
 *          HINT: The helper function below, min_of_three, might come in handy
 * 
 * @param a the first integer
 * @param b the second integer
 * @param c the third integer
 * @return the largest product of any two of the given integers.
 */
int32_t largest_product(int32_t a, int32_t b, int32_t c) {
    /* YOUR CODE HERE */
    return 0;
}

/**
 * @brief Finds the smallest of three integers
 * 
 * @param a the first integer
 * @param b the second integer
 * @param c the third integer
 * @return the minimum of a, b and c
 */
int32_t min_of_three(int32_t a, int32_t b, int32_t c) {
    return std::min(a, std::min(b, c));
}

/**
 * Question 4: If n is odd, return n!. If n is even, return the nth fibonacci number. If n is negative, return 1
 *             
 *             Factorial:
 *                 n! is defined as n * (n - 1) * ... * 1   if n >= 1
 *                                  1                       if n < 1
 *             Fibonacci:
 *                 Let fib(n) calculate the nth fibonacci number. The fibonacci function
 *                 is undefined for inputs less than 0.
 *                 fib(n) = n                       if n < 2
 *                 fib(n) = fib(n-1) + fib(n-2)     if n >= 2
 *      Bonus: None
 * 
 * @brief Calculates either n! or the nth fibonacci number
 * 
 * @param n the number to run calculations on
 * @return either n! or fibonacci(n)
 */
int32_t fact_or_fib(int32_t n){
    /* YOUR CODE HERE */
    return 0;
}
