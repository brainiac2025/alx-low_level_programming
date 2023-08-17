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
	int integer, i = 0;
	char character, mychar;
	float _float;
	char *string, *sep = "";
	va_list argument;

	va_start(argument, format);
	while ((character =  format[i]) != '\0')
	{
		if (character == 'c')
		{
			mychar = va_arg(argument, int);
			printf("%c", mychar);
		}
		else if (character == 'i')
		{
			integer = va_arg(argument, int);
			printf("%s%d", sep, integer);
		}
		else if (character == 'f')
		{
			_float = va_arg(argument, double);
			printf("%s%f", sep, _float);
		}
		else if (character == 's')
		{
			string = va_arg(argument, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", sep, string);
		}

		i++;
		sep = ",";
	}
	printf("\n");
	va_end(argument);
}
