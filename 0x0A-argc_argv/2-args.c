#include <stdio.h>
#include "main.h"
/**
 *main - Prints all arguments passed into the program
 *@argc: The number of arguments passed into the program.
 *@argv: The array of arguments passed into the program.
 *Return: 0 on success, or 1 on failure.
 */

int main(int argc, char *argv[])
{
	int i;

for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
