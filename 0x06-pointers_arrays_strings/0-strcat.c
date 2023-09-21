#include "main.h"
#include <stdio.h>

/**
 *  function that concatenates two strings
 *  This function appends the src string to the dest string, overwriting the term *  inating null byte at the end of dest, and then adds a terminating null byte
 */
char *_strcat(char *dest, char *src)
{
    strcat(dest,src);
    return dest;
}
