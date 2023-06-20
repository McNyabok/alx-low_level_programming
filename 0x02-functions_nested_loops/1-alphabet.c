#include "main.h"

/**
 * print_alphabets - prints the alphabet, in lowercase, followed by a new line
 *
 * Description: This fx prints the English alphabet in lowercase,
 * to the standard output stream.
 *
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
