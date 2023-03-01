#include "main.h"

/**
 * _puts - write a function that prints a string, followed by a new line
 * @str: this is my input sting
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
