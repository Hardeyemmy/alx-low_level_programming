#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 *
 * @b: unsigned integer passed to the function for memory allocation
 *
 * Return: End the program
 */
void *malloc_checked(unsigned int b)
{
	void *p;
	 
	p = malloc(b);
	if (p == NULL)
	 {
	exit(98);
	 }
	return (p);
}
