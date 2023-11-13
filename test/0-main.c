#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');

	_printf("Character:[%c]\n", '\0');
	printf("Character:[%c]\n", '\0');

	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");

	_printf("String:[%s]\n", "");
	printf("String:[%s]\n", "");

	_printf("String:[%s]\n", NULL);
	printf("String:[%s]\n", NULL);

	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");

	return (0);
}
