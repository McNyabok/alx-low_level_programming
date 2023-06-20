#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: character being checked
 * Return: 1 if c is letter, otherwise 0
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 122)
	{
	return (1);
	}
	return (0);
}
