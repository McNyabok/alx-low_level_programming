#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the of a listint_t list
 * @head: pointer to first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to new node, else NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempPtr = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tempPtr->next)
		tempPtr = tempPtr->next;

	tempPtr->next = newNode;

	return (newNode);
}
