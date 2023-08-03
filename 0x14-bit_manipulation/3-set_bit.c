#include "main.h"

/**
 * set_bit - sets bit value to 1 at a particulr index
 * @n: pointer to the number to change
 * @index: position of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
