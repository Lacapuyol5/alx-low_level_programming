#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
*
* Return: always 0;
*/
void print_alphabet_x10(void)
{
char i;
char p;
for (p = 0; p <= 9; p++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
