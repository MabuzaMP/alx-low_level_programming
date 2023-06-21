#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number
 *
 * @n: input number as an integer
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
putchar(last_digit + '0');
return (last_digit);
}
