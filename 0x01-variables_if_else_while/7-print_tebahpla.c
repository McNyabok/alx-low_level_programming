#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:prints the alphabet in lowercase using 'putchar' function
 * in reverse order
 * Return: 0 (Success)
 */

int main(void)

{
	char low_caseAlphs;

	for (low_caseAlphs = 'z'; low_caseAlphs >= 'a'; low_caseAlphs--)
	putchar(low_caseAlphs);
	putchar('\n');
	return (0);
}
