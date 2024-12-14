#include "sort.h"

/**
 *bubble_sort -Ordena un arreglo usando el algoritmo de ordenación por burbuja
 *@array: El arreglo de enteros a ordenar.
 *@size: El tamaño del arreglo
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, i_2;
	int temp;
	int swapped;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (i_2 = 0; i_2 < size - 1 - i; i_2++)
		{
			if (array[i_2] > array[i_2 + 1])
			{
				temp = array[i_2];
				array[i_2] = array[i_2 + 1];
				array[i_2 + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
