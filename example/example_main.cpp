/*
 * example_main.cpp
 *
 *  Created on: May 8, 2015
 *      Author: Matthew Mussomele
 */

#include <stdio.h>
#include <cstdlib>
#include "example.h"

int main(int argc, char ** argv) {
    int32_t n;
    if (argc == 1) {
        printf("No args given, running with default n=10.\n");
        n = 10;
    } else {
        n = atoi(argv[1]);
    }
    printf("add(%d,%d)=%d\n", n, n, add(n, n));
    printf("sumTo(%d)=%d\n", n, sumTo(n));
    printf("isPrime(%d)=%s\n", n, isPrime(n) ? "true" : "false");
    printf("mySqrt(%d)=%.2f\n", n, mySqrt(n));
    printf("Exiting.\n");
    return 0;
}