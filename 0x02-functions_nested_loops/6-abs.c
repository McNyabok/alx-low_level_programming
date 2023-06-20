#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @d: parameter for absolute determination
 * Return: Absolute value or zero
 */

int _abs(int d)

{

	if (d < 0)
	{
		int abs;

		abs = d * -1;
		return (abs);
	}
	return (d);
}
