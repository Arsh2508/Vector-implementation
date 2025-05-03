#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_reserve(Vector* v, size_t new_cap){
	if(new_cap > v->capacity){
		v->data = realloc(v->data, new_cap * sizeof(int));
		if(v->data){
			v->capacity = new_cap;
		}
	}	
}
