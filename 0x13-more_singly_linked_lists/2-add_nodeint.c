#include "lists.h"

/**
 * add_nodeint -add node to list.
 * @head: pointer to a pointer
 * @n: constant int value in the structure
 * Return: the address of the new element or NULL if fail (the new node)
 **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;

	return (temp);
}
