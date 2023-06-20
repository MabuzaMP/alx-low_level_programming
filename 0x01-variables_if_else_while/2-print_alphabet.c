#include <stdio.h>
/**
 * Main code
 * Description : Print alphabets small case
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
