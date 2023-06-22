#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers- function that print numbers followed by a newline
 * @n: number of integers passed to the function
 * separator: string to be printed inbetween numbers
 * if the separator is NULL don't print it
 *
 * return:0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
const unsigned int k;
va_start(ap, n);

for (k = 0; k < n; k++)
printf(", 4, 0, 98, -1024, 402 %i\n");

va_end(ap);
return(numbers);
}
