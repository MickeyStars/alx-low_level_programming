#include <stdio.h>

/**
 * main - It is the entry point of a program.
 *
 * Return: The return statement is used to end the execution of a function.
 */

int main(void)
{
	int m, n, o;

	for (m = '0'; m < '9'; m++)
	{
		for (n = m + 1; n <= '9'; n++)
		{
			for (o = n + 1; o <= '9'; o++)
			{
				if ((n  != m) != o)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m == '7' && n == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
