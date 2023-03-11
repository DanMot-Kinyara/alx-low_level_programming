#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: parameter
 * Return: 1 (TRUE if a digit) or 0 (FALSE if not a digit)
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
