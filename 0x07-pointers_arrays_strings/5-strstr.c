/**
 * _strstr - function that return substring
 * @haystack: where to search
 * @needle: what to search
 * Return: first substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *newhay = haystack;
		char *newned = needle;

		while (*newned != '\0' && *newhay == *newned)
		{
			newhay++;
			newned++;
		}
		if (*newned == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
