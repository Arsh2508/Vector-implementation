#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_init_size(Vector* this, size_t n){
	this->size = n;
	this->capacity = n;
	this->data = (int*)malloc(this->capacity * sizeof(int));
}

