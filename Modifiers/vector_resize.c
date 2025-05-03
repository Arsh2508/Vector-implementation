#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_resize(Vector* v, size_t count){
	vector_reserve(v, count);
	if(v->data){
		v->size = count;
	}
}
