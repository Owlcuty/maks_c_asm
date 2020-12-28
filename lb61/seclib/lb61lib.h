#include <stdio.h>
#include <stdlib.h>

void *AR_get(void ** array, size_t size, size_t ind);
size_t AR_push_back(void **array, size_t *size, size_t capacity, void* val);
size_t AR_insert(void **array, size_t *size, size_t capacity,
				 size_t dst, void *val);
size_t AR_del(void **array, size_t *size, size_t capacity, size_t ind);
