#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to be searched
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which cmp function does not return 0.
 *         If no element matches, return -1.
 *         If size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;

if (array && cmp && size > 0)
{
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
return (i);
}
}
return (-1);
}

