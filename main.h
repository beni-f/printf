#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int print_binary(va_list list);
int print_char(va_list list);
int print_string(va_list list);
int print_number(va_list list);
int _pow(int x, int y);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
