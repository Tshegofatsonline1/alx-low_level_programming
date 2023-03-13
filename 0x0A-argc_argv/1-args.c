#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed on it
 * @argc: counts all the arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

(void) argv; /*ignore *argv*/
printf("%d\n", argc - 1);

return (0);

}
