#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 *
 * @c: character to print
 *
 * Return: End the program
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
