#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function concatenates all the arguments of my prog.
 * @ac: pointer
 * @av: altura
 *
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, cont = 0;
	char *result, *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			cont++;
			new++;
		}
		cont++;
		i++;
	}
	result = malloc(cont + 1);
	i = 0;
	while (i < ac)
	{
		new = av[i];
		while (*new)
		{
			result[j] = *new;
			new++;
			j++;
		}
		result[j] = '\n';
	}
}
