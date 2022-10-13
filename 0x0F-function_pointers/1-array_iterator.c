#include "function_pointers.h"

/**
 * array_iterator - function that execute a function
 *  @array: array
 *  @size: size of the array
 *  @action: pointer to the function
 *  Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array && action)
{
for (; i < size; i++)
	action(array[i]);
}
}
