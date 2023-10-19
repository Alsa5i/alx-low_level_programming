#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: pointer.
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t LIS_LEN = 0;

	while (h)
	{
		LIS_LEN++;
		h = h->next;
	}
	return (LIS_LEN);
}
