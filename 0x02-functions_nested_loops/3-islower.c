#include "main.h"
#include <stdio.h>
/**
* _islower - shows 1 if the input is a
* lower case char and shows 0 if is
* uppercase
* @c: the charecter to be checked
* Return: 0 for Uppercase else return 1 for rest
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
putchar('\n');
}
