#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints the minutes of a day
 * Return: no return
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
putchar ('0' + hour / 10);
putchar ('0' + hour % 10);
putchar(':');
putchar('0' + minute / 10);
putchar('0' + minute % 10);
putchar('\n');
}
}
}
