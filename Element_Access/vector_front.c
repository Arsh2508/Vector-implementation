#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

int* vector_front(Vector* v){
	if(v->size < 1 || v->data == NULL){
		return NULL;
	}	
	
	return v->data;
}
