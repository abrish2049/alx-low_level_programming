#include "main.h"

/**
 * _islower - Cheks for lower case
 *
 * Return: 1 for lowercase 0 for else
 */
int islower(int c)
{
 	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
