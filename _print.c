#include <main.h>
#include <unistd.h>

/**
 * _printf - a function that produces output according to a format
 * @format: a character string composed of zero or more directives
 * Return: the number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            switch (format[i])
            {
                case 'c':
                    count += print_char(va_arg(args, int));
                    break;
                case 's':
                    count += print_string(va_arg(args, char *));
                    break;
                case '%':
                    count += print_char('%');
                    break;
                default:
                    return (-1);
            }
        }
        else
        {
            count += print_char(format[i]);
        }
        i++;
    }

    va_end(args);
    return (count);
}
