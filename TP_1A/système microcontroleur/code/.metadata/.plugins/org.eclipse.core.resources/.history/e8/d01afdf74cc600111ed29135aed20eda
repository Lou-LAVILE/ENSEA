/*
 * array.c
 *
 *  Created on: 30 sept. 2026
 *      Author: redwo
 */
#include "main.h"

void init_rand_tab(int *array){
	for(int i=0; i<ARRAY_SIZE; i++){
		array[i] = (rand()%ARRAY_SIZE);
	}
}

void print_array(int* array){
	printf("[ ");
	for(int i=0; i<ARRAY_SIZE; i++){
		printf("%d ", array[i]);
	}
	printf("]\r\n");
}

void tri_insertion(int *array){
	for(int i=1; i<ARRAY_SIZE; i++){
		int x = array[i];

		int j = i;
		while((j>0)&&(array[j-1]>x)){
			array[j] = array[j-1];
			j--;
		}
		array[j] = x;
	}
}
