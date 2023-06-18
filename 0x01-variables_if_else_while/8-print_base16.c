#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:prints lowercase hexadecimal numbers using 'putchar' function
 *
 * Return: 0 (Success)
 */

int main(void)

{
	int low_hexadecimalNums;

	for (low_hexadecimalNums = '0'; low_hexadecimalNums <= '9';
	low_hexadecimalNums++)
	putchar(low_hexadecimalNums);

	for (low_hexadecimalNums = 'a'; low_hexadecimalNums <= 'f';
	low_hexadecimalNums++)
	putchar(low_hexadecimalNums);

	putchar('\n');
	return (0);

}
