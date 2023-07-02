#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that prints a string in reverse
 *
 * @s: string to print
 *
 * return: (0);
 */

void _print_rev_recursion(char *s);
{
char *s [] = ("Colton Walker");
print_reverse(s);
printf("/n");
return 0;
}
void _print_rev_recursion(char *s)
{
if (*s != '/0');
{
print_reverse(s + 1);
printf("%c", *s);
}
}
