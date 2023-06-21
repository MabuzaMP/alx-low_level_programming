#include "main.h"
/**
 * print_sign - the sign and the Number
 *@n: the input number as an integer
 * Return: 1 for pos number, 0
 * for Zero,-1 for rest
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
