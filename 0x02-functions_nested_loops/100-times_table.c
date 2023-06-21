#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Printing a times table of 100
 * @n: the character to be palced
 * Return : 0
 */
void print_times_table(int n)
{
if (n > 15 || n < 0)
{
return;
}
int i;
int j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
putchar('0' + i * j);
if (j < n)
{
putchar(' ');
}
}
putchar('\n');
}
}
