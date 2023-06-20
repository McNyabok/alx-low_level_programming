#include "main.h"

/**
 * print alphabets_x10 - prints 10 times the lowercase alphabets,
 * followed by a new line
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	char alphs; 
	int i = 0;

	while (i < 10){

		for (alphs = 'a'; alphs <= 'z'; alphs++){
			_putchar(alphs);
		}
		_putchar('\n');
		i++
	}
}
