#include "main.h"

/**
 * print_alphabets - prints the alphabet, in lowercase, followed by a new line
 * Return: void
 */

void print_alphabet(void)

{
	char alphs;

	for  (alphs = 'a'; alphs <= 'z'; alphs++)
	{
		_putchar(alphs);
	}
		_putchar('\n');
}
