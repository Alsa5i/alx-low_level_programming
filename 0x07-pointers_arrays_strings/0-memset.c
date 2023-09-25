#include <stdio.h>
int main()
{
   
    
    return 0;
}


/**
 * s:changed string
 * b:constant byte.
 * n:num of the char.
 * return: the value of string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
