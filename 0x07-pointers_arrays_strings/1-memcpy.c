#include "main.h"
/**
*_memcpy - a function that copies memory area
*@dest: memor to store
*@src: memory to copy
*@n: no of bytes
*
*Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int;

	for (i = 0: i < n; i++)
		dest[i] = src[i];
	return (dest);
}
