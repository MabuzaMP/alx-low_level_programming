#include "main.h"
/**
 * swap_int - Main Entry
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
int new = *a;
*a = *b;
*b = new;
}
