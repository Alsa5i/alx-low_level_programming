#include "function_pointers.h"

/**
 * int_index - ireturn index place if = true ,else -1
 * @array: is an array
 * @size: the size of array
 * @cmp: a pointer to the function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
