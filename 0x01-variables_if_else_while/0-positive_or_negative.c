#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main Code
* Check if Number is POS,NEG or ZERO
i*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is Positive\n", n);
}
else if (n < 0)
{
printf("%d is Negative\n", n);
}
else
{
printf("%d is equals 0\n", n);
}
return (0);
}
