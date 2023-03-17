#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
listint_t *turtle = *h, *hare = *h;
size_t count = 0;

while (turtle && hare && hare->next)
{
turtle = turtle->next;
hare = hare->next->next;
count++;

if (turtle == hare)
{
while (*h != turtle)
{
listint_t *temp = *h;
*h = (*h)->next;
free(temp);
count--;
}
*h = (*h)->next;
free(turtle);
count++;
break;
}
}

while (*h)
{
listint_t *temp = *h;
*h = (*h)->next;
free(temp);
count++;
}

return (count);
}
