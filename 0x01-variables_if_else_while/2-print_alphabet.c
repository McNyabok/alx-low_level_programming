#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:prints the alphabet in lowercase using 'putchar' function
 * Return: 0 (Success)
 */

int main(void)
{
	char alph_lower;

	for (alph_lower = 'a' ; alph_lower <= 'z' ; alph_lower++)
	putchar(alph_lower);
	putchar('\n');
	return (0);
}
