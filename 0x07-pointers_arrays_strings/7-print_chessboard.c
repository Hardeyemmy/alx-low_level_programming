#include " main.h"
/**
 * print_ chessboard - function that print the chessboard
 *
 * @a: an array pointer
 *
 * Return: End the program
 */
void print_chessboard(char (*a)[8])
{
	int b, c;

	for (b = 0; b < 8; b++)
	{
	for (c = 0; c < 8; c++)
	{
		_putchar(a[b][c]);
	}
	_putchar('\n');
	}
}
