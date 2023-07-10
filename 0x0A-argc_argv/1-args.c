#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The number of arguments passed into the program.
 * @argv: The array of arguments passed into the program.
 * Return: 0 on success, or 1 on failure.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
