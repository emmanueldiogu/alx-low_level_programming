#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *turtle = head, *hare = head;
size_t count = 0;

while (turtle && hare && hare->next)
{
turtle = turtle->next;
hare = hare->next->next;
count++;

if (turtle == hare)
{
printf("[%p] %d\n", (void *)turtle, turtle->n);
while (turtle != head)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}
printf("[%p] %d\n", (void *)head, head->n);
exit(98);
}

printf("[%p] %d\n", (void *)turtle, turtle->n);
}

while (head)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}

return (count);
}
