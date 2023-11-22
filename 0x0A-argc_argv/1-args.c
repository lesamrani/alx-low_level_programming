#include <stdio.h>
/**
 * main - print number of args using argc
 * @argc: number of args
 * @argv: value of args
 * Return: 0
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
