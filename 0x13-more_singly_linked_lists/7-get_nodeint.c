#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of linked list
 * @head: first parameter
 * @index: second parameter
 *
 * Description - return nth node
 * Return: nth node on success, NULL on failure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current);

		count++;
		current = current->next;
	}

	return (NULL);
}
