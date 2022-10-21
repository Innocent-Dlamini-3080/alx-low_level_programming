#include "lists.h"


/**
 * listint_len - return number of nodes.
 * @h: pointer to a structure typedef list_t
 * Return: the number of nodes
 **/


size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *cont = h;

	while (cont != NULL)
	{
		cont = cont->next;
		count = count + 1;
	}

	return (count);
}
