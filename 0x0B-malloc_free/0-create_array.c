#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array and initializes with char c
 * @c: character to intialize with
 * @size: size of array
 * main - entry point
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
if (size == 0)
return NULL
char *c = (char *)malloc(size * sizeof(char));
if (c == NULL)

return (NULL);

for (unsigned int i = 0; i < size; i++)
{
c[i] = c;
return (c);
}
int main(void)
{
unsigned int size = 5;
char c = 'A';

char *resultArray = create_array(size, c);
if (resultArray != NULL)
{
for (unsigned int i = 0; i < size; i++)
{
printf("%c ", resultArray[i]);
}
free(resultArray);
}
else
{
printf("Memory allocation failed or size is 0\n");
}

return (0);
}
