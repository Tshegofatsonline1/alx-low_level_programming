#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all-functions that returns sum of all it parameters
 * @n: number of parameters passed
 * @...: A number of parameter to calculate sum of
 *
 * Return: If n == 0 - 0.
 * otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int k, sum = 0;

va_start(ap, n);

for (k = 0; k < n;  k++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
