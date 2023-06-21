#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number
 * @n: input number as an integer
 * Return: last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
putchar('0' + (last_digit >= 0 ? last_digit : -last_digit));
return (last_digit);
}
