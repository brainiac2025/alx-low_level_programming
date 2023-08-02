/**
 * _strlen_recursion - function to return length of string
 * @s: the string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int len;

	len = 0;
	if (*s == '\0')
	{
		return (0);
	}
	len = _strlen_recursion(s + 1);
	return (len + 1);
}
