#include <ctype.h>

/**
 * _isalpha - checks if a character is lowercase
 * @c: accept an integer
 *
 * Return: 1 or 0
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}