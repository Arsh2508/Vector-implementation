#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

Vector* vector_assign(Vector* dest, const Vector* src){
	if(dest->data){
		free(dest->data);
	}
	
	dest->size = src->size;
	dest->capacity = src->capacity;
	
	if(src->data){
		dest->data = (int*)malloc(dest->capacity * sizeof(int));
	
		if(dest->data == NULL){
			vector_destroy(dest);
			return NULL;
		}

		for(int i = 0; i < dest->size; ++i){
			dest->data[i] = src->data[i];
		}	
	}
	return dest;
}

