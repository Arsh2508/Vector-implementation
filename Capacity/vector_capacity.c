#include <stdio.h>
#include <stdlib.h>
#include "../vector.h"

size_t vector_capacity(const Vector* v)
{
	return v->capacity;
}
