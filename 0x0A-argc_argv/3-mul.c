#include <stdio.h>

/**
 * Multiplies two numbers and prints the result.
 * @param argc The number of arguments passed into the program.
 * @param argv The array of arguments passed into the program.
 * @return 0 on success, or 1 on failure.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return 1;
}
int first_number = atoi(argv[1]);
int second_number = atoi(argv[2]);
int product = first_number * second_number;
printf("%d\n", product);
return 0;
}
