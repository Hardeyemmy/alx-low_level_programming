#include <stdio.h>
/**
 * main - Print all positive single digits
 *
 * Return: End of program
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		if (x != '9')
		{
		putchar(',');
		putchar(' ');
		}
		x++;
	}
	putchar(10);
	return (0);
}
