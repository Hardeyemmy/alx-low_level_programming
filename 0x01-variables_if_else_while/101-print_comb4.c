#include <stdio.h>
/**
 * main - Print a combination of three numbers
 *
 * Return: End the program
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int com = 1;

	while (a <= 9)
	{
		while (b <= 9)
		{
			while (c <= 9)
			{
				while (a < b && b < c)
				{
					if (com == 0)
					{
						putchar(',');
						putchar(32);
					}
					com = 0;
					putchar(a + '0');
					putchar(b + '0');
					putchar(c + '0');
				}
				++c;
			}
			++b;
			c = 0;
		}
		a++;
		b = 0;
	}
	putchar(10);
	return (0);
}
