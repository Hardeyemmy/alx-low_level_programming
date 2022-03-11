#include <stdio.h>
/**
 * main - Print the alphabet letter in reverse 
 *
 * Return: End the program
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
