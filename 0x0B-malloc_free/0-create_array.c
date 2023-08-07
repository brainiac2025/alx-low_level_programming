#include <stdlib.h>

/**
 * create_array - function to create aray
 * @size: size of array
 * @c: character to filled the array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *myArray;

	if (size == 0)
		return ('\0');

	myArray = (char *)malloc(size * sizeof(char));
	index = 0;

	while (index < size)
	{
		myArray[index] = c;
		index++;
	}
	return (myArray);
}
