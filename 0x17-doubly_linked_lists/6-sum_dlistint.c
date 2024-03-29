#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint_t list.
 * @head: The head of a dlistint_t list.
 *
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
