#include "main.h"
/** binary_to_uint - converts a binary num to an unsigned int
 *
 * @b: A pointer to a string of 0 and 1
 *
 * Return: If b is NULL or contains chars not 1 or 0 - 0
 *		otherwise - the converted num
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len == '1']))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}
	return (num);
}
