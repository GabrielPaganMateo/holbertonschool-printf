#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%d\n", _printf("%"));
	printf("%d\n", _printf("%%"));
	printf("%d\n", _printf("%     %"));

	return (0);
}

