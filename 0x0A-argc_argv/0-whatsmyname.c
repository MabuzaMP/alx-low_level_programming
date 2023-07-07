#include <stdio.h>
/**
 * main- function that print the name of file
 * @argc: is aargument counter for char
 * @argv: is an argument value for char
 * Return: Always 0 ( success)
 */

int main()
{
char *name = argv[0];
printf("%s\n", name);
return 0;
}
