#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - checks if malloc succeeds, and returns ptr
 * @b: integer to be used
 * Return: pointer to int b
 */


void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
	exit(98);
return (ptr);
}
