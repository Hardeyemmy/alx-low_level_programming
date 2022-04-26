#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - counts the number of unique nodes in a looped listint_t linked list
 *
 * @head: A pointer to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0 otherwise the number of the unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tag, *hat;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tag = head->next;
	hat = (head->next)->next;

	while (hat)
	{
		if (tag == hat)
		{
			tag == head;
			while (tag != hat)
			{
				nodes++;
				tag = tag->next;
				hat = hat->next;
			}
			tag = tag->next;
			while (tag != hat)
			{
				nodes++;
				tag = tag->next;
			}
			return (nodes);
		}
		tag = tag->next;
		hat = (hat->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - frees a listint_t list safely
 *
 * @h: A pointer to the address of the head of the listint_t
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}
	h = NULL;

	return (nodes);
}
