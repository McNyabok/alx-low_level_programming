#include "main.h"

/**
 * _islower - checks for lower case character
 * @c: the charcter being checked
 * Return: 1 for lowere case, otherwise 0
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
