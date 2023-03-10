#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints strings in reverse followed by a new line
 * @s: pointer to  use
 *
 * Return - void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
