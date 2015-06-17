/*
 * sorting_main.cpp
 *
 *  Created on: June 17, 2015
 *      Author: Matthew Mussomele
 */
 
#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include "sorting.h"

/**
 * @brief prints the contents of an integer array in human readable format
 * 
 * @param array the array to print
 * @param size the size of the array
 */
void print_array(int32_t array[], int32_t size) {
    printf("[ ");
    for (int32_t i = 0; i < size; i += 1) {
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int main(int argc, char ** argv) {
    int32_t array1[] = {2, 65, 34, 7, 1, 61, 4136, 1, 543, 613, 64, 4, 90, 936, 94, 2398};
    int32_t array2[] = {2, 65, 34, 7, 1, 61, 4136, 1, 543, 613, 64, 4, 90, 936, 94, 2398};
    int32_t array3[] = {2, 65, 34, 7, 1, 61, 4136, 1, 543, 613, 64, 4, 90, 936, 94, 2398};
    int32_t array4[] = {2, 65, 34, 7, 1, 61, 4136, 1, 543, 613, 64, 4, 90, 936, 94, 2398};
    int32_t array5[] = {2, 65, 34, 7, 1, 61, 4136, 1, 543, 613, 64, 4, 90, 936, 94, 2398};
    int32_t size = 16;

    printf("The array before sorting: ");
    print_array(array1, size);

    bubble_sort(array1, size);
    printf("The array sorted with bubble sort: ");
    print_array(array1, size);

    selection_sort(array2, size);
    printf("The array sorted with selection sort: ");
    print_array(array2, size);

    insertion_sort(array3, size);
    printf("The array sorted with insertion sort: ");
    print_array(array3, size);

    mergesort(array4, 0, size - 1);
    printf("The array sorted with mergesort: ");
    print_array(array4, size);

    quicksort(array5, 0, size - 1);
    printf("The array sorted with quicksort: ");
    print_array(array5, size);

    printf("Sorting bigger arrays for runtime comparision...\n");
    std::clock_t start;

    printf("Sort\t\t1024\t2048\t4096\t8192\t16384\t32768\t65536\t131072\t262144\n");

    printf("Bubble:\t\t");
    for (int32_t i = 1024; i <= 262144; i *= 2) {
        int32_t * test_array = get_random_array_of_size(i);
        start = std::clock();
        bubble_sort(test_array, i);
        printf("%.3f\t", (std::clock() - start) / (double) CLOCKS_PER_SEC);
    }
    printf("\n");

    printf("Selection:\t");
    for (int32_t i = 1024; i <= 262144; i *= 2) {
        int32_t * test_array = get_random_array_of_size(i);
        start = std::clock();
        selection_sort(test_array, i);
        printf("%.3f\t", (std::clock() - start) / (double) CLOCKS_PER_SEC);
    }
    printf("\n");

    printf("Insertion:\t");
    for (int32_t i = 1024; i <= 262144; i *= 2) {
        int32_t * test_array = get_random_array_of_size(i);
        start = std::clock();
        insertion_sort(test_array, i);
        printf("%.3f\t", (std::clock() - start) / (double) CLOCKS_PER_SEC);
    }
    printf("\n");

    printf("Merge:\t\t");
    for (int32_t i = 1024; i <= 262144; i *= 2) {
       int32_t * test_array = get_random_array_of_size(i);
        start = std::clock();
        mergesort(test_array, 0, i - 1);
        printf("%.3f\t", (std::clock() - start) / (double) CLOCKS_PER_SEC);
    }
    printf("\n");

    printf("Quick:\t\t");
    for (int32_t i = 1024; i <= 262144; i *= 2) {
       int32_t * test_array = get_random_array_of_size(i);
        start = std::clock();
        quicksort(test_array, 0, i - 1);
        printf("%.3f\t", (std::clock() - start) / (double) CLOCKS_PER_SEC);
    }
    printf("\n");

}