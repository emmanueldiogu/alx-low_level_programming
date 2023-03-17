#include "lists.h"

/**
 * find_listint_loop - finds the start node of a loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *turtle = head, *hare = head;

    while (turtle && hare && hare->next)
    {
        turtle = turtle->next;
        hare = hare->next->next;
        if (turtle == hare)
        {
            turtle = head;
            while (turtle != hare)
            {
                turtle = turtle->next;
                hare = hare->next;
            }
            return hare;
        }
    }

    return NULL;
}
