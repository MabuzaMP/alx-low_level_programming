#include <stdio.h>
/**
* print_alphabet - print a to z in lowercase
* Return: 0 if successful else return 1
*/
void print_alphabet(void)
{
char letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
