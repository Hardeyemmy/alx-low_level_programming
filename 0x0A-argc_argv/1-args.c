#include <stdio.h>
/**
 * main - function that print a number of arguement passed into it
 *
 * @argc: n arg
 * @argv: args array
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
	printf("%d\n", argc - 1);
	}
	return (0);
}
