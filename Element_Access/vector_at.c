#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

int* vector_at(Vector* v, size_t index){
	if(index > v->size || v->data == NULL){
		return NULL;
	}
	
	return v->data + index; 
}
