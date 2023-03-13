#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of argumets
 * @argv: array of argumets
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);

return (0);
}
