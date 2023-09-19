#include "main.h"
/**
 *  function that swaps the values of two integers.
 *@a: the first var.
 *@b:secomd
 * */
void swap_int(int *a, int *b)
{
int c,d;

c = *a;
d = *b;
*a = d;
*b = c;
}
