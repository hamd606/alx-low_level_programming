/**
  * _atoi - the same as atoi
  * @str: input
  * Return: int of the str
  */

int _atoi(char *str)
{
	int i;
	int res = 0;

	for (i = 0; str[i] != '\0'; ++i)
		res = res * 10 + str[i] - '0';

	return (res);
}
