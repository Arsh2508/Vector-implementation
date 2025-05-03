#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_push_back(Vector* v, int value){
	++v->size;
	vector_reserve(v, v->size);
	if(v->data){
		v->data[v->size - 1] = value;
	}
}
