#include <stdarg.h>
#include <stdio.h>








void print_all(const char * const format, ...)
{
va_list args;
const char *ptr = format;
int int_arg;
char char_arg;
float float_arg;
char *str_arg;

va_start(args, format);

while (*ptr)
{
if (*ptr == 'c')
{
char_arg = va_arg(args, int);
printf("%c", char_arg);
}
else if (*ptr == 'i')
{
int_arg = va_arg(args, int);
printf("%d", int_arg);
}
else if (*ptr == 'f')
{
float_arg = va_arg(args, double);
printf("%f", float_arg);
}
else if (*ptr == 's')
{
str_arg = va_arg(args, char *);
if (str_arg == NULL)
printf("(nil)");
else
printf("%s", str_arg);
}

ptr++;


if (*ptr)
printf(", ");
}

printf("\n");
va_end(args);
}
