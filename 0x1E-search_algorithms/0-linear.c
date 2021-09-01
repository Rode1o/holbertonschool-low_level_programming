#include "search_algos.h"
/**
* linear_search - searches for a value in an array of
* integer using the Linear search algorithms
* @array: array of integer
* @size: is the number of elements in array
* @value: the value to search for
* Return: return the first index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
  size_t i = 0;

  if (!array || size == 0)
    return (-1);
  for (; i < size; i++)
    {
      printf("Value checked array [%ld] = [%d]\n", i, array[i]);
      if (array[i] == value)
        return (i);
    }
  return (-1);
}