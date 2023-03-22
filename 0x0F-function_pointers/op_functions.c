int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns a + b
 * @a: 1st term
 * @b: 2sd term
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns a - b
 * @a: 1st term
 * @b: 2sd term
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns a * b
 * @a: 1st term
 * @b: 2sd term
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return a / b
 * @a: 1st term
 * @b: 2sd term
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - return a % b
 * @a: 1st term
 * @b: 2sd term
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
