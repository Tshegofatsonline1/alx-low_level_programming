#include "main.h"
#include<stdio.h>

/**
 * print_array - Prints an elemets of an array of integer
 * @a: array of integers
 * @n: number of elemets of the array to be printed
 * Retun: void
 */


void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
