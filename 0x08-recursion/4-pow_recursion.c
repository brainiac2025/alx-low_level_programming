/**
 * _pow_recursion - function to raised x by y
 * @x: parameter x
 * @y: parameter y the power
 * Return: the result
 */
int  _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
