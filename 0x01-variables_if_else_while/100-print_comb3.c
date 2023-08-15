#include <stdio.h>

/**
 * main - It is the entry point of a program.
 *
 * Return: The return statement is used to end the execution of a function.
 */

int main(void)
{
	int i, p;

	for (i = '0'; i < '9'; i++)
	{
		for (p = i + 1; p <= '9'; p++)
		{
			if (p != i)
			{
				putchar(i);
				putchar(p);
				if (i == '8' && p == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);











}
