#include "lists.h"

/**
 * listint_len - returns no of elements in a linked lists
 * @h: the  list to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t listElements = 0;

	while (h)
	{
		listElements++;
		h = h->next;
	}

	return (listElements);
}
