#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the new node
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *neew;

	neew = malloc(sizeof(listint_t));
	if (neew == NULL)
		return (NULL);
	neew->n = n;
	neew->next = *head;
	*head = neew;
	return (neew);
}
