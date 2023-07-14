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
	 * and test it againsta charcater between a -Z
	 * and stored it inside putchar function
	 */
	char alphabet;
	char caps;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	caps = 'A';
	do {
		putchar(caps);
		caps++;
	} while (caps <= 'Z');
	putchar('\n');
	return (0);
}
