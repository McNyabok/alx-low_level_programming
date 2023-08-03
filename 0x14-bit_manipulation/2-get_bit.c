#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number to lookf for
 * @index: the point to return the bit value
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valueofbit;

	if (index > 63)
		return (-1);

	valueofbit = (n >> index) & 1;

	return (valueofbit);
}
