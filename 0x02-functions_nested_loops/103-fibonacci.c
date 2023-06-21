#include "main.h"
#include <stdio.h>
/**
 * main- prints the sum
 * of even valued terms
 * in fubonacci
 * Return: 0 if successfull
 */

int main(void)
{
int sum = 0;
int prev = 1;
int curr = 2;
int next;
while (curr <= 4000000)
{
next = prev + curr;
if (next % 2 == 0)
{
sum += next;
}
prev = curr;
curr = next;
}
printf("%d\n", sum);
return (0);
}
