#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *hd;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	hd = *head;

	if (hd != NULL)
	{
		while (hd->next != NULL)
		{
			hd = hd->next;
		}
		hd->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	new_node->prev = hd;

	return (new_node);
}
