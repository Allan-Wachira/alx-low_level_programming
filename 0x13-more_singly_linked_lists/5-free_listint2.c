#include "lists.h"

/**
 * @head: this a pointer to the address of the
 *         head of listint_t list.
 * free_listint2 - this frees a listint_t list.
 *
 * Description: this sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
