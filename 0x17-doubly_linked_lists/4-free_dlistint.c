#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list area
 *
 * @head: pointer to head of the list area
 *
 * Return: nothing/0
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
