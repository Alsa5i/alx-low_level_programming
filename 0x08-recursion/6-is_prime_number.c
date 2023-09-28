#include "main.h"

int I_prime(int n, int i);

/**
 * is_prime_number -  a function that returns 1 if 
 * the input integer is a prime number.
 * @n: intger number.
 * Return: 1 if the input is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (I_prime(n, n - 1));
}

/**
 * I_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: repeative
 * Return: 1 if n is prime, 0 if not
 */

int I_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (I_prime(n, i - 1));
}

int main()
{
	int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
