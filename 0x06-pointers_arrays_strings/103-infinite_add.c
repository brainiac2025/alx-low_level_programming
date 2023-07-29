#include "main.h"
/**
 * number_size - check for length
 * @n: string to check length
 * Return: the length
 */
int number_size(char *n)
{
	int index, count;

	index = 0;
	count = 0;
	while (n[index] != '\0')
	{
		count++;
		index++;
	}
	return (count);
}
/**
 * reverse- reverse the result back
 * @r: buffer
 * @index: the index
 * Return: void
 */
void reverse(int index, char *r)
{
	int i, j;

	i = 0;
	j = index - 1;
	while (i < j)
	{
		char temp;

		temp = r[i];
		r[i] = r[j];
		r[j] = temp;
		i++;
		j--;
	}
}
/**
 * infinite_add - function that add 2 numbers
 * @n1: first number
 * @n2: second number
 * @r: output result
 * @size_r: size of output
 * Return: the output
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1_len, num2_len, index, carry, max_len;

	num1_len = number_size(n1);
	num2_len = number_size(n2);
	index = 0;
	carry = 0;
	max_len = (num1_len > num2_len) ? num1_len : num2_len;
	if (size_r <= max_len + 1)
		return (0);
	while (num1_len > 0 || num2_len > 0 || carry)
	{
		int sum;

		sum = carry;

		if (num1_len >= 0)
			sum += n1[num1_len - 1] - '0';
		if (num2_len >= 0)
			sum += n2[num2_len - 1] - '0';


		r[index] = '0' + (sum % 10);
		index++;
		carry = sum / 10;
		num1_len--;
		num2_len--;
	}
	while (carry)
	{
		r[index] = '0' + (carry % 10);
		index++;
		carry /= 10;
	}
	r[index] = '\0';
	reverse(index, r);
	return (r);
}
