/**
 * _strcat- function to concatenate string to gether
 * @dest: destination parameter
 * @src: source parameter
 * Return: The concantenated result
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
