#include <stdio.h>
/**
 * Main Code
 * Description - Print all alphabets
 * expet for 'e and'q
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
