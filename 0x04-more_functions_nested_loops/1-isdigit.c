#include "main.h"
/**
 * _isdigit - check for a digit (0 through 9)
 * @c: digit to be checked
 *
 * Return: 1 if @c is a digit
 * else return 0
 */
int _isdigit(int c)
{
int start = 48, end = 57;
if (c >= start && c <= end)
return (1);
return (0);
}
