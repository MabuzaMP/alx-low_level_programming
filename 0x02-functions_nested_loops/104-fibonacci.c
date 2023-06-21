#include "main.h"
#include <stdio.h>
/**
 * main- print first 98 fibonacci
 * numbers starting with 1 and 2
 * Return: 0 if successful
 */

int main(void)
{
int prev = 1;
int curr = 2;
int next;
int i;
for (i = 0; i < 98; i++)
{
next = prev + curr;
printf("%d, ", next);
prev = curr;
curr = next;
}
printf("\n");
return (0);
}
