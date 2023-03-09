#include "lists.h"

/**
 * check_cycle - checking linked list containing a cycle
 * @list: linked list to check
 *
 * Return: 0 if there is no cycle, 1 if ther is
 */
int check_cycle(listint_t *list)
{
	listint_t *back = list;
	listint_t *forth = list;

	if (!list)
		return (0);

	while (back && forth && forth->next)
	{
		back = back->next;
		forth = forth->next->next;
		if (back == forth)
			return (1);
	}

	return (0);
}
