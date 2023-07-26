/**
 * _strcat- function to concatenate string to gether
 * @dest: destination parameter
 * @src: source parameter
 * Return: The concantenated result
 */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
