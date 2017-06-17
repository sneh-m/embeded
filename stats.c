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
 * @file stat.c 
 * @brief Assignment 1 in embebed systems
 *
 * This C programe analyse given data and prints statistical report
 *
 * @author sneh kumar mishra
 * @date 17/06/2017
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void sort_array(char *a,int n)
{ 
  char item;
  int k;
  for(int i = 1; i < SIZE; i++ ) {
      item = a[i];
      k = i-1;
      while(a[k]<item && k>=0)
	{
          a[k+1] = a[k];
          k--;
        }
      a[k+1] = item;		
    }
}

char find_minimum(char* a,int n){
	return a[SIZE-1];
}

char find_maximum(char* a,int n){
	return a[0];
}

char find_mean(char* a,int n){
	int m = 0;
	for(int i = 0; i<n; i++)
		m += a[i];
	return m/n;
}

char find_median(char* a,int n){
	return ((int)a[19]+a[20])/2;
}

void print_array(char *a,int n){
	for(int i = 0; i<n; i++){
		printf("%d ",a[i]);
	}
}

void print_statistics(char *a,int n) {
	printf("maximum :: %d\n",find_maximum(a,n));
	printf("minimun :: %d\n",find_minimum(a,n));
	printf("   mean :: %d\n",find_mean(a,n));
	printf(" median :: %d\n",find_median(a,n));
}

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  /* Statistics and Printing Functions Go Here */
  sort_array(test,SIZE);
  print_statistics(test,SIZE);
  print_array(test,SIZE);
}

/* Add other Implementation File Code Here */
