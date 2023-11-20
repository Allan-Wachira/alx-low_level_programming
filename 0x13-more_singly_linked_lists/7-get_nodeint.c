#include "lists.h"

/**
 * @index: this is the index of the node to locate
 *          that is indices start at 0.
 * get_nodeint_at_index - this locates a given node of
 *                        a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
