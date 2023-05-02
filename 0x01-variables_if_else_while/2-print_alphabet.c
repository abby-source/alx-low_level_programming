#include <stdio.h>

/**
*main - This program prints alphabet in lowercase followed by a new line
*Return 0 always (success)
*/
int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
