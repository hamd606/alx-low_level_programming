
/**
 * _islower - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On false 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(char c)
{
	return (c > 95);
}
