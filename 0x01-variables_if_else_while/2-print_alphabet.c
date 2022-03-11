#include <stdio.h>
/**
 * main - Print a text according to alphabet
 *
 * Return - End the program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	printf("%c", letter);
	printf("\n");
	return (0);

}
