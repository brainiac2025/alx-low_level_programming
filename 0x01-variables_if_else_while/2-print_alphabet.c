#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/**
	 * this program declare a character variable
	 * and test it againsta charcater between a -z
	 * and stored it inside putchar function
	 */
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}