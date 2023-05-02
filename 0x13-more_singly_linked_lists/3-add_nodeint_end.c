#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *neew, *last;

	neew = malloc(sizeof(listint_t));
	if (neew == NULL)
		return (NULL);
	neew->n = n;
	neew->next = NULL;
	if (*head == NULL)
	{
		*head = neew;
		return (neew);
	}
	last = *head;
	while (last->next)
		last = last->next;
	last->next = neew;
	return (neew);
}
