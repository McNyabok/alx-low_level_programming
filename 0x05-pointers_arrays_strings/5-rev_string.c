#include "main.h"
/**
 * rev_string -  reverses a string
 *
 * @s: string to reverse
 *
 * return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int index = 0;
	char c;

		while (s[index++])
			length++;
		for (index = length - 1; index >= length / 2; index--)
		{
			c = s[index];
			s[index] = s[length - index - 1];
			s[length - index - 1] = c;
		}
}
