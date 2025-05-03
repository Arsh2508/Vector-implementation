#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_insert(Vector* v, size_t pos, int value){
	if(pos >= v->size){
		vector_push_back(v, value);
	}
	else
	{
		++v->size;
		vector_reserve(v, v->size);
		
		for(int i = 0; i < v->size - pos; ++i){
			v->data[v->size - i - 1] = v->data[v->size - i - 2];
		}
			
		v->data[pos] = value;

	}
}

