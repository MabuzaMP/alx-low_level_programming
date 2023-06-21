#include <stdio.h>
#include "main.h"
/**
 * main- Fibonacci structer
 * Return: 0 if successful
 */

int main(void)
{
int i, n1 = 1, n2 = 2, next;
printf("The first 50 Fibonacci numbers are:\n");
for (i = 0; i < 50; i++)
{
next = n1 + n2;
printf("%d, ", next);
n1 = n2;
n2 = next;
}
printf("\n");
return (0);
}
