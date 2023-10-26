#include "main.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: b is pointer to the string
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int bainary = 0;
	int valu;

	if (!b)
	{
		return (0);
	}

	for (valu = 0; b[valu] != '\0'; valu++)
	{
		if (b[valu] != '0' && b[valu] != '1')
		{
			return (0);
		}
		bainary = (bainary << 1) | (b[valu] - '0');
	}

	return (bainary);
}
