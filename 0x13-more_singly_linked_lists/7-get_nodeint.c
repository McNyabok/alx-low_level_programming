#include "lists.h"

/**
 * get_nodeint_at_index - retrieves a node at a given index in a list
 * @head: 1st node in the linked list
 * @index: index of the node to retrieve
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tempPtr = head;

	while (tempPtr && count < index)
	{
		tempPtr = tempPtr->next;
		count++;
	}

	return (tempPtr ? tempPtr : NULL);
}
