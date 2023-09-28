#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: string to print.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}