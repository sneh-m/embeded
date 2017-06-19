/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stat.h 
 * @brief header file for statistic program
 *
 * This file contains various function prototypes used in statistic program
 *
 * @author sneh mishra
 * @date 17/06/2017
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief sort the given array in decreasing order
 *
 * This function uses insertion sort to sort the ginven array in decreasing order 
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return This function return nothing
 */
void sort_array( char* a, int n);

/**
 * @brief returns minimum element in a reverse sorted array
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return returns smallest integer
 */
char find_minimum( char* a, int n);

/**
 * @brief returns maximum element in a reverse sorted array
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return returns biggest integer
 */
char find_maximum( char* a, int n);

/**
 * @brief return mean of given array
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return integer representing mean of given array
 */
char find_mean( char* a, int n);

/**
 * @brief return meadian of given array
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return integer representing median of given array
 */
char find_median( char* a, int n);


/**
 * @brief print thr given array
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return This function return nothing
 */
void print_array( char* a, int n);

/**
 * @brief print minimum, maximum, mean, median of the given array
 *
 * @param a Pointer to charecter array 
 * @param n 32-bit integer for size of the array
 *
 * @return This function return nothing
 */
void print_statistics( char* a, int n);

#endif /* __STATS_H__ */
