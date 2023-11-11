#include <stdarg.h>
#include "main.h"

/**
 * print_char - prints a character
 * @arg: argument list
 * @count: pointer to count variable
 */
void print_char(va_list arg, int *count)
{
	int j = va_arg(arg, int);

	_putchar(j);
	(*count)++;
}

/**
 * print_string - prints a string
 * @arg: argument list
 * @count: pointer to count variable
 */
void print_string(va_list arg, int *count)
{
	int j;
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
		(*count)++;
	}
}

/**
 * print_percent - prints a percent character
 * @count: pointer to count variable
 */
void print_percent(int *count)
{
	_putchar('%');
	(*count)++;
}

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list arg;

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
					print_char(arg, &count);
					break;
				case 's':
					print_string(arg, &count);
					break;
				case '%':
					print_percent(&count);
					break;
				case '\0':
					return (-1);
				default:
					print_percent(&count);
					_putchar(format[i]);
					count++;
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
