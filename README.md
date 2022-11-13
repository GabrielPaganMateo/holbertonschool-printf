## Printf function / Holberton School edition
#### This repository contains the code and files for a program that emulates some of the capabilities of the C standard library input/output function "printf". Developed in C language as a learning project meant to test critical thinking, team effort, and overall knowledge of C technology.
-------------------------------------------------------------------------------------------------------------
## Description:

* ### [_printf.c](_printf.c)
Complete _printf function. It produces output under the control of a format string that specifies how each argument within the function is converted to output. The output processing of _printf.c owes its execution to the write(2) function and makes use of variable-length arguments by means of stdarg(3). Specific conversions will be made for all of the variable-length arguments, depending on the case that is listed in the format string. These cases include characters, strings, digits, and integers.

* ### [auxiliary_functions.c](auxiliary_functions.c)
Contains supporting functions for _printf. Each of the functions is tasked with the conversion of a particular type of argument and the subsequent output of said argument.

|Function| Purpose |Example|
|:--------:|:---------:|:-------:|
|print_char|Prints a single character|H|
|print_string|Prints a string|I am a string !|
|print_int|Prints integer in base 10|12
|print_default|Prints unknown conversion specifier|%r|
|print_percent|Prints a percent sign|%|

* ### [main.h](main.h)
Header file. Stores all the auxiliary function prototypes and additional library headers that are necessary for the realization of _printf.

|Library| Function(s) | Purpose|
|:-------:|:-------------:|:--------:|
|<string.h>| strlen(3) | Calculate the length of a string|
|<unistd.h>| write(2) | Write to standard output|
|<stdarg.h>| va_start(3) va_arg(3) va_end(3) | Access list of varying arguments|

* ### [man_3_printf](man_3_printf)
Manual page of _printf function. Outlines a detailed explanation of the function.

Can be accessed by entering the following input into the command line:
|man ./man_3_printf|
|------------------|
----------------------------------------------------------------------------------------------------------------
## Install and Run:
#### Instructions for using the _printf function.

1. Download an appropriate C language compiler and library collection for your OS.
2. Clone the /holbertonschool-printf repository.
3. Enter the cloned repository and within it create a file with a ".c" extension. For example, "filename.c"
4. Inside filename.c, include the "main.h" header, define a main function, and call _printf within the main function with whichever argument you would like to output.
5. Compile your program by using this command: gcc *.c -o filename
6. Finally, execute the program with the following command: ./filename

#### Shell commands
![carbon(1)](https://user-images.githubusercontent.com/113718820/201495883-8ef097f7-f214-4ebe-95d6-f008c53da253.png)
#### filename.c
![carbon(5)](https://user-images.githubusercontent.com/113718820/201500410-5c5624e3-1428-4755-8c1c-7cc0d340dbd9.png)
