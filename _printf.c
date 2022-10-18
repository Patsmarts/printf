#include "main.h"

/**
 *_printf - Returns the numbers of charater printed
 *@format: A variable that holds the charater
 *Return: Return the number of time character were printed
*/
int _printf(const char *format, ...)
{
	va_list ap;
 
	va_start(ap, *format);
	if (*format == '\0')
		return (0);
	va_end(ap);
	return (1 + _printf(++format));
}
