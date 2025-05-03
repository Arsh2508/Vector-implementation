#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_push_back(Vector* v, int value){
	vector_reserve(v, v->size + 1);
	if(v->data){
		++v->size;
		v->data[v->size - 1] = value;
	}
}
