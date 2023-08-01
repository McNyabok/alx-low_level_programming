#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to first element in the list
 *
 * Return: the elements data deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempPtr;
	int node_dataValue;

	if (!head || !*head)
		return (0);

	node_dataValue = (*head)->n;
	tempPtr = (*head)->next;
	free(*head);
	*head = tempPtr;

	return (node_dataValue);
}
