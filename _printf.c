#include "main.h"
/**
 * printf - Produce output to stdout
 * @format: string that specifies how subsequent arguments are converted for output
 * Return: the amount of characters printed
 */
int _printf(const char *format, ...)
{
	va_list a;
	int i = 0;
	int char_count = 0;
	va_start(a, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
				char_count += print_char(va_arg(a, int));
				break;

				case 's':
				char_count += print_string(va_arg(a, char*));
				break;
			}
		}
		else
		{
			write(1, &format[i], 1);
			char_count += 1;
		}
	i++;
	}
va_end(a);
return (char_count);
}
