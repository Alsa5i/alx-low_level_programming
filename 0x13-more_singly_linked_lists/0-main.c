#include "lists.h"
#include <stdlib.h>

/**
 * print_listint
 * @h: int val
 *
 * Return: return address
 */
size_t print_listint(const listint_t *h)
{
	size_t Pi = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		Pi++;
	}

	return (Pi);
}
