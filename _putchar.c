#include "main.h"
/**
 *_putchar - A putchar function
 *@c: A variable that holds the charater to be passed
 *Return: Character passed to the putchar
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
