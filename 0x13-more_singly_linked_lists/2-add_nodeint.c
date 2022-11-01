#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning
 * @head: first parameter
 * @n: second parameter
 *
 * Description - adds a node at the beginning
 * Return: nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;

	*head = new;

	return (new);
}
