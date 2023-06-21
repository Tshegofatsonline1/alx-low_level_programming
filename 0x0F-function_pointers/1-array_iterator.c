#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that executes a function given
 * as parameter on each element of array
 * @array: array
 * @size: number of elemts to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
