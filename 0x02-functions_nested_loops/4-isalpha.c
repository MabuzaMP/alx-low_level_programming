#include "main.h"
/**
 * _isalpha -Shows 1 if a letter
 * is shown,then 0 for rest
 * @c: the charracter to be checked
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
