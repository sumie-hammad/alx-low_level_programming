#include "main.h"
/**
 * _isdigit - functions that verifies if a character is a digit or not
 *  @c: tested character
 *  Return: return 1 if is uppercase , 0 if not
 */

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
