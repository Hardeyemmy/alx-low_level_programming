#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main file
 * @argc: number of lines argurment
 * @argv: array of element
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int R;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	R = (*get_op_func(argc[2]))(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", R);

	return (0);
}
