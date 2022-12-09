#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for print entire lowercase alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char str;

for (str = 'a' ; str <= 'z' ; str++)
{
if (str != 'q' && str != 'e')
{
putchar(str);
}
}
putchar('\n');
return (0);
}
