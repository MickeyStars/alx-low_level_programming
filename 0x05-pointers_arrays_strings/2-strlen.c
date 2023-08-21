#include "main.h"

/**
 * _strlen - finds the lenght of a string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int j;
	int counter = 0;

	for (j = 0; s[j] != '\0'; j++)
		counter++;
	return (counter);
}
