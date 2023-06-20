#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main Code
* Check if Number is POS,NEG or ZERO
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d This number is Positive\n", n);
}
else if (n < 0)
{
printf("%d This number is Negative\n", n);
}
else
{
printf("%d This number equals 0\n", n);
}
return (0);
}
