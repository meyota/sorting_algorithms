#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble algorithm
 * @array: an array
 * @size: size of the array 'number of elements in it'
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, flag;

	if (size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				flag = 1;
				print_array(array size);
			}
		}
		if (flag == 0)
			return;
	}
}
