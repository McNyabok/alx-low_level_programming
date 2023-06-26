#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @str: string for which to get length
 *
 * Return: string length
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
	len++;
	return (len);
}
