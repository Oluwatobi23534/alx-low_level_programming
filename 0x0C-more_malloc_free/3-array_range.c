#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maxumum
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
int *arr, i = 0, j = min;

if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(int));

if (!arr)
return (0);
while (i <= max - min)
arr[i++] = j++;
return (arr);
}
