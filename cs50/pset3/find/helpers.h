/**
 * helpers.h
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n);

/**
 * Sorts array of n values.
 */
void sort(int values[], int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool linear_search(int value, int values[], int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool binary_search(int value, int values[], int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool bin_search_core(int value, int values[], int n);
