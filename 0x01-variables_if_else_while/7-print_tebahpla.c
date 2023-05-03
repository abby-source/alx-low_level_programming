#include <stdio.h>
/**
* main - A program that prints alphabets in reverse
* Return: Always 0 (success)
*/

int main(void)
{
	int i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);

putchar('\n');

return (0);
}
