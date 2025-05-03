#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

void vector_pop_back(Vector* v){
	--v->size;
}
