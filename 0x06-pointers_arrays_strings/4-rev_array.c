/**
 * reverse_array - function that return array base on the size specify
 * @a: array passed
 * @n: number of element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index;
	char temp;

	index = 0;
	while (index < n)
	{
		n--;
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
		index++;
	}
}
