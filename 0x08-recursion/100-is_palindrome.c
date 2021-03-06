#include "main.h"
int check_palindrome(char *s);
/**
 * is_palindrome - function return 1 if palindrome otherwise 0
 *
 * @s: pointer parameter to the function
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
	return (1);
	}
	return (check_palindrome(s));
}
 /**
  * check_palindrome - check if the string is palindrome
  *
  * @s: the string value to be checked
  *
  * Return: End the program
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
	return (0);
	}
	return (1);
}
/**
 * _strlen_recursion - get the lenght of the string
 *
 * @s: the string to get to the depth
 *
 * Return: End the programe
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
