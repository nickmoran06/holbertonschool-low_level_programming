#include "search_algos.h"

void print_process_array(int *array, size_t size);

/**
 * binary_search - function that searches for a value
 * in a sorted array of integers using the Binary search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located,
 * If value is not present in array or if array is NULL,
 * your function must return -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, middle;

	left = 0;
	right = size - 1;

	if (!array || size == 0)
		return (-1);

	print_process_array(array + left, right + 1 - left);
	while (left < right)
	{
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
		print_process_array(array + left, right + 1 - left);
	}
	return (-1);
}

/**
 * print_process_array - function to print the current array
 * during the process of the search algorithm.
 *
 * @array: current pointer to the array used to search into
 * @size: size of the array
 *
 * Return: void
 */
void print_process_array(int *array, size_t size)
{
	size_t index = 0;

	printf("Searching in array:");
	while (index < size)
	{
		printf(" %d", array[index]);
		if (index != size - 1)
			printf(",");
		index++;
	}
	printf("\n");
}
