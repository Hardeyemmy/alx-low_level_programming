#include <stdio.h>
/**
 * main - Print all number between 0 and 9
 *
 * Return: End of the program
 */
int main(void)
{
	char n;

	for (n = 0; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
