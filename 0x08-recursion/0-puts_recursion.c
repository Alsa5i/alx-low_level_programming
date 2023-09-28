#include "main.h"

/**
 * s : string that we want to print
 *
 * Return: _put_recursion
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	/* code */
	_puts_recursion(s + 1);
	printf("%c", *s);
	}
}
