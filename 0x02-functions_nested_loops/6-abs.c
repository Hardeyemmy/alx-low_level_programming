#incude "main.h"
/**
 * main - absolute value of a num
 *
 * Return: absolute value
 */
int _abs(int c)
{
	if (c > 0)
	{
		c = c * 1;
	}
	if (c == 0)
	{
		c = 0; 
	}
	if (c < 0)
	{
		c = c * -1;
	}
	return (c);
}
