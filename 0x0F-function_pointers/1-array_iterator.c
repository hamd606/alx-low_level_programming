#include <stddef.h>

/**
 * array_iterator - executes a function parameter
 * @array: arr
 * @size: size of arr
 * @action: ptr to funtionto be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL)
		return;
	if (action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
