#include <stdio.h>

/**
 * main - It is the entry point of a program.
 *
 * Return: The return statement is used to end the execution of a function.
 */

int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
