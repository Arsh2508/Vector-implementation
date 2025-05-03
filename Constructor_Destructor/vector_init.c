#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_init(Vector * this){
	this->size = 0;
	this->capacity = 0;
	this->data = NULL;	
}
