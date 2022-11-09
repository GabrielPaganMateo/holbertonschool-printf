#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_char(int a);
int print_string(char *a);
int print_int(int i);
int print_default(char a);
int print_percent(void);
#endif

