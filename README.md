## Printf function / Holberton School edition
#### This repository contains the code and files for a program that emulates some of the capabilities of the C standard library input/output function "printf". Developed as a learning project for C language implementation.
-------------------------------------------------------------------------------------------------------------
## Description:
* ### [_printf.c](_printf.c)
Complete printf function. It produces output under the control of a format string that specifies how each argument within the function is converted to output. The output processing of _printf.c owes its execution to the write function located in the unistd.h header of the C standard library. In addition, this function allows the use of variable-length arguments by means of C standard library header stdarg.h. Specific conversions will be made for all of the variable-length arguments, depending on the case that is listed in the format string. These cases are limited to 

* ### [printf_function_definition.c](printf_function_definition)
Contains auxiliary functions for printf. Each of the functions is tasked with the conversion of a particular type of argument and the subsequent output of said argument.

|Function| Purpose |Example|
|:--------:|:---------:|:-------:|
|print_char|Prints a single character|H|
|print_string|Prints a string|I am a string !|
|print_int|Prints integer in base 10|12
|print_default|Prints unknown conversion specifier|%r|
|print_percent|Prints a percent sign|%|

* ### [main.h](main.h)
Header file. Stores all the auxiliary function prototypes and additional library headers that are necessary for the realization of printf.

|Additional Library| Function(s) | Purpose|
|:-------:|:-------------:|:--------:|
|<string.h>| strlen(3) | Calculate the length of a string|
|<unistd.h>| write(2) | Write to standard output|
|<stdarg.h>| va_start(3) va_arg(3) va_end(3) | Access list of varying arguments|
