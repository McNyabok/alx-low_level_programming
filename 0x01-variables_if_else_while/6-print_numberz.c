#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Description:prints all single digit numbers of base 10 starting from 0
 * Return: 0 (Success)
 */

int main(void)
{
	int single_base10_dgtNums;

	for (single_base10_dgtNums = '0';
	single_base10_dgtNums <= '9'; single_base10_dgtNums++)
	putchar(single_base10_dgtNums);
	putchar('\n');
	return (0);
}
