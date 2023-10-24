#include "lists.h"

/**
 * size_t print_listint - Write a function that prints all
 * the elements of a listint_t list.
 * @NEXT: next element.
 * @h: the value ,ust reterned.
 */
size_t print_listint(const listint_t *h)
{
	size_t NEXT = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		NEXT++;
	}
	return (NEXT);
}
