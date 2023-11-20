#include "lists.h"

/**
 * @haed: this is a pointer to the head of the head of listint_t list.
 * sum_listint - this finds the sum of all the
 *               data (n) of a listint_t list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
