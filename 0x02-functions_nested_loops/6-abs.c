#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * Return: Absolute value or zero
 */

int _abs(int d)

{
	int d;

	if (d < 0)
	{
		int abs;
		abs = d * -1;
		return (abs);
	}
	return (d);
}
