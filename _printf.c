#include "main.h"
/**
 * _printf - Produce output to stdout
 * @format: string that specifies how subsequent arguments
 * are converted for output
 * Return: the amount of characters printed
 */
int _printf(const char *format, ...)
{
	va_list a;
	int i = 0;
	int char_count = 0;

	if (format == NULL)
		return (-1);

	va_start(a, format);

	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != 'c' && format[i + 1] != 's' && 
				format[i + 1] != 'd' && format[i + 1] != 'i' && format[i + 1] != '%')
		{
			write(1, "%", 1);
			write(1, &format[++i], 1);
		}
		else if (format[i] == '%')
		{
			while (format[++i] == ' ')
			{
				/* spaces between the '%' and the format char are ignored. */
			}

			switch (format[i])
			{
				case 'c':
				char_count += print_char(va_arg(a, int));
				break;

				case 's':
				char_count += print_string(va_arg(a, char*));
				break;

				case 'd': case 'i':
				char_count += print_int(va_arg(a, int));
				break;
				/*
				* for now, we're using decimal print_int for both
				* "%i" and "%d".
				*/

				case '%':
				write(1, "%", 1);
				char_count++;
				break;
				/* '%%' just cancels into '%' */

				default:
				return (-1);
			}
		}
		else
		{
			write(1, &format[i], 1);
			char_count++;
		}

		i++;
	}
	va_end(a);
	return (char_count);
}
