#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>

#define ABS(x) ((unsigned char)x << 1 >> 1)
int _printf(const char *format, ...);
int print_char(int a);
int print_string(char *a);
int print_int(int i);
int print_default(char a);
int print_percent(void);
#endif

