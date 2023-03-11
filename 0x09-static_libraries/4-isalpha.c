#include"main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to be checked
 * Return: 1 (TRUE is alphabet) or 0 (FALSE not alphabetic)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
