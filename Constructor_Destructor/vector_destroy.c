#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_destroy(Vector* this){
	this->size = 0;
	this->capacity = 0;		

	if(this->data){
		free(this->data);
		this->data = NULL;
	}
}
	
