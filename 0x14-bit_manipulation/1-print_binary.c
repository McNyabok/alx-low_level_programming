#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int j, binCounter = 0;
	unsigned long int curShifted_value;

	for (j = 63; j >= 0; j--)
	{
		curShifted_value = n >> j;

		if (curShifted_value & 1)
		{
			_putchar('1');
			binCounter++;
		}
		else if (binCounter)
			_putchar('0');
	}
	if (!binCounter)
		_putchar('0');
}
