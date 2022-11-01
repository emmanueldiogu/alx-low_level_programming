#include "lists.h"

/**
 * free_list - frees a lists_t list
 * @head: first parameter
 *
 * Description - frees a list
 * Return: Free
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free (head);
	}
}
