#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - function that print numbers followed by new line
 * @separator: seperator after number
 * @n: number of argument
 * Return: all number
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argument;
	char *str;

	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argument, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
