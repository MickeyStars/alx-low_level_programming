#include "main.h"

/**
 * print_number - print numbers chars
 * @n: integer params
 * Return: 0
 */

void print_number(int n)
{
	unsigned int g1;

	g1 = n;

	if (n < 0)
	{
		_putchar('-');
		g1 = -n;
	}

	if (g1 / 10 != 0)
	{
		print_number(g1 / 10);
	}
	_putchar((g1 % 10) + '0');
}

