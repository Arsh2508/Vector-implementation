#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_erase(Vector* v, size_t pos){
	if(pos >= v->size){
		vector_pop_back(v);
	}
	else
	{
		vector_reserve(v, v->size);
		
		for(int i = pos; i < v->size - 1; ++i){
			v->data[i] = v->data[i + 1];
		}
		
		--v->size;
	}
}

