#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 * Description:prints all possiblle combinations of
 * two-digit numbers using 'putchar' function
 * separated by ',' and ' '
 * Return: 0 (Success)
 */

int main(void)
        
{       
        int Num1;
        int Num2;
        
        for (Num1 = '0'; Num1 <= '9'; Num1++)
        {
        for (Num2 = '0'; Num2 <= '9'; Num2++)
        {
        if (Num1 != Num2)
        {      
        putchar(Num1);
        putchar(Num2);
        
        if (Num1 == '8' && Num2 == '9')
        continue;
                
        putchar(',');
        putchar(' ');
        }
        }
        }
        putchar('\n');
                
        return (0);
        
} 
