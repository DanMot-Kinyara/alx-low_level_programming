#include"main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @j: number to check last digit
 *
 * Return: last digit
 */

int print_last_digit(int j)
{
	int last_digit;

	if (j < 0)
		last_digit = (j % 10) * -1;
	else
		last_digit = j % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
