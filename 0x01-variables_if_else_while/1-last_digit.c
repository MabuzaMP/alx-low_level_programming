#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Betty
* Return: 0 if successful else return 1
*/
int main(void)
{
int n;
int lsd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lsd = n % 10;
if (lsd > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lsd);
}
else if (lsd == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lsd);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsd);
}
return (0);
}
