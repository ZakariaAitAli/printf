#include "main.h"

/**
 * print_integer - prints an integer
 * @arg: argument list
 * @count: pointer to count variable
 * Return: void
 */

void print_integer(va_list arg, int *count)
{
	int n = va_arg(arg, int);
	int m, j = 0, ar[7];

	if (n < 0)
	{
		_putchar('-');
		(*count)++;
		n = -n;
	}

	while (n / 10 > 1)
	{
		m = n % 10;
		ar[j] = m;
		j++;
		n = n / 10;
		(*count)++;
	}

	ar[j] = n;
	(*count)++;

	for (; j >= 0; j--)
	{
		_putchar(ar[j] + '0');
		(*count)++;
	}
}
