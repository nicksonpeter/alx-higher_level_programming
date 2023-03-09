#include <stdio.h>
#include "list.h"

/**
 * check_cycle - checking cycles
 * @list: value passed to the function
 *
 * Return: 0 if no cycle, 1 if there is
 */
int check_cycle(listint_t *list)
{
	listint_t *back = list;
	listint_t *front = list;

	if (!list)
		return (0);

	while (back && front && front->next)
	{
		back = back->next;
		front = front->next->next;
		if (back == front)
			return (1);
	}
	return (0);
}

