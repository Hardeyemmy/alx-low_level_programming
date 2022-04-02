#include "main.h"
/**
 * _strstr - function to locate a string in another string
 *
 * @haystack: pointer parameter of type char 1
 * @needle: pointer parameter of type char 2
 *
 * Return: End the program
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
}
