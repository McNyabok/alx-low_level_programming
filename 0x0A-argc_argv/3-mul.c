#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main (int argc, char *argv[])
{
	int Num1 = 0;
	int Num2 = 0;

	if (argc == 3)
	{
		Num1 = atoi(argv[1]);
		Num2 = atoi(argv[2]);
		printf("%d\n", Num1 * Num2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	
	return (0);
}
