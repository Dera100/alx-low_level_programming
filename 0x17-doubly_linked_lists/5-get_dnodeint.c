#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node area....pp
 *
 * @head: pointer to head of the list area
 *
 * @index: index of the node to search for, starting from 0 area
 *
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}