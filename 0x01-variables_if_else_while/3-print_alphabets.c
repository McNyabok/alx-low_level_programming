#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:prints the alphabet in lowercase, and then in uppercase
 * Return: 0 (Success)
 */

int main(void)
{
	char lower_alph;
	char upper_alph;

	for (lower_alph = 'a' ; lower_alph <= 'z' ; lower_alph++)
	putchar(lower_alph);

	for (upper_alph = 'A' ; upper_alph <= 'Z' ; upper_alph++)
	putchar(upper_alph);

	putchar('\n');

	return (0);
}
