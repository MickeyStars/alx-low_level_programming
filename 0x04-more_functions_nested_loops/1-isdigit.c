#include "main.h"

/**
 *_isdigit - function that checks for 0 through 9
 * @C: parameter to be checked 
 * Return: 1 on sucess and 0 on error
*/

int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);



}

