#include <stdio.h>

/**
 * main - It is the entry point of a program.
 *
 * Return: The return statement is used to end the execution of a function.
 */

int main(void)
{
        int d,p;

        for (d = 0; d < 9; d++)
        {
                for (p = d + 1; p <= 9; p++)
                {
                        if (p != d)
                {
                        putchar(d);
                        putchar(p);
                if (d == 8 && p == 9)
                        continue;
                putchar(',');
                putchar(' ');
                }
                }
        }
        putchar('\n');
        return (0);

}
