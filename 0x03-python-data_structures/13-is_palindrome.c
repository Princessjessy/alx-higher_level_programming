#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
void reverse_listint(listint_t **head)
{
	listint_t *prom = NULL;
	listint_t *count = *head;
	listint_t *next = NULL;

	while (count)
	{
		next = count->next;
		count->next = prom;
		prom = count;
		count = next;
	}

	*head = prom;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
	listint_t *low = *head, *last = *head, *tem = *head, *dop = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		last = last->next->next;
		if (!last)
		{
			dop = low->next;
			break;
		}
		if (!last->next)
		{
			dop = low->next->next;
			break;
		}
		low = low->next;
	}

	reverse_listint(&dop);

	while (dop && tem)
	{
		if (tem->n == dop->n)
		{
			dop = dop->next;
			tem = tem->next;
		}
		else
			return (0);
	}

	if (!dop)
		return (1);

	return (0);
}
