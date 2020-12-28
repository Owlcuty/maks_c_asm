#include "lb61lib.h"

void *AR_get(void ** array, size_t size, size_t ind)
{
		if (ind >= size)
	{
		return NULL;
	}
	
	return array[ind];
}

size_t AR_push_back(void **array, size_t *size, size_t capacity, void* val)
{
		if (*size + 1 < capacity)
	{
			void **tmp = realloc(array, capacity * 2);
		if (tmp == NULL)
		{
			return 0;
		}

		array = tmp;
		capacity *= 2;
		}

		array[*size] = val;
	(*size)++;
	
	return capacity;
}

size_t AR_insert(void **array, size_t *size, size_t capacity,
				 size_t dst, void *val)
{
	if (dst >= *size)
	{
			return 0;
	}
	
	if (*size + 1 < capacity)
	{
			void **tmp = realloc(array, capacity * 2);
		if (tmp == NULL)
		{
			return 0;
		}

		array = tmp;
		capacity *= 2;
		}

	for (void **cur = array + *size; cur > array + dst; --cur)
	{
			*cur = *(cur - 1);
		}
		array[dst] = val;
	
	(*size)++;	

	return capacity;
}

size_t AR_del(void **array, size_t *size, size_t capacity, size_t ind)
{
	if (ind >= *size)
	{
		return 0;
	}
	
	if (*size - 1 > capacity / 3)
	{
			void **tmp = realloc(array, capacity / 2);
		if (tmp == NULL)
		{
			return 0;
		}
	
		array = tmp;
		capacity /= 2;
	}

	for (void **cur = array + ind; cur < array + *size - 1; ++cur)
	{
			*cur = *(cur + 1);
		}
	
	(*size)--;
	
	return capacity;

}
