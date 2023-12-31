#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the pow y.
 * @x: the value.
 * @y: the power of x.
 * Return: the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
