#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long int to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	int BIT_ = 0, NUMBERS = 8 * sizeof(n), Ind;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (Ind = NUMBERS - 1; Ind >= 0; Ind--)
	{
		unsigned long int bat = 1UL << Ind;

		if ((n & bat) != 0)
		{
			BIT_ = 1;
			_putchar('1');
		}
		else if (BIT_)
		{
			_putchar('0');
		}
	}
}
