#nclude "main.h"

/**
 * @s: string that we want to print
 * _puts_recursion - a function that prints a string, followed by a new line
 */

void _puts_recursion(char *s) 
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
