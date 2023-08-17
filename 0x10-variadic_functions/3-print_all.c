#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - function to print all
 * @format: the format specifier
 * Return: void
 */
void print_all(const char * const format, ...)
{

	int i = 0;
	char *string, *sep = "";
	va_list argument;

	va_start(argument, format);
	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argument, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(argument, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(argument, double));
				break;
			case 's':
				string = va_arg(argument, char*);
				if (string == NULL)
					string = "(nil)";
				printf("%s%s", sep, string);
				break;
			default:
				i++;
				continue;
		}
		i++;
		sep = ", ";
	}
	printf("\n");
	va_end(argument);
}
