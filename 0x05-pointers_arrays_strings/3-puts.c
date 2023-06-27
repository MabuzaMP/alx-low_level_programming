#include <stdio.h>
#include "main.h"
/**
 * _puts - Main Entry
 * @str: input
 */
void puts(char *str)
{
int i;
for (i = 0; *(str + i); i++)
{
putchar(str[i]);
}
putchar('\n');
}
