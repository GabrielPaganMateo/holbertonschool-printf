## Printf function / Holberton School edition
#### This repository contains the code and files for a program that emulates some of the capabilities of the C standard library input/output function "printf". Developed as a learning project meant for C language implementation.
-------------------------------------------------------------------------------------------------------------
## Description:
* ### [printf.c](_printf.c)
Complete printf function. It produces output under the control of a format string that specifies how each argument within the function is converted to output. The output processing of _printf.c owes its execution to the write function located in the unistd.h header of the C standard library. In addition, this function allows the use of variable-length arguments by means of C standard library header stdarg.h. Specific conversions will be made for all of the variable-length arguments, depending on the case that is listed in the format string.

* ### [printf_function_declaration.c](https://github.com/GabrielPaganMateo/holbertonschool-printf/blob/master/printf_function_definition.c)
Contains auxiliary functions for printf. Each of the functions is tasked with the conversion of the particular type of argument and the subsequent output of said argument.

|Function| Purpose |Example|
|--------|---------|-------|
|print_char|Prints a single character|H|
|print_string|Prints a string|I am a string !|
|print_int|Prints integer in base 10|12
|print_default|Prints unidentified conversion specifier|%r|
|print_percent|Prints a percent sign|%|
