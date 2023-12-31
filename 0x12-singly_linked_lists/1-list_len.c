#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a list_t list
 * @h: pointer to the list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
