#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Ordena un array de enteros en orden ascendente usando el
 *                  algoritmo de Ordenación por Selección.
 * @array: Puntero al array a ordenar.
 * @size: El tamaño del array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_index, k;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
	min_index = i;

	for (j = i + 1; j < size; j++)
	{
		if (array[j] < array[min_index])
		{
		min_index = j;
		}
	}

	if (min_index != i)
	{
		temp = array[i];
		array[i] = array[min_index];
		array[min_index] = temp;

		for (k = 0; k < size; k++)
		{
			printf("%d", array[k]);
			if (k < size - 1)
			printf(", ");
		}
		printf("\n");
	}
	}
}

