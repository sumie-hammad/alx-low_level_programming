#include "main.h"
/**
 * more_numbers - printingmore numbers
 *
 * Return: return nothing
 */
void more_numbers(void)
{
int number1, number2;

for (number1 = 0; number1 < 10; number++)
{
for (number2 = 0; number2 < 15; number2++)

i{
if (number2 > 9)
{
_putchar((number2 / 10) + '0');
}
_putchar((number2 % 10) + '0');
}
_putchar(10);
}
}

