/**
 * _strncat- function to concatenate string to gether
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of byte parameter
 * Return: The concantenated result base on number specify
 */
char *_strncat(char *dest, char *src, int n)
{
	while (*dest)
	{
		dest++;
	}
	while (n)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
