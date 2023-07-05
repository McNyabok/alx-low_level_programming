#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes c to stdo
 * @c: The char to output
 * Return: 1 (Success)
 * returns -1 upon error, and appropritely set the error
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
