#include <stdio.h>
/**
 * main - Print all possible combination of two digit number
 *
 * Return: End the program
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; c <= '9'; i++)
		{
			for (c < i) 
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
