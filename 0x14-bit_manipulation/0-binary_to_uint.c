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
	int i;
	unsigned int dec_val = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		dec_val = 2 * dec_val + (b[i] - '0');
	}
	return (dec_val);
}
