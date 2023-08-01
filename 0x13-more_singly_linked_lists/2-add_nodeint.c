#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: pointer to node one in the list
 * @n: data to insert in the  new node
 *
 * Return: pointer to the new node, else NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
