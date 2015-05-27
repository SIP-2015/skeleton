/*
 * example.cpp
 *
 *  Created on: May 7, 2015
 *      Author: Matthew Mussomele
 */

#include <math.h>
#include <cstdint>

/**
 * Adds two integers
 * @param a the first int to add
 * @param b the second int to add
 * @return the sum of a and b
 */
int32_t add(int32_t a, int32_t b) {
    return a + b;
}

/**
 * Calculates the sum of all numbers from 1 to n.
 * Note: There is a closed form solution to this.
 *       The sum all numbers 1 to n is equal to n(n+1)/2,
 *       but this function is just an example of a for loop.
 * @param n the integer to sum to
 * @return to sum from one to n
 */
int32_t sumTo(int32_t n) {
    int32_t sum = 0;
    for (int32_t i = 1; i <= n; i += 1) {
        sum += i;
    }
    return sum;
}

/**
 * Checks if a given integer is a prime number.
 * This is not the most efficient way (see Sieve of Eratosthenes)
 * but it is a simple one.
 * @param n the integer to check
 * @return true if n is prime, false otherwise.
 */
bool isPrime(int32_t n) {
    if (n == 2)     { return true; }
    if (!(n % 2))   { return false; }
    int32_t l_max_check = (int32_t) (sqrt(n) + 1);
    for (int32_t i = 3; i < l_max_check; i += 2) {
        if (!(n % i)) { return false; }
    }
    return true;
}

/**
 * Calculates the nth fibonacci number.
 * This is a common example of tree recursion.
 * @param n the fibonacci number to find
 * @return the nth fibonacci number
 */
int32_t fib(int32_t n) {
    if (n <= 1) { return n; }
    else        { return fib(n-1) + fib(n-2); }
}

/**
 * Approximates the square root of a given integer
 * to within about .001. Change the value of
 * allowed_error to increase or decrease
 * this accuracy.
 * @param n the number to take the square root of
 * @return the approximate square root of n
 */
double mySqrt(int32_t n) {
    double allowed_error = 1e-6;
    double guess = (double) (n >> (int32_t) (log(n)/2)) + 1;
    while (fabs(pow(guess, 2) - n) > allowed_error) {
        guess = (guess + n / guess) / 2.0;
    }
    return guess;
}
