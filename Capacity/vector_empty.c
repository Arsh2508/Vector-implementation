#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

int vector_empty(const Vector* v){
	if(v->size == 0 || v->data == NULL){
		return 1;
	}
	else{
		return 0;
	}
}
