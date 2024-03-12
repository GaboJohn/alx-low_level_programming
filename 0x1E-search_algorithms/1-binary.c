#include "search_algos.h"

/**
* binary_search - Searche for value in sorted array using Binary search
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located,
*         or -1 if the value is not present
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;
	
	if (array == NULL)
		return (-1);
	
	while (left <= right)
	{
		/* Print the current subarray being searched */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		
		mid = left + (right - left) / 2;
		
		if (array[mid] == value)
			return (mid);
		
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	
	/* Value not found */
	return (-1);
}
