#include "lists.h"

/**
 * @head: this is the pointer to head pointer of linked list.
 * reverse_listint - this prompt is the reverse linked list
 * Return: it should return pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	(*head) = prev;

	return (*head);
}
