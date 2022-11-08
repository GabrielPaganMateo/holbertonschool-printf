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

