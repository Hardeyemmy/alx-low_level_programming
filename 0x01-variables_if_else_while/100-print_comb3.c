#include <stdio.h>
/**
 * main - Print all possible combination of two digit number
 *
 * Return: End the program
 */
int main(void)
{
	int c, i, b;
	c = 0;
	i = 0;
	b = 1;

	while (c <= 9)
	{
		while(i <= 9)
		{
			if (c < i) 
			{
				if (b == 0)
				{
					putchar(',');
					putchar('32');
				}
				b == 0;
				putchar(a + '0');
				putchar(b + '0');
			}
			++b
		}
		++a
			b = 0;
	}
	putchar(10);
	return (0);
}
