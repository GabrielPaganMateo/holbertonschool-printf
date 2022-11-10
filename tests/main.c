#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%d\n", -1);
	_printf("%d\n", -34324324);
	_printf("%d\n", 300);
	_printf("%d\n", INT_MIN);
	_printf("%d\n", INT_MAX);
	return (0);
}
