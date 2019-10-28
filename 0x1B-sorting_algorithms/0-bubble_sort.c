#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 *
 * @array: Array to be sorted
 * @size: Size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t counter = 0, flag;
	int subst = 0;

	if (!array || size < 2)
		return;

	for (flag = 1; size > 0 && flag;)
	{
		flag = 0;
		for (counter = 0; counter < size - 1; counter++)
		{
			if (array[counter] > array[counter + 1])
			{
				subst = array[counter];
				array[counter] = array[counter + 1];
				array[counter + 1] = subst;
				print_array(array, size);
				flag = 1;
			}
		}
	}
}
