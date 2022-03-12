#include <stdio.h>
/**
 * main - Print the size of the machine 
 *
 *Return: End of the program
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;

	printf("Size of of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a char: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(e));
	return (0);
}
