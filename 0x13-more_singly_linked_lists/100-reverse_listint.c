#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to 1st node in the list
 *
 * Return: pointer to 1st node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNodeptr = NULL;
	listint_t *holdertonextPtr_currNode = NULL;

	while (*head)
	{
		holdertonextPtr_currNode = (*head)->next;
		(*head)->next = previousNodeptr;
		previousNodeptr = *head;
		*head = holdertonextPtr_currNode;
	}

	*head = previousNodeptr;

	return (*head);
}
