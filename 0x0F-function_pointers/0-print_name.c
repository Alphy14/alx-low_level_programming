#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: The name given
 * @f: Pointer to the function print_name
 * Return: Void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
