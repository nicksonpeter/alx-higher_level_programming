#include "lists.h"

/**
 * check_cycle - checking linked list containing a cycle
 * @list: linked list to check
 *
 * Return: 0 if there is no cycle, 1 if ther is
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
