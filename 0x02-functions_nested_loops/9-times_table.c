#include "main.h"
/**
 * time_table - Prints the 9 times table
 * from 0
 * Return: empty
 */
void times_table(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
putchar('0' + i * j);
if (j < 9)
{
putchar(' ');
}
}
putchar('\n');
}
}
