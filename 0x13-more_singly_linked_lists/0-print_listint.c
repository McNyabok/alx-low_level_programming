#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: linked lis to print
 *
 * Return: the nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t listElements = 0;

	while (h)
	{
		printf("%d\n", h->n);
		listElements++;
		h = h->next;
	}

	return (listElements);
}
