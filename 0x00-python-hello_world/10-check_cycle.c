#include "lists.h"

/**
 * check_cycle -  checks if a singly linked list has a cycle in it
 * @list: pointer to the list
 *
 * Return: 1 if it has a cycle, else, 0
 */
int check_cycle(listint_t *list)
{
	if (list)
	{
		listint_t *heel = list, *front = list;

		while (heel && front)
		{
			if (front->next)
				front = front->next;
			else
				return (0);
			if (heel->next && heel->next->next)
				heel = heel->next->next;
			else
				return (0);
			if (heel == front)
				return (1);
		}
	}
	return (0);
}
