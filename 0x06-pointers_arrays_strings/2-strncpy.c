/**
 * _strncpy- function to copy string to gether
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of byte parameter
 * Return: The copy result base on number specify
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
