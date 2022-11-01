#include "lists.h"

/**
 *_strlen - function that counts the lenght of a string
 *@str: string to be counted
 *
 *Return: count
 */

int _strlen(const char *str)
{
	int x = 0;

	while (str[x] != '\0')
		x++;
	return (x);
}

/**
 * add_node_end - adds a node at the travel
 * @head: first parameter
 * @str: second parameter
 *
 * Description - adds a node at the end
 * Return: nodes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *hold;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (hold->next != NULL)
	{
		hold = hold->next;
	}

	hold->next = new;
	return (new);
}
