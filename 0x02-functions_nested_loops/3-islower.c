#include "main.h"
/**
* _islower - shows 1 if the input is a
* lower case char and shows 0 if is 
* uppercase
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
