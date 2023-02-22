#include"main.h"

/**
 * print_sign - prints the sign of number
 * @n: number to be checked
  * Return: 1 (is greater that zero) OR 0 (is zero)
 * OR -1 (is less that zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
