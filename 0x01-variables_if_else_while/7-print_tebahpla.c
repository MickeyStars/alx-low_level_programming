#include <stdio.h>

/**
 * main - It is the entry point of a program.
 *
 * Return: The return statement is used to end the execution of a function.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
