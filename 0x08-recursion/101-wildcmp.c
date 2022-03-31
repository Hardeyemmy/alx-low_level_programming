#include "main.h"
/**
 * wildcmp - compare 2 string and return 1 if identical otherwise return 0
 *
 * @s1: pointer paramter 1
 * @s2: pointer parameter 2
 *
 * Return: End the program
 */
int wildcmp(char *s1, char *s2)
{
	 if (*s2 == '\0')
	 {
	 	return (*s1 == '\0');
	 }
	 if (*s2 == *s1)
	 {
	 return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	 }
	 if (*s2 == '*')
	 {
	 return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	 }
	 return (0);
}
