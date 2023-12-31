#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - retuns 1 for prime number else 0
 * @n: the number
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks for for prime
 * @n: checked number
 * @i: iterations
 *
 * Return: 1 if prime, otherwise 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
