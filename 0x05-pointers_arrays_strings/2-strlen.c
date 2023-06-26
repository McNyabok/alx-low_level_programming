#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string for which to get length
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	len++;
	return (len);
}
