#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h_1;
	dlistint_t *h_2;
	unsigned int j;

	h_1 = *head;

	if (h_1 != NULL)
		while (h_1->prev != NULL)
			h_1 = h_1->prev;

	j = 0;

	while (h_1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = h_1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h_2->next = h_1->next;

				if (h_1->next != NULL)
					h_1->next->prev = h_2;
			}

			free(h_1);
			return (1);
		}
		h_2 = h_1;
		h_1 = h_1->next;
		j++;
	}

	return (-1);
}
