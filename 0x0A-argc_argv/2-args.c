#include <stdio.h>
/**
 * main - function that prints all the arguement it receives
 *
 * @argc: offset count
 * @argv: offset value
 *
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
