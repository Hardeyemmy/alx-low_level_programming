#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition
 * @a: sumnd 1
 * @b: sumnd 2
 *
 * Result: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: sumnd 1
 * @b: sumnd 2
 *
 * Result: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipcation
 * @a: muld 1
 * @b: muld 2
 *
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: divisor
 * @b: divider
 *
 * Return: result
 */
int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - module
 * @a: vape 1
 * @b: vape 2
 *
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b)
	{
	return (a % b);
	}
	printf("Error\n");
	exit(100);
}
