#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - Main Entry
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*(s) != '\0')
	{
		putchar(*s);
		puts_recursion(s + 1);
	}
	if (*(s) == '\0')
	{
		putchar('\n');
	}
}
