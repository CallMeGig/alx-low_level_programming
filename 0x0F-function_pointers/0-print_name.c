#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - prints a name
* @name: string to be printed
* @f: function to execute
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
