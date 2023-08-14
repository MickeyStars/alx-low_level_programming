#include <stdio.h>

/**
 * main - It is the entry point of a program.
 *
 * Return: The return statement is used to end the execution of a function.
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);

}
