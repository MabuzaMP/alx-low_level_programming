#include "main.h"
/**
 * is_alpha -Shows 1 if a letter
 * is shown,then 0 for rest
 * Return: 1 for letters. 0 for the rest
 */
int _isalpha(int c) 
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
