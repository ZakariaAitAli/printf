#include "main.h"

/**
 * print_string - prints a string
 * @arg: argument list
 * @count: pointer to count variable
 */
void print_string(va_list arg, int *count)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		_putchar(*str);
		(*count)++;
		str++;
	}
}
