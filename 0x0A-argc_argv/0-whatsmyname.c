#include <stdio.h>

 /**
  * main - is a function that print the name,
  * that we pass to it follo by new line.
  * @argc: counter of the array argv.
  * @argv: is an array cotain the argument of our programm.
  *
  * Return:return  always 0
  **/

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
