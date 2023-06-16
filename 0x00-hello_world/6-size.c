#include<stdio.h>
/**
 * main - Entry point
 * Description:A program that prints the size of various computer typers
 * Return:Always 0 (SUCCESS)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of the Char: %zu bytes(s)\n", sizeof(a));
printf("Size of the int: %zu bytes(s)\n", sizeof(b));
printf("Size of the long: %zu bytes(s)\n", sizeof(c));
printf("Size of the long long int: %zu bytes(s)\n",sizeof(d));
printf("Size of the float: %zu bytes(s)\n", sizeof(f));
return (0);
}
