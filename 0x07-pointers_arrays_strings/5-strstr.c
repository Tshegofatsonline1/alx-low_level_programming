#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: string to search for
 *
 * Return: pointer to beginning of the located substring, or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *l = haystack;
char *p = needle;
while (*l == *p && *p != '\0')
{
l++;
p++;
}
if (*p == '\0')
return (haystack);
}
return (0);
}
