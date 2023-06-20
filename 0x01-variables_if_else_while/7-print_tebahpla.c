#include <stdio.h>
/**
* main - Betty
* Return: 0 if successful else return 1
*/
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
