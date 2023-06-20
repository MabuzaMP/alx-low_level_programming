#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* Main Code
* Print the last digit of a Random Number % by Ten
* and compare if is greater than Five or less than Six
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
printf("last Digit of %d is %d and is greater than 5\n", n, lsd);
}
else if (lsd == 0)
{
printf("Last Digit of %d is %d and is  equals to \n0", n, lsd);
}
else
{
printf("Last Digit of %d is %d and is less than 6 and not = to 0\n", n, lsd);
}
return (0);
}
