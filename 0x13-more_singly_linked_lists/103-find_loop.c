#include "lists.h"

/**
 * @head: this is the pointer to head pointer of linked list.
 * find_listint_loop - this finds loop in linked list.
 *
 * Return: this should address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	/* this determines if loop exists by seeing if turtle and hare meets */
	/* then it starts them at head, and moves turtle one node and hare two nodes */
	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			/* starts turtle at head and hare at address they met */
			/* and moves turtle and hare one node to find loop origin */
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (turtle);
		}
	}

	return (NULL);
}
