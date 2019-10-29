#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: The array to sort
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t counter = 0, subst = 0, tmp = 0, cmp = 0;

	if (!array || size < 2)
		return;

	for (counter = 0; counter < size - 1; counter++)
	{
		tmp = counter;
		for (cmp = counter + 1; cmp < size; cmp++)
		{
			if (array[tmp] > array[cmp])
				tmp = cmp;
		}
		if (counter != tmp)
		{
			subst = array[counter];
			array[counter] = array[tmp];
			array[tmp] = subst;
			print_array(array, size);
		}
	}
}
