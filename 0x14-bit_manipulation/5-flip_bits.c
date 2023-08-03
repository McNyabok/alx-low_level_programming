#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip
 * to get from one number to another
 * @n: num 1
 * @m: num 2
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, binaryCounter = 0;
	unsigned long int curShiftedvalue;
	unsigned long int xOR = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curShiftedvalue = xOR >> j;
		if (curShiftedvalue & 1)
			binaryCounter++;
	}

	return (binaryCounter);
}
