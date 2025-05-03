#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_init_fill(Vector* this, size_t n, int value){
	this->size = n;
	this->capacity = n;
	this->data = malloc(this->capacity * sizeof(int));
	
	if(this->data){	
		for(int i = 0; i < this->size; ++i){
			this->data[i] = value;
		}
	}	
}
