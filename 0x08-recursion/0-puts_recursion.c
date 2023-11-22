#include <stdio.h>
#include "main.h"
#include <stdlib.h>

void _puts_recursion(char *s) {
	   if (*s == '\0') {
        printf("\n");
        return;
	   }
	   printf("%c", *s);
	   _puts_recursion(s + 1);
}

int main() {
    char str[] = "Hello, World!";
    printf("String: ");
    _puts_recursion(str);

    return 0;
}
