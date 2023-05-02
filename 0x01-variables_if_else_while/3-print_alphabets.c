#include <stdio.h>
/**
* main - A program that prints lowercase and upper case
* Return: Always return 0 (success)
*/

int main(void)
{
	char c;

/* Print lowercase alphabet */
for (c = 'a'; c <= 'z'; c++)
putchar(c);

/* Print uppercase alphabet */
for (c = 'A'; c <= 'Z'; c++)
putchar(c);

/* Print newline character */
putchar('\n');

return (0);
}
