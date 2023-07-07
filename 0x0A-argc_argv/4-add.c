#include <stdio.h>

/**
 * Adds positive numbers and prints the result.
 * @param argc The number of arguments passed into the program.
 * @param argv The array of arguments passed into the program.
 * @return 0 on success, or 1 on failure.
 */

int main(int argc, char *argv[])
{
int sum = 0;
for (int i = 1; i < argc; i++)
{
if (!isdigit(argv[i][0]))
{
printf("Error\n");
return 1;
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return 0;
}
int isdigit(char c)
{
return c >= '0' && c <= '9';
}
