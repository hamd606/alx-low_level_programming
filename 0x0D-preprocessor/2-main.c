int main(void)
{
	char file_name[];

	int i;

	i = 0;

	file_name = __FILE__;

	while (file_name[i])
		_putchar(file_name[i]);

}
