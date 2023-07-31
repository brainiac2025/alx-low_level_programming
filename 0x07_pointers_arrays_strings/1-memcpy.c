/**
 * _memcpy - function used to copy a block of memory from source
 * to destination
 * @dest: destination
 * @src: source
 * @n: number of value to copy
 * Return: destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
