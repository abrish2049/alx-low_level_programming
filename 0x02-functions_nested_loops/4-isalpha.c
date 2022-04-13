#include "main.h"

/**
 * _isalpha - checks
 * @c: cheker
 *
 * Return: 1 for yes 0 for no
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
