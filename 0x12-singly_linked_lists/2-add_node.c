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
 * add_node - adds a node at the beginning
 * @head: first parameter
 * @str: second parameter
 *
 * Description - adds a node at the beginning
 * Return: nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;

	*head = new;

	return (new);
}
