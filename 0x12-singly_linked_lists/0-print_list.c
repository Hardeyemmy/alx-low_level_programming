#include <list.h>
/**
 * print_list - prints all the element of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		if (cursor->str != NULL)
			_putchar("[%d] %s\n", cursor->len, cursor->str);
		else
			_putchar("[0] nil\n");
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
