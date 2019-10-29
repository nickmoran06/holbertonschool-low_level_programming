#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

int lomuto(int *array, int menor, int mayor, size_t size);
void rqs(int *array, int menor, int mayor, size_t size);
void mover(int *a, int *b);
/**
 * quick_sort - quick sort funcion
 *@array: array para ordenar
 *@size: tamanio del array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	int menor;
	int mayor;

	if (array == NULL || size < 2)
		return;

	menor = 0;
	mayor = size - 1;
	rqs(array, menor, mayor, size);
}
/**
 * rqs - secursive quick sort
 *@array: array desordenado
 *@menor: punto menor del segmento
 *@mayor: punto mayor del segmento
 *@size: tamanio del array
 * Return: nothing
 */
void rqs(int *array, int menor, int mayor, size_t size)
{
	int piv;

	if (menor < mayor)
	{
		piv = lomuto(array, menor, mayor, size);
		rqs(array, menor, (piv - 1), size);
		rqs(array, (piv + 1), mayor, size);
	}
}
/**
 * lomuto - Insertion sort function
 *@array: array desordenado
 *@menor: punto menor del segmento
 *@mayor: punto mayor del segmento
 *@size: tamanio del array
 * Return: particion final
 */
int lomuto(int *array, int menor, int mayor, size_t size)
{
	int pivote = array[mayor];
	int final = menor;
	int cont = menor;

	while (cont < mayor)
	{
		if (array[cont] < pivote)
		{
			if (array[final] != array[cont])
			{
				mover(&array[final], &array[cont]);
				print_array(array, size);
			}
			final++;
		}
		cont++;
	}
	if (array[final] > array[mayor])
	{
		mover(&array[final], &array[mayor]);
		print_array(array, size);
	}
	return (final);
}
/**
 * mover - mueve dos elementos
 *@a: elemento a
 *@b: elemento b
 * Return: Nothing
 */
void mover(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
