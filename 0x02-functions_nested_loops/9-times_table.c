#include "main.h"

/**
 * times table - writes the character c to stdout
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j < 10)
			{
				_putchar((i * j) +'0');
				
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');

					if (i * ( j + 1) < 10)
						_putchar(' ');
				}
			}

			else
			{
				_putchar((i * j / 10) + '0');
				_putchar((i * j % 10) + '0');

				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}

		_putchar('\n');
	}
}
