#include "main.h"
#include <stdio.h>
/**
* print_alphabet_x10 - print the alphabet x 10
*Return: 0 if successful else return 1
*/
void print_alphabet_x10(void);
{
int i;
char letter;
for (i = 0; i < 10; i++)
{
letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
}
putchar('\n');
}
