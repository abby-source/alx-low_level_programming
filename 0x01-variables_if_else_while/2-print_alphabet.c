#include <stdio.h>

/**
*main - A program prints alphabet in lowercase followed by a new line
*Return: Always 0 (success)
*/
int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
