#include "main.h"
#include <string.h>
int print_char(int a)
{
	write(1, &a, 1);
	return(1);
}

int print_string(char *a)
{
	int length;

	length = strlen(a);

	write(1, a, length);
	return(length);
}

int print_int(int i)
{
	char output[] = "          ";
	int digit_limit = 10;
	/*
	 * integer limit is 2,417,483,647, so we only need 10 digits.
	 * Outputting the digits individually, from most significant
	 * to least significant
	 */

	int index = digit_limit - 1;
	int digit_count = 0;

	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	for (; i;)
	{
		output[index] = '0' + (i % 10);

		i /= 10;
		index--;
	}
	index++;

	if (i < 0)
		write(1, "-", 1);

	digit_count = digit_limit - index;
	write(1, &(output[index]), digit_count);

	return (digit_count ? i > 0 : digit_count + 1);
}

int print_int(int i)
{
	char output[] = "          ";
	int digit_limit = 10;
	/*
	 * integer limit is 2,417,483,647, so we only need 10 digits.
	 * Outputting the digits individually, from most significant
	 * to least significant
	 */

	int index = digit_limit - 1;
	int digit_count = 0;

	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}

	for (; i;)
	{
		output[index] = '0' + (i % 10);

		i /= 10;
		index--;
	}
	index++;

	if (i < 0)
		write(1, "-", 1);

	digit_count = digit_limit - index;
	write(1, &(output[index]), digit_count);

	return (digit_count ? i > 0 : digit_count + 1);
}

