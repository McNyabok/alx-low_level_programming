#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 * Description:assigns a random number to the variable 'n'
 * each time it is executed
 * prints the last digit of the number stored in the variable 'n'
 *
 * Return: 0 Always (SUCCESS)
 */

int main(void)
{
        int n, lst_dgt;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (lst_dgt > 5)
        {
        printf("Last digit of %d is %d and is greater than 5\n", n, lst_dgt);
        }
        else if (n == 0)
        {
        printf("Last digit of %d is %d and is 0\n", n, lst_dgt);
        }
        else if (n < 6 && n != 0)
        {
        printf("The last digit of %d is %d and is less than 6 and not 0\n", n, lst_dgt);
        }
        return (0);
}
