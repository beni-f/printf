#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
void flush_buffer(void);
int print_unsigned(va_list list);
int print_hexa_uppercase(unsigned int x);
int print_hexa_lowercase(va_list list);
int print_octal(va_list list);
int print_binary(va_list list);
int print_char(va_list list);
int print_String(va_list list);
int print_string(va_list list);
int print_number(va_list list);
int _pow(int x, int y);
int _putchar(char c);
int _printf(const char *format, ...);
#endif
