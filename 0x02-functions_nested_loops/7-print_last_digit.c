#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @d: the number from where to print last digit
 * Return: last digit
 */

int print_last_digit(int d)
{
	int last_d;

	last_d = d % 10;
	if (last_d < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_s + '0');
	return (last_d);
}
