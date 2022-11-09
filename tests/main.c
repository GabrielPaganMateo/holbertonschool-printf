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
	unsigned char uc;

	for (uc = 33; uc < 200; uc++)
	{
		char format[] = "\"% \"";
		char c = (char)uc;
		int result;

		if (c == 's' || c == 'S')
		{
			continue;
		}

		format[2] = c;
		printf("'%c': ", c);

		result = printf(format);

		printf(" -> %d\n", result);
	}
    return (0);
}
