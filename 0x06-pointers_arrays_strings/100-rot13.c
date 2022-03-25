#include "main.h"
/**
 * rot13 - function that encodes a string using rot13
 *
 * @s: pointer parameter pass into the function
 *
 * Return: End the program
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
		if (s[i] == data1[j])
		{
			s[i] = datarot[j];
			break;
		}
		}
	}
	return (s);
}
