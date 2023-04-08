/**
 * clear_bit - set bit 0 at given index
 * @n: ptr input
 * @index: index of bit 
 * Return: 1 on succes -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > 64)
		return (-1);

	i <<= index;
	*n &= ~i;

	return (1);
}
