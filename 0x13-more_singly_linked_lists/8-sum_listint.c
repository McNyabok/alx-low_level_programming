#include "lists.h"

/**
 * sum_listint - sums all the data (n) of a linked list
 * @head: 1st node in the list
 *
 * Return: the  sum
 */
int sum_listint(listint_t *head)
{
	int dataSum = 0;
	listint_t *tempPtr = head;

	while (tempPtr)
	{
		dataSum += tempPtr->n;
		tempPtr = tempPtr->next;
	}

	return (dataSum);
}
