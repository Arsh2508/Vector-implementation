#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_copy(Vector* this, const Vector* other){
	this->size = other->size;
	this->capacity = other->capacity;
	
	if(other->data){
		this->data = (int *)malloc(this->capacity * sizeof(int));
		if(this->data){
			for(int i = 0; i < this->size; ++i){
				this->data[i] = other->data[i];
			}
		}
	}
}
