#include "main.h"
#include <string.h>
/**
 * print_char - prints a single character
 * @a: character to be printed
 * Return: 1, for the amount of characters printed
 */
int print_char(int a)
{
	write(1, &a, 1);
	return (1);
}
/**
 * print_string - prints a string from _printf
 * @a: pointer to string
 * Return: length of string
 */
int print_string(char *a)
{
	int length;

	if (a == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}

	length = strlen(a);

	write(1, a, length);
	return (length);
}

/**
 * print_int - Prints integer 'i' in base 10.
 * @i: integer to be printed in base 10
 *
 * Return: the amount of chars the number
 * takes in the standard output.
 */
int print_int(int i)
{
	char output[] = "          ";
	/* digits are filled from least significant; from right to left here. */
	int digit_limit = 10;
	/*
	 * integer limit is 2,417,483,647, so we only need 10 digits.
	 * Outputting the digits individually, from most significant
	 * to least significant
	 */
	int index;
	int minus_sign = 0;
	/* to count minus sign in the returned output's length */
	int digit_count;

	if (i == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	if (i < 0)
	{
		write(1, "-", 1);
		i = -1 * i;
		/* We need to turn i into a positive number to avoid wrong digit chars. */
		minus_sign = 1;
	}

	for (index = digit_limit - 1; i;)
	{
		output[index] = '0' + (i % 10);

		i /= 10;
		index--;
	}
	index++;

	digit_count = digit_limit - index;
	write(1, &(output[index]), digit_count);

	return (minus_sign + digit_count);
	/* 'minus_sign' is 0 when 'i' was not inputted negative. */
}
/**
 * print_default - prints edge case that does not apply in switch case
 * @a: pointer to character to be printed
 * Return: amount of character printed
 */
int print_default(char a)
{
	write(1, "%", 1);
	write(1, &a, 1);
	return(2);
}
/**
 * print_percent - prints percent sign
 * Return: 1, for the one percent printed
 */
int print_percent(void)
{
	write(1, "%", 1);
	return(1);
}

