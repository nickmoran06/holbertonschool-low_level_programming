#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to array
 * @size: Is the number of elements in the array *array
 * @cmp: Is a pointer to the function to be used to compare values
 *
 * Return:\
 * int_index, the index of the first element for which the	\
 * cmp function does not return 0.
 * If no element matches, return -1.
 * If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			j = cmp(array[i]);

			if (j)
			{
				break;
			}

		}
		if (i < size)
			return (i);
	}
	return (-1);
}
