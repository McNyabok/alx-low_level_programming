#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index in a list
 * @head: pointer to 1st element in the list
 * @index: index at which to delete the node
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *traverseList = *head;
	listint_t *holdNode_del = NULL;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(traverseList);
		return (1);
	}

	while (count < index - 1)
	{
		if (!traverseList || !(traverseList->next))
			return (-1);
		traverseList = traverseList->next;
		count++;
	}


	holdNode_del = traverseList->next;
	traverseList->next = holdNode_del->next;
	free(holdNode_del);

	return (1);
}
