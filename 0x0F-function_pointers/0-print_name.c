#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: main name
 * @f: void function
 *
 * Return: End the program
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
