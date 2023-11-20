#include "lists.h"

/**
 * @n:  this is the data to add to new node
 * add_nodeint - this ensures a new node is added at the beginning of a listint_t list
 * @head: this a pointer to head pointer of linked list
 *
 * Return: this is the address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
