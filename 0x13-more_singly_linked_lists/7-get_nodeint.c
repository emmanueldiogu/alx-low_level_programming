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
	unsigned int x = 0;
	listint_t *temp;

	temp = head;

	if (temp == NULL)
		return (NULL);

	while (temp != NULL)
	{
		if (x == index)
			return (temp);
		x++;
		temp = temp->next;
	}
	return (temp);
}
