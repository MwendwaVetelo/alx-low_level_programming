#include "main.h"

/**
 * _islower -  a function that checks for lowercase character.
 *@b: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
		return (1);
	else
		return (0);
}
