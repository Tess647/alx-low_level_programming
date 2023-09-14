#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	int i = 0;
	char *sep = "";

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 's':
					char *x = va_arg(args, char*);

					if (!x)
						x = "(nil)";
					printf("%s%s", sep, x);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(args);
}
