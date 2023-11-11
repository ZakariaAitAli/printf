#include <stdarg.h>
#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, count = 0;
	va_list arg;
	char *str;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
			case 'c':
				j = va_arg(arg, int);
				_putchar(j);
				count++;
				break;
			case 's':
				str = va_arg(arg, char *);
				if (str == NULL)
					str = "(null)";
				while (str[j] != '\0')
				{
					_putchar(str[j]);
					j++;
					count++;
				}
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case '\0':
				return (-1);
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
