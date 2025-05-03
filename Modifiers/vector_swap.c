#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_swap(Vector* v1, Vector* v2){
	if(v1->data == NULL || v2->data == NULL){
		printf("Failed swapping\n");
		return;
	}

	size_t temp = v1->size;
	v1->size = v2->size;
	v2->size = temp;
	
	temp = v1->capacity;
	v1->capacity = v2->capacity;
	v2->capacity = temp;
	
	int * t = v1->data;
	v1->data = v2->data;
	v2->data = t;
}
