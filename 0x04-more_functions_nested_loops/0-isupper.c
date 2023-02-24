#include"main.h"
#include<unistd.h>

/**
 * _isupper -a function that checks for uppercase letters
 *  @c:char to check
 *  Return: 0 to 1 (success)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	return (1);
	else
	return (0);
}
