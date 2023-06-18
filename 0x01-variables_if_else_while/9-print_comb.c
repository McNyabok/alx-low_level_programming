#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:prints all possiblle combinations of
 * single-digit numbers using 'putchar' function
 * separated by a comma and space
 * Return: 0 (Success)
 */

int main(void)

{
	int Num;

	for (Num = '0'; Num <= '9'; Num++)
	{
		putchar(Num);

		if (Num != 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');

	return (0);

}
