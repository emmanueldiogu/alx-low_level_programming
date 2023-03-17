#include "lists.h"

/**
 * free_listint_safe - frees a linked list and sets the head to NULL
 * @h: pointer to a pointer to the head of the linked list
 *
 * Return: the number of nodes that were freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *current, *tmp;
size_t count = 0;

if (h == NULL || *h == NULL)
return (0);

current = *h;
while (current)
{
count++;
if (current < current->next)
{
tmp = current;
current = current->next;
free(tmp);
}
else
{
*h = NULL;
exit(98);
}
}

*h = NULL;
return (count);
}
