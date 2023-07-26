/**
 * _strncat- function to concatenate string to gether
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of byte parameter
 * Return: The concantenated result base on number specify
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
