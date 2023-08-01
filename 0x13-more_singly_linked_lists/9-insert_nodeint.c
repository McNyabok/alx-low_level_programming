#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to 1st node
 * @idx: index at which to insert the new node
 * @n: data to add to the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *newNodeptr;
	listint_t *tempPtr = *head;

	newNodeptr = malloc(sizeof(listint_t));
	if (!newNodeptr || !head)
		return (NULL);

	newNodeptr->n = n;
	newNodeptr->next = NULL;

	if (idx == 0)
	{
		newNodeptr->next = *head;
		*head = newNodeptr;
		return (newNodeptr);
	}

	for (count = 0; tempPtr && count < idx; count++)
	{
		if (count == idx - 1)
		{
			newNodeptr->next = tempPtr->next;
			tempPtr->next = newNodeptr;
			return (newNodeptr);
		}
		else
			tempPtr = tempPtr->next;
	}

	return (NULL);
}
