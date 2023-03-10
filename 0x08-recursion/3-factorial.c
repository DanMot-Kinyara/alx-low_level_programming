#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: factorial number, -1 if negative n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
