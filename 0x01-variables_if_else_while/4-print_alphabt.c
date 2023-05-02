#include <stdio.h>
/**
* main - This program prints alphabets in lower case
* Return: Always 0 (success)
*/

int main(void)
{
	char c;

for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
