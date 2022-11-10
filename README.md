## Printf function / Holberton School edition
#### This repository contains the code for a program that emulates some of the capabilities of the C standard library input/output function "printf". Developed as a learning project meant for C language implementation.
-------------------------------------------------------------------------------------------------------------
### File Descriptions:
### _printf.c 
File with complete printf function. It produces output under the control of a format string that specifies how each argument within the function is converted to output. The output processing of _printf.c owes its implementation to the write(2) function located in the unistd.h header of the C standard library. In addition, this function allows the use of variable-length arguments by means of C standard library header stdarg.h. Specific conversions will be made for all of the variable-length arguments, depending on the case that is listed in the format string.
