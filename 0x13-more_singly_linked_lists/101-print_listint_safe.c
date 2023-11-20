#include "lists.h"
#include <stdio.h>
/**
 * @head: this is the pointer to head pointer of linked list.
 * count_nodes_till_loop - this counts nodes to know how many unique nodes to print.
 * Return: it should return the number of unique nodes in list before a loop.
 */
int count_nodes_till_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		count++;

		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * @head: this is the pointer to head pointer of linked list.
 * loop - this finds if there's a loop in linked list.
 * Return: it should 0 if no loop, and 1 if there is a loop.
 */
int loop(const listint_t *head)
{
	const listint_t *turtle, *hare;

	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
			return (1);
	}
	return (0);
}

/**
 * @head: this is the pointer to head pointer of linked list.
 * print_listint_safe - this prints list with addresses
 * Return: should retur number of nodes in list, then exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int loop_found;
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1) /* this prints upto last node before loop if loop */
	{
		count = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0) /* this prints regularly upto NULL if no loop */
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			num_nodes += 1;
			tmp = tmp->next;
		}
	}

	return (num_nodes);
}
