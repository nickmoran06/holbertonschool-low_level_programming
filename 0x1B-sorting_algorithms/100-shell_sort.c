#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
 * shell_sort - shell sort funcion
 *@array: array para ordenar
 *@size: tamanio del array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 1, otro, in;
	int temporal;

	if (array == NULL || size < 2)
		return;

	while (n < size / 3)
		n  = n * 3 + 1;

	while (n > 0)
	{

		for (otro = n; otro < size; otro++)
		{
			temporal = array[otro];
			in = otro;
			while (in > n - 1 && array[in - n] >= temporal)
			{
				array[in] = array[in - n];
				in = in - n;
			}
			array[in] = temporal;
		}
		n = (n - 1) / 3;
		print_array(array, size);
	}
}
