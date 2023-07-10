#include <stdio.h>
#include <stdlib.h>

#define COIN_VALUES {25, 10, 5, 2, 1}
#define NUM_COINS 5

/**
 * get_min_coins: Prints the minimum number of coins needed to make change for an amount of money.
 * @cents: The amount of cents to make change for.
 * Return :The minimum number of coins needed.
 */

int get_min_coins(int cents)
{
int min_coins = 0;
for (int i = 0; i < NUM_COINS; i++)
{
int coin_value = COIN_VALUES[i];
int num_coins = cents / coin_value;
min_coins += num_coins;
cents -= num_coins * coin_value;
}
return min_coins;
}
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return 1;
}
int cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return 0;
}
int min_coins = get_min_coins(cents);
printf("%d\n", min_coins);
return 0;
}
