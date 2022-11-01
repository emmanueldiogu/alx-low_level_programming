#include "lists.h"

/**
 * list_len - prints number of nodes
 * @h: first parameter
 *
 * Description - prints number of nodes
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
