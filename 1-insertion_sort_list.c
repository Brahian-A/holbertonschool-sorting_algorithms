#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - Ordena una lista doblemente enlazada utilizando el algoritmo de Insertion Sort.
 * @list: Doble puntero a la cabeza de la lista.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

	current = (*list)->next;

	while (current != NULL)
	{
	key = current;
	temp = current->prev;

	while (temp != NULL && temp->n > key->n)
	{
		if (temp->prev != NULL)
		{
		temp->prev->next = key;
		}
		if (key->next != NULL)
		{
		key->next->prev = temp;
		}
            
		temp->next = key->next;
		key->prev = temp->prev;
		key->next = temp;
		temp->prev = key;

		if (key->prev == NULL)
		{
		*list = key;
		}

		print_list(*list);

		temp = key->prev;
	}

	current = current->next;
	}
}
