#include "lb61lib.h"

typedef struct
{
	void * arr;
	size_t size;
	size_t capacity;
} voidarr_t;

void va_init(voidarr_t *arr, void* array, size_t size)
{
	arr->arr = array;
	arr->size = size;
	arr->capacity = size;
}

int main()
{
	size_t size = 10;
	void **array = calloc(size, sizeof(void*));

	voidarr_t *arr = (voidarr_t*)calloc(1, sizeof(voidarr_t));
	va_init(arr, array, size);

	void *getted = AR_get(arr->arr, arr->size, 2);
		size_t tmp = AR_push_back(arr->arr, &arr->size, arr->capacity, getted);
		if (tmp == 0)
	{
		return -1;
	}
	arr->capacity = tmp;
	
	tmp = AR_del(arr->arr, &arr->size, arr->capacity, 3);
		if (tmp == 0)
	{
		return -1;
	}
	arr->capacity = tmp;

	tmp = AR_insert(arr->arr, &arr->size, arr->capacity, 2, getted);
	if (tmp == 0)
	{
		return -1;
	}
	arr->capacity = tmp;

	free(arr);
	
	return 0;
}
