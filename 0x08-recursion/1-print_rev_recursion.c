#include "main.h"
/**
 * _puts_recursion - prints reverse string
 * @s: reverse string
 * return: void
 */

void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
	 return;
	}
	
	s++;
        _puts_rev_recursion(s);
	s--;
	_putchar(*s);
}
