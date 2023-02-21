
/**
 * _isalpha - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On false 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(char c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else if (c >= 97 && c <= 122)
		return (1);

	else
		return (0);
}
