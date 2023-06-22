#include "main.h"

/**_isupper - checks for uppercase character.
 *
 * @c: the character to be checked
 *
 * Return: returns 1 for uppercase, else 0
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
